
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct producto
	{  //datos del producto
		int codigo;
		char nombre[40];
		float precio;
	};

struct tienda 
	{   //datos de las tiendas
		char tiendita[35];
		struct producto prod[4];
	};

struct ventas
	{   //datos de las ventas de los productos de cada tienda 
		int sumatoria;
		struct tienda tien[4];
	}venta[4]; 


struct producto crear ()
{
	
	for(int i = 0; i < 4; i++)
	{
		printf("Ingrese el nombre de la tienda %d: ", i + 1);
		gets(venta[i].tien[i].tiendita);
		
		for(int z = 0; z < 4; z++)
		{
			printf("\nIngrese el codigo del producto %d\n ", z + 1);
			scanf("%i",&venta[i].tien[i].prod[z].codigo);
			fflush(stdin);
			
			printf("\nIngrese la descripcion del producto\n ");
			gets(venta[i].tien[i].prod[z].nombre);
			
			printf("\nIngrese el precio del producto\n ");
			scanf("%f",&venta[i].tien[i].prod[z].precio);
			getch();
			
			venta[i].sumatoria=(venta[i].sumatoria+venta[i].tien[i].prod[z].precio);
			fflush(stdin);
		}
	}
	return venta[4].tien[4].prod[4];
}

int main () 
{
	system ("color A");
	struct producto prod1;
	prod1 = crear();
	fflush(stdin);
	
	for(int i = 0; i < 4; i++)//Ciclo que imprime el registro 
	{
		printf("\ntienda: %s\n ",venta[i].tien[i].tiendita);
		for(int x = 0; x < 4; x++)
		{           
			printf("codigo: %d nombre: %s precio: %.2f\n", venta[i].tien[i].prod[x].codigo, venta[i].tien[i].prod[x].nombre, venta[i].tien[i].prod[x].precio);
			fflush(stdin);
		}
		fflush(stdin);
		
		printf("\nTotal: %d\n ", venta[i].sumatoria);
	}
}
