#include <iostream>
#include "nao_enforcou.hpp"

bool nao_enforcou(){
    return chutes_errados.size() < 5;
}