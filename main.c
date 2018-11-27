#include <stdio.h>
typedef struct person{
    char imie[20];
    char nazwisko[20];
    long int telefon;
}person;
typedef struct book{
    int count;
    person T[10];
}book;
int main () {

  int operacja = 0;
  int indeks;
  book ks_tel={1,{{"Jan","Kowalski",123456789}}};
  do {
    printf("Co mam zrobić? (1 - wypisanie, 2 - dodawanie, 3 - usuwanie,  0 - koniec)\n");

    scanf("%d", &operacja);
    if(operacja<0 || operacja>3)
    {
        printf("podales nieprawidlowa operacje\n");
    }
    else
    {
        switch(operacja) {

          case 1:

    //Print
            for(int i=0;i<ks_tel.count;i++)
            {
                printf("%i,%s,%s,%ld\n",i+1, ks_tel.T[i].imie,ks_tel.T[i].nazwisko,ks_tel.T[i].telefon);
            }
            break;
          case 2:

    //ADD
            printf("podaj imie,nazwisko,telefon: ");
            if(ks_tel.count>=10)
            {
                printf("tablica jest przepelniona, nie mozna dodac kolejnej osoby\n ");
            }
            else
            {
                scanf("%s %s %ld",ks_tel.T[ks_tel.count].imie,ks_tel.T[ks_tel.count].nazwisko,&ks_tel.T[ks_tel.count].telefon);
                ks_tel.count++;
            }
        break;

          case 3:

    //Delete
            printf ("podaj numer indeks osoby ktora chcesz usunac");
            scanf("%i",&indeks);
            for(int i=0;i<=indeks;i++)
            {
                if(indeks<1 || indeks>ks_tel.count)
                {
                    printf("Podales nieprawodlowy indeks\n");
                    break;
                }
                else if(i==indeks)
                {
                    ks_tel.T[indeks-1]=ks_tel.T[indeks];
                    ks_tel.count--;
                }

            }

            break;

          }

    }

    } while(operacja != 0);
  }

