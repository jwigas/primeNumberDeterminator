#include <QCoreApplication>

int prima (int n , int a){
 if(n == 2){
  return 1;
 }
 if(a < n){
  if(n%a !=0){
   return prima (n , a+1);
  } else {
   return 0;
 }
}
}

int main(int argc, char *argv[])
{
     int n,i;
     int counter=0;
     int loop=0;

     printf("Masukkan batas bawah: ");
     scanf("%d", &n);

    do{
        n=n+1;
        if(prima (n,2)){
            printf("%d Prima\n",n);
            counter=counter+1;
        } else {
            printf("%d Bukan bilangan prima\n",n);
        }
        if(counter==10) loop=1;
     }
    while(loop != 1);

    for(i=0;i<10;i++){
        printf("NYEEEEH\n");
    };
}
