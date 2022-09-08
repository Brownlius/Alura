using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace UsuariosApi.Data.Dto
{
    public class CreateUsuarioDto
    {
        [Required]
        public string UserName { get; set; }
        
        [Required]
        public string Email{ get; set; }
        
        [Required]
        [DataType(DataType.Password)]
        public string Password { get; set; }
        
        [Required]
        [Compare("Password")]
        public string Re_Password { get; set; }


    }
}
