using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace UsuariosApi.Data.Requests
{
    public class AtivaContaRequest
    {
        [Required]
        public string CodigoAtivacao{ get; set; }
        [Required]
        public int UsuarioId { get; set; }

    }
}
