/*
Cajero automatico
*/

#include<stdio.h>

int main(){
	int opcion;
	float cuenta=1000,agregar,quitar;
	printf("\tBienvenido a Nuestro tienda");
	printf("\n1. Depositar en Cuenta");
	printf("\n2. Retirar de la cuenta");
	printf("\n3. Mostrar Cuenta");
	printf("\n4. Salir del cajero\n");
	printf("\nSelecione una opcion: ");scanf("%i",&opcion);
	
	switch(opcion){
		case 1:
		printf("\nDigite la Cantidad de dinero a Ingresar en cuenta: ");scanf("%f",&agregar);
		cuenta += agregar;
		printf("\nSu Saldo en cuenta es de: $%.2f",cuenta);
		break;
		
		case 2:
		printf("\nDigite la cantidad a retirar en su cuenta: ");scanf("%f",&quitar);
		if (quitar>cuenta){
			printf("\nNo cuenta con ese Saldo en su cuenta, Deposite y vuelva a intentar");
		}
		else{
			cuenta -= quitar;
			printf("\nSu saldo total en cuenta es de: $%.2f",cuenta);
		}
		break;
		
		case 3:
		printf("\nSu saldo actual en cuenta es de: $%.2f",cuenta);
		break;
		
		case 4:
			printf("\t\nHASTA LA PROXIMA, REGRESE PRONTO\n")
		break;
		
		default:
			printf("\nNo ha Ingresado ninguna opcion Valida o Existente");
	        break;
	return 0;
}