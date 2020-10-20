#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    std::string nome;  
    double salarioHora;  
   
	
  public:
    Empregado(std::string _nome, double _salarioHora) : nome(_nome), salarioHora(_salarioHora) { }

    double pagamentoMes(double horasTrabalhadas);
    std::string get_nome();
    void set_salarioHora(double _salarioHora);
    double get_salarioHora();
};

#endif
