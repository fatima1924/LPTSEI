#ifndef EXERCICE2_2_H_INCLUDED
#define EXERCICE2_2_H_INCLUDED


int exercice2_2_h()

{
  int j;
for (j=1;j<=6;j++)

{
if (j%3==0) continue;
else printf ("%d:",j);
printf("itération %d\n",j);
}

system("pause");
}


#endif // EXERCICE2_2_H_INCLUDED
