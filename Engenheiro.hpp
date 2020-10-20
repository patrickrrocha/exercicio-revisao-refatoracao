#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
    int projetos;

  public:
    Engenheiro(std::string _nome, double _salarioHora) : Empregado(_nome, _salarioHora) { }

    int get_projetos();
    void set_projetos(int _projetos);
};

#endif
