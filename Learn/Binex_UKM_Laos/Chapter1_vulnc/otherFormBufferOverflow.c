#include <stdio.h>
#include <string.h>

char password[8];
char username[8];

int login(){
    printf("username: ");
    scanf("%s", username);

    if(strncmp(username, "admin", 5) == 0){
        printf("password: ");
        scanf("%s", password);

        if(strncmp(password, "secret", 6) == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
    printf("password: ");
    scanf("%s", password);
    return 1;
}

int main(){
    int berhasil_login = login();

    if (berhasil_login && strncmp(username, "admin", 5) == 0){
        printf("Berhasil login sebagai admin!\n");
    }
    else if(berhasil_login){
        printf("Berhasil login biasa\n");
    }
    else{
        printf("gagal login\n");
    }
}




