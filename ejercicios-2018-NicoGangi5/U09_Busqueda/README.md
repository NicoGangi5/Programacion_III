[![BCH compliance](https://bettercodehub.com/edge/badge/UCC-Programacion3/04-Colas?branch=master)](https://bettercodehub.com/)

[![Build Status](https://travis-ci.org/UCC-Programacion3/04-Colas.svg?branch=master)](https://travis-ci.org/UCC-Programacion3/01-Recursividad)

## Ejercicio N°1.

Describir qué hace la siguiente función; si es recursiva o iterativa. Si es una función recursiva, realizar su versión iterativa. Si es una función iterativa, realizar su versión recursiva.

void fn(int x, int v[], int ini, int fin, int pos, bool retorno){
	pos = ini;
	retorno = false;
	while ( (pos <= fin) && (!retorno) ){
		if (v[pos] == x) {
			retorno = true;
		}
		else
			pos++;
	}
}


##  Ejercicio N°2. 
Implementar los métodos “buscar” y “buscarRecursiva” de la clase lista.


##    Ejercicio N°3. 
Escribir un algoritmo que dado una secuencia de números ingresados por teclado vaya generando un árbol balanceado. Modificar la Clase Árbol vista en clase.

