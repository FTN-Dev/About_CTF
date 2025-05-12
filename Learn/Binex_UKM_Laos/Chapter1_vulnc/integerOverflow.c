#include <stdio.h>

void menu(){
    puts("Welcome to the wood shop!");
    puts("1. Buy Wood");
    puts("2. Check Balance");
    printf(">> ");
}

int main(){
    int balance = 10;

    while(1){
        menu();
        int choice;

        scanf("%d", &choice);

        if (choice == 1){
            int amount;
            puts("$2 Each, how much do you want to buy?");
            printf(">> ");
            scanf("%d", &amount);
            int totalprice = 2 * amount;
            if(totalprice < balance){
                balance -= totalprice;
                puts("Sukses!!!!");
            }
            else{
                puts("Minggir Lu Miskin!!");
            }
        }
        else if (choice == 2){
            printf("You have $%d\n\n", balance);
        }
    }
}