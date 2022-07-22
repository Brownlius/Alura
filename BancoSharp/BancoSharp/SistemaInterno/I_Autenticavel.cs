namespace BancoSharp.SistemaInterno
{
    public interface I_Autenticavel
    {
        public bool Autenticar(string login, string senha);
    }
}
