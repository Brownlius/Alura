﻿using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace FilmesApi.Models
{
    public class Gerente
    {
        [Required]
        [Key]
        public int Id{ get; set; }
        public string Nome { get; set; }
    }
}
