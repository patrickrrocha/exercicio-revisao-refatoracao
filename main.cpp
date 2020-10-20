#include "Empregado.hpp"
#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {

  Engenheiro eng1 = Engenheiro("Joao Snow", 35);
  eng1.set_projetos(3); 
  std::cout << "Nome: " << eng1.get_nome() << std::endl;
  std::cout << "Salario Mes: " << eng1.pagamentoMes(9.5) << std::endl;
  std::cout << "Projetos: " << eng1.get_projetos() << std::endl;
  std::cout << std::endl;
  
  Engenheiro eng2 = Engenheiro("Daniela Targaryen", 30);
  eng2.set_projetos(1); 
  std::cout << "Nome: " << eng2.get_nome() << std::endl;
  std::cout << "Salario Mes: " << eng2.pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng2.get_projetos() << std::endl;  
  std::cout << std::endl;
  
  Engenheiro eng3 = Engenheiro("Bruno Stark", 30);
  eng3.set_projetos(2); 
  std::cout << "Nome: " << eng3.get_nome() << std::endl;
  std::cout << "Salario Mes: " << eng3.pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng3.get_projetos() << std::endl;  
  std::cout << std::endl;
  
  
  Vendedor vend1 = Vendedor("Tonho Lannister", 20);
  vend1.set_quotaMensalVendas(5000);
  
  std::cout << "Nome: " << vend1.get_nome() << std::endl;
  std::cout << "Salario Mes: " << vend1.pagamentoMes(6) << std::endl;  
  std::cout << "Quota vendas: " << vend1.quotaTotalAnual() << std::endl;
  std::cout << std::endl;
  
  Vendedor vend2 = Vendedor("Jose Mormont", 25);
  vend2.set_quotaMensalVendas(3000);
  
  std::cout << "Nome: " << vend2.get_nome() << std::endl;
  std::cout << "Salario Mes: " << vend2.pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend2.quotaTotalAnual() << std::endl; 
  std::cout << std::endl;  
	
  Vendedor vend3 = Vendedor("Sonia Stark",30);
  vend3.set_quotaMensalVendas(4000);
  
  std::cout << "Nome: " << vend3.get_nome() << std::endl;
  std::cout << "Salario Mes: " << vend3.pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend3.quotaTotalAnual() << std::endl;  
  
  return 0;	
}