using AutoMapper;
using FilmesApi.Data;
using FilmesApi.Data.Dtos.Gerente;
using FilmesApi.Models;
using Microsoft.AspNetCore.Mvc;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace FilmesApi.Controllers
{
    [ApiController]
    [Route("[controller]")]
    public class GerenteController : ControllerBase
    {
        private AppDbContext _context;
        private IMapper _mapper;

        public GerenteController(AppDbContext context, IMapper mapper)
        {
            _context = context;
            _mapper = mapper;

        }
        public IActionResult AddGerente(CreateGerenteDto dto)
        {
            Gerente gerente = _mapper.Map<Gerente>(dto);
            _context.Gerentes.Add(gerente);
            _context.SaveChanges();
            return CreatedAtAction(nameof(GetGerenteById), new { Id = gerente.Id }, gerente);
        }
        [HttpGet("{Id}")]
        public IActionResult GetGerenteById(int Id)
        {
                Gerente gerente= _context.Gerentes.FirstOrDefault(gerente => gerente.Id == Id);
                if (gerente != null)
                {
                    ReadGerenteDto gerenteDto = _mapper.Map<ReadGerenteDto>(gerente);

                    return Ok(gerenteDto);
                }
                return NotFound();
            
        }
    }
}
