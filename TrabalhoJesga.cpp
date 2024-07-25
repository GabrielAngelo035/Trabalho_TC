#include<stdio.h>

int x,y;

#include <stdio.h>

int sucessora(int n){
    // printf("Valor de n: %d\n",n);
    return n+1;
}

int soma(int x, int y){
    if(y==0){
        // printf("[Soma] Valor de x: %d e y: %d\n",x,y);
        return x;
    }
    else {
        // printf("[Soma] Valor de x: %d e y: %d\n",x,y);
        return sucessora(soma(x, y-1));
    }
}

int subt(int x, int y){
    if(y==0)
        return x;
    else
        return ant(subt(x,y-1));
}

int mult(int x, int y){
    if(y==0){
        // printf("[Multiplicacao] Valor de x: %d e y: %d\n",x,y);
        return 0;
    }
    else {
        // printf("[Multiplicacao] Valor de x: %d e y: %d\n",x,y);
        return soma(x, mult(x,y-1));
    }
}

int elevado(int x, int y){
    if(y==0)
        return 1;
    else
        return mult(x,elevado(x,y-1));
}

int fatorial(int x){
    if(x==0)
        return 1;
    else
        return mult(x, fatorial(x-1));
}

int cosg(int x){
    if(x==0)
        return 1;
    else
        return 0;
}

int par(int x){
    if(x==0)
        return 1;
    else
        return cosg(par(x-1));
}

int impar(int x){
    if(x==0)
        return 0;
    else
        return cosg(impar(x-1));
}

int ant(int x){
    if(x==0)
        return 0;
    else
        return x-1;
}

int difAbs(int x, int y){
    return soma(subt(x,y),subt(y,x));
}

int sg(int x){
    if(x==0)
        return 0;
    else
        return 1;
}

int maiorQue(int x, int y){
    return sg(subt(x,y));
}

int main(){
	x=10;
	printf("%d",x);
	
	
	
	return 0;
}
