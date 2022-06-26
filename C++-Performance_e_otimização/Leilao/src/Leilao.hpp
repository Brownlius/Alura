#ifndef Leilao_hpp
#define Leilao_hpp
#include <vector>
#include <string>
#include "Lance.hpp"

class Leilao
{
private:
    std::vector<Lance> lances;
    std::string_view descricao;
public:
    Leilao(std::string_view descricao);
    const std::vector<Lance>& recuperaLances() const;
    void recebeLance(const Lance& lance);
};

#endif /* Leilao_hpp */
