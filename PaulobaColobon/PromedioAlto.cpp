//Creado por Colobon Pauloba

/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
#include<iostream>

/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
using namespace std;

/*Es la función principal y dentro de ella podemos escribir las operaciones*/
int main()

{

/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
	float CBPJ_x,CBPJ_pm;

/*El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación*/
	int CBPJ_i=0,CBPJ_l;
	cout<<"Ingrese l: ";
	cin>>CBPJ_l;

/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
	do{

/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *CBPJ_x:*/
		cout<<"Ingrese x: ";

/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos CBPJ_x */
		cin>>CBPJ_x;

//Hacemos el proceso de la sumatoria de nuestros contadores
		CBPJ_i=CBPJ_i+1;

/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
		if(CBPJ_x>CBPJ_pm){

//igualamos CBPJ_pm a CBPJ_x;
			CBPJ_pm=CBPJ_x;
		}

/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
	}while(CBPJ_i<CBPJ_l);

//Muestro resultados por pantalla
	cout<<"El promedio maximo de el curso fue: "<<CBPJ_pm<<endl<<endl;

/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
	return 0;
}

