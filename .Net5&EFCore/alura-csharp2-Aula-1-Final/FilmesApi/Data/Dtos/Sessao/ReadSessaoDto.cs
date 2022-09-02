using FilmesAPI.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace FilmesApi.Data.Dtos.Sessao
{
    public class ReadSessaoDto
    {
        public Cinema Cinema { get; set; }
        public int SessaoId { get; set; }
        public Filme Filme{ get; set; }

        public DateTime EncerramentoSessao { get; set; }
        public DateTime HorarioInicio { get; set; }
    }
}