using FilmesApi.Models;
using FilmesAPI.Models;
using Microsoft.EntityFrameworkCore;

namespace FilmesApi.Data
{
    public class AppDbContext : DbContext
    {
        public AppDbContext(DbContextOptions<AppDbContext> opt) : base(opt)
        {

        }
        protected override void OnModelCreating(ModelBuilder builder)
        {
            builder.Entity<Endereco>()
                .HasOne(endereco => endereco.Cinema)
                .WithOne(cinema => cinema.Endereco)
                .HasForeignKey<Cinema>(Cinema => Cinema.EnderecoId);
            builder.Entity<Cinema>()
                .HasOne(cinema => cinema.Gerente)
                .WithMany(gerente => gerente.Cinemas)
                .HasForeignKey(cinema => cinema.GerenteId);

            builder.Entity<Sessao>()
           .HasOne(Sessao => Sessao.Filme)
           .WithMany(filme => filme.Sessoes)
           .HasForeignKey(Sessao => Sessao.FilmeId);

            builder.Entity<Sessao>()
           .HasOne(Sessao => Sessao.Cinema)
           .WithMany(Cinema => Cinema.Sessoes)
           .HasForeignKey(Sessao => Sessao.CinemaId);

        }

       

        public DbSet<Filme> Filmes { get; set; }
        public DbSet<Cinema> Cinemas { get; set; }
        public DbSet<Endereco> Enderecos { get; set; }
        public DbSet<Gerente> Gerentes { get; set; }
        public DbSet<Sessao> Sessoes { get; set; }
    }
}