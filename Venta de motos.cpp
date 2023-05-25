/*
Venta de motos
*/

#include<stdio.h>

int main(){
	int opcion;
	
	printf("\tBienvenido a nuestra marca de carritos barum");
	printf("\n\n1. Honda con un descuento de 5%");
	printf("\n2. Yamaha con un descuento de 8%");
	printf("\n3. Suzuki con un descuento de 10%");
	printf("\n4. Otras Marcas con un descuento de 2%");
	
	printf("\n\nIngrese una opcion para la compra de su equipo: "),scanf("%i",&opcion);
	
	while (false)
	switch(opcion){
		case 1:printf("\n\tLos Autos Honda salen a $2000");
		printf("\n\nCon el Descuento su total de compra es de $1900, Espero disfrute su vehiculo");
		break;
		
		case 2:printf("\n\tLos Autos Yamaha salen a $4300");
		printf("\n\nCon el descuento aplicado el precio final es de $3956,Espero disfrute su vehiculo");
		break;
		
		case 3:printf("\n\tLos Autos Suzuki salen a $7000");
		printf("\n\nCon el descuento aplicado el final es de $6300, Espero disfrute su vehiculo");
		break;
		
		case 4:printf("\n\tEstos son autos genericos y posiblemente usados a la venta a $800");
		printf("\n\nEl precio con descuento de los vehiculos es de $774, Espero disfrute su vehiculo");
		break;
		
		default: printf("\nNo ha digitado una opcion valida o existente");break;
	}
	return 0;
}