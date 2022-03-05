#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int getRandom(){
    int r = rand() % 4 + 1; // [1,4] arasında rastgele sayi
    return r;
}
void UltraFal(){
    puts("...");
    puts("wow başardın, artık geleceği görebilirsin");
    sleep(1);
    puts(".");
    sleep(1);
    puts(".");
    sleep(1);
    puts(".");
    puts("3 sn geleceği gördün.");
}

int main(){
    srand(time(NULL));
    char name[20];
    int r;
    printf("Heyyy, adını gir ve falını gör.\n> ");
    gets(name);
    printf("\nHoş geldin ");
    printf(name);
    r=getRandom();
    switch (r)
    {
    case 1:
        puts("3 vakte kadar Tersine Mühendisliğe Giriş eğitimine katılacaksın.");
        break;
    case 2:
        puts("Geçmişte yaşadığın bir şey seni AUCC'ye getirmiş.");
        break;
    case 3:
        puts("Doğum tarihin Ocak, Şubat, Mart, Nisan, Mayıs, Haziran, Temmuz, Ağustos, Eylül, Ekim, Kasım, Aralık aylarından biri.");
        break;
    case 4:
        puts("1337 kere denediğin bir iş başarıyla sonuçlanacak.");
        break;
    case 1337:
        UltraFal();
        break;
    default:
        break;
    }
}