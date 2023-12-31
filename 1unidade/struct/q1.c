#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario {
    char nome[20];
    float salario;
    int identificador;
    char cargo[20];
}Funcionario;

void preenche(struct Funcionario *f, int q) {
    int i;
    for (i = 0; i < q; i++) {
        printf("Digite o nome do funcionario: ");
        scanf("%[^\n]s", f[i].nome);
        printf("Digite o salario: ");
        scanf("%f", &f[i].salario);
        printf("Digite o numero identificador: ");
        scanf("%d", &f[i].identificador);
        printf("Digite o cargo: ");
        scanf("%[^\n]s", f[i].cargo);
    }
}

void imprime(struct Funcionario *f, int q) {
    int i;
    for (i = 0; i < q; i++) {
        printf("Nome: %s\nSalario: %f\nIdentificador: %d\nCargo: %s\n",
               f[i].nome, f[i].salario, f[i].identificador, f[i].cargo);
    }
}

void alterars(struct Funcionario *f, int q) {
    int i;
    float novoSalario;
    printf("Digite o salario para alterar: ");
    scanf("%f", &novoSalario);
   
        f[i].salario = novoSalario;
    }


void maiormenors(struct Funcionario *f, int q) {
    int i;
    float salariomaior =0
    int imaior,imenor;
    

    for (i = 1; i < q; i++) {
        if (f[i].salario > salariomaior) {
            salariomaior = f[i].salario;
            imaior=i;
           
        }
          if (f[i].salario < salariomenor) {
            salariomenor = f[i].salario;
            imenor=i;
            
        }}
    
      printf("O cargo e salario do funcionario com maior salario eh: %s %f\n",
        f[imaior].cargo, f[imaior].salario);
    printf("O cargo e salario do funcionario com menor salario eh: %s %f\n",
         f[imenor].cargo, f[imenor].salario);
}
void alterars(struct Funcionario *f, int q){
char nnome[20];
float novosalario;

printf("Digite o nome do funcionario que deseja alterar")
scanf("%[^\n]s", nnome);
for(i=0;i<q;i++){
if (strcmp(nnome,f[i].nome==0){ //se os dois nomes forem iguais fica igual a 0
printf("Digite o salario para modificar");
scanf("%f",&novosalario);
salario[i]=novosalario;}}}


int main() {
    int q;
    printf("Qual a quantidade de funcionarios? ");
    scanf("%d", &q);
    struct Funcionario *f = malloc(q * sizeof(struct Funcionario));

    if (f == NULL) {
        printf("Erro na alocacao");
        exit(1);
    }

    preenche(f, q);
    imprime(f, q);
    alterar(f,q);
    

    maiormenors(f, q);
  

    free(f);
    return 0;
}
