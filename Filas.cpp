#include<iostream>
using namespace std;

const int tam = 10;

class fila
{
	private:
	 int elem[tam];
	 int frente,tras;
	 
	public:
	
	 fila()
	 {
		 frente=tras=0;
	 }
	 
	 bool filavazia()
	 {
		 return frente == tras;
	 }
	 
	 bool filacheia()
	 {
		 return (tras - frente) == 10;
		 
	 }
	 
	 void enfileirar(int valor)
	 {
		 if(tras == tam)
		 {
			 int i;
			 
			 for(i=0 ; i<(tras - frente); i++)
			 {
				elem[i] = elem[frente+i]; 
			 }
			 frente = 0;
			 tras = i;
		 }
		 
		 elem[tras] = valor;
		 tras++;
	 }
	 
	 int desinfileirar()
	 {
		 return elem[frente++];
	 }
	 
	 void listar()
	 {
		 for(int i=frente; i<tras;i++)
		 cout<<elem[i]<<" "<<endl;
	 }
	  
};


int main()
{
	fila a;
	
	int valor = 10;
	
	a.enfileirar(valor);
	a.listar();
}
