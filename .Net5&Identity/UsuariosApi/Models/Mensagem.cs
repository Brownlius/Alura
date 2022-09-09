using MimeKit;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace UsuariosApi.Models
{
    public class Mensagem
    {
        public List<MailboxAddress> Destinatario { get; set; }
        public string Assunto { get; set; }
        public string Content { get; set; }

        public Mensagem(IEnumerable<string> destinatario, string assunto,int usuarioId,Task<string> codigoEmail)
        {
            Destinatario = new List<MailboxAddress>();
            Destinatario.AddRange(destinatario.Select(d => new MailboxAddress(d.ToString())));
            Assunto = assunto;
            Content = $"http://localhost:6000/ativa?usuarioId={usuarioId}&codigoAtivacao={codigoEmail}";
        }

    }
}
