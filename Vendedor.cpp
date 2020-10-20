#include "Vendedor.hpp"

double Vendedor::get_quotaMensalVendas(){
    return quotaMensalVendas;
}

void Vendedor::set_quotaMensalVendas(double _quotaMensalVendas){
	quotaMensalVendas = _quotaMensalVendas;
}

double Vendedor::quotaTotalAnual() {
	return (get_quotaMensalVendas() * 12);
}
