    #include <stdio.h>
    #include <locale.h>

    int main(){
    int idade = 18;
    char car[33];

    printf("Insira a sua idade:");
    scanf("%d", & idade);
    getchar();
    if(idade < 18){
        printf("Menor de idade, entrada proibida");

    }else{
    printf("Entrada permitida");
    }

    //parte 2

    printf("\nVoce tem carteira de motorista para dirigir? ");
    scanf("%s", car);

    if(strcmp(car, "sim") == 0){
        printf("Voce pode dirigir");
    }
    else if(strcmp(car, "nao") == 0){
        printf("Voce nao pode dirigir");
    }
    else{
        printf("Resposta nao identificada");
    }
        return 0;
    }
