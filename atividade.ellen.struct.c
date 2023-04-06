#include <stdio.h>

int main()
{
    struct programa
    {
        float nump;
        float saldo;
        int escolha;
        float receita;
        float despesa;
    };
    struct programa projeto;
    printf("Digite o número do projeto:");
    scanf("%f", &projeto.nump);
    
    printf("Digite seu saldo:");
    scanf("%f", &projeto.saldo);
    
    
    printf("Digite '1' para receita e '2' para despesa:");
    scanf("%d", &projeto.escolha);
    if(projeto.escolha ==1){
        printf("Digite o valor da receita:");
        scanf("%f", &projeto.receita);
        projeto.saldo=+projeto.receita;
        printf("Saldo atual: %f", &projeto.saldo);
    }
    else if(projeto.escolha == 2){
        printf("Digite o valor da despesa:");
        scanf("%f", &projeto.despesa);
        projeto.saldo-=projeto.despesa;
        printf("Saldo atual: %f", &projeto.saldo);
    }
    else{
        printf("Opção invalida!");
    }
    
    return 0;
}