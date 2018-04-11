#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int a=0,b=0,c=0,d=0,res=0,i;
  float ac=0,ac2=0,d2=0,b2=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=8;
  float h=0,p=0,ar=0;
  printf("Ingrese el lado de abajo a: ");
  scanf("%d\n",&a);
  printf("Ingrese el lado Izquierdo b: ");
  scanf("%d\n",&b);
  printf("Ingrese el lado de arriba c: ");
  scanf("%d\n",&c);
  printf("Ingrese el lado derecho d: ");
  scanf("%d\n",&d);

  //altura
  ac=a-c;
  ac2=ac*ac;
  d2=d*d;
  b2=b*b;
  n1=4*ac2*d2;
  n2=d2+ac2-b2;
  n3=n2*n2;
  n8=n1-n3;

  do
  {
   i= i+0.1;
   res= i*i;
 }while (res>=n8);

//  n4=sqrt(n8);

  n5=2*ac;
  h=n4/n5;

  //perimetro
  p=a+b+c+d;

  //area
  n6=a+c;
  n7=h*n6;
  ar=n7/2;

  //imprimir
  printf("Altura: %.2f\n",h );
  printf("Perimetro: %.2f\n",p );
  printf("Area: %.2f\n",ar );

  return 0;
}
