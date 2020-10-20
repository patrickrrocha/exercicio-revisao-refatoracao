#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {
  private:
	double quotaMensalVendas; 

  public:
    Vendedor(std::string _nome, double _salarioHora) : Empregado(_nome, _salarioHora) { }

    double get_quotaMensalVendas();
    void set_quotaMensalVendas(double _quotaMensalVendas);
	  double quotaTotalAnual();
	
};

#endif
