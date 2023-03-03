#include <stdio.h>
#include <stdlib.h>

#define ren 8
#define col 8

void torre();
void alfil();

int main(){

 int opcion=0;
  while(1){
   printf("\n\t*** TABLERO DE AJEDREZ****\n");
   printf("\nElige del 1 al 3 y presiona enter\n");
   printf("1) Torre.\n");
   printf("2) Alfil.\n");
   printf("3) Salir.\n");
   scanf("%d", &opcion);

   switch(opcion){
    case 1:
     torre();
     break;
    case 2:
     alfil();
     break;
    case 3:
     return 0;
    default:
     printf("Opcion no válida.\n");
   }
  }
return 0;
}

void torre (){

   int i,j,x,y;
   char arr[ren][col];

   printf("Ingrese una coordenada en [x] del 0 al 7 y presione enter\n");
   scanf("%d",&x);

   if(x>7){
    printf("Número no válido\n");
    return torre();
   }
    else{
     if(x<0){
      printf("Número no válido\n");
      return torre();
     }
    }

   printf("Ahora ingrese una coordenada en [y] del 0 al 7 y presione enter\n");
   scanf("%d",&y);
   if(y>7){
    printf("Número no válido\n");
    return torre();
   }
    else{
     if(y<0){
      printf("Numero no válido\n");
      return torre();
     } 
    }

  for(i=0;i<ren;i++){
   for(j=0;j<col;j++){
    if(i==x && j==y){
     arr[i][j]= 'T';
    }
     if(i==x && j!=y){
      arr[x][j]='-'; 
     }
      if(j==y && i!=x){
       arr[i][y]='|';
      }
       if(i!=x && j!=y){
        arr[i][j]= 'X';
       }
    }
  }
  for(i=0;i<ren;i++){
   printf("\n");
    for(j=0;j<col;j++){
     printf("%c  ",arr[i][j]);
    }
  } 
}

void alfil (){

   int i,j,x,y;
   char arr[ren][col];

   printf("Ingrese una coordenada en [x] del 0 al 7 y presione enter\n");
   scanf("%d",&x);

    if(x>7){
     printf("Número no válido\n");
     return alfil();
    }
     else{
      if(x<0){
       printf("Numero no válido\n");
       return alfil();
      }
     }

   printf("Ahora ingrese una coordenada en [y] del 0 al 7 y presione enter\n");
   scanf("%d",&y);

    if(y>7){
     printf("Número no válido\n");
     return alfil();
    }
     else{
      if(y<0){
       printf("Número no válido\n");
       return alfil();
      }
     }

   arr[x][y]='A';

   for(i=0;i<col;i++){
    for(j=0;j<ren;j++){
     arr[i][j]='X';
    }
   }
   
   arr[x][y]='A';

   for(i=0;i<col;i++){
    for(j=0;j<ren;j++){
     if (abs(i - x) == abs(j - y)){ 
      arr[i][j]='-';
     } 
    }
   }

   arr[x][y]='A';

   for(i=0;i<ren;i++){
    printf("\n");
     for(j=0;j<col;j++){
      printf("%c  ",arr[i][j]);
     }
   } 
 }
