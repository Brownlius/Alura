using MailKit.Net.Smtp;
using MimeKit;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UsuariosApi.Models;

namespace UsuariosApi.Services
{
    public class EmailService
    {
        public void EnviarEmail(string[] destinatario, string assunto, int usuarioId, Task<string> codigoEmail)
        {
            Mensagem mensagem = new Mensagem(destinatario, assunto, usuarioId, codigoEmail);
            var mensagemEmail = CriaCorpoEmail(mensagem);
            Enviar(mensagemEmail);
        }

        private void Enviar(MimeMessage mensagemEmail)
        {
            using(var client = new SmtpClient())
            {
                try
                {
                    client.Connect("A fazer");
                    client.Send(mensagemEmail);
                }
                catch
                {
                    throw;
                }
                finally
                {
                    client.Disconnect(true);
                    client.Dispose();   
                }
            }
           
        }

        private MimeMessage CriaCorpoEmail(Mensagem mensagem)
        {
            var mensagemEmail = new MimeMessage();
            mensagemEmail.From.Add(new MailboxAddress("Add Remetente"));
            mensagemEmail.To.AddRange(mensagem.Destinatario);
            mensagemEmail.Subject = mensagem.Assunto;
            mensagemEmail.Body = new TextPart(MimeKit.Text.TextFormat.Text)
            {
                Text = mensagem.Content
            };
            return mensagemEmail;
        }
    }
}
