#include "Empregado.hpp"


double Empregado::pagamentoMes(double horasTrabalhadas) {
 
    double t = horasTrabalhadas;
	  
	//Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
    }
	return (t * get_salarioHora());
}

std::string Empregado::get_nome(){
    return nome;
}

void Empregado::set_salarioHora(double _salarioHora){
    salarioHora = _salarioHora;
}

double Empregado::get_salarioHora(){
    return salarioHora;
}
