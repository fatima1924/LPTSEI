#ifndef EXERCICE3_H_INCLUDED
#define EXERCICE3_H_INCLUDED


int exercice3_h ()

{
int a,b,absolu;

 printf("entrer la valeur de a : ");
 scanf("%d", &a) ;

 printf("entrer la valeur de b : ");
 scanf("%d", &b) ;

 absolu=abs(a*b);
 printf("le résultat est : %d",absolu);

return;
}


#endif // EXERCICE3_H_INCLUDED
