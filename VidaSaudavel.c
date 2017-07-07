#include <stdio.h>
int controle = 0, dieta = 0;
float altura, peso, imc;
char sexo, nome[20];

void ResultadoDieta();
void ResultadoDietaArq();
void LerValidarNome();
void LerValidarSexo();
void LerValidarAltura();
void LerValidarPeso();
void ResultadoMasculino();
void ResultadoFeminino();
void Caso1();
void Caso2();
void Caso3();

int Menu();

int main(){
int opcao = 0;

do{
    opcao = Menu();
    switch (opcao){

    case 1: //Cadastro de pessoa física
        Caso1();
        system ("pause");
    break;

    case 2: //Organizador de Dietas
        Caso2();
        system ("pause");
    break;

    case 3: //Recomendações nutricionais
        Caso3();
        system("pause");
    break;

    case 4: //SAIR
        printf ("\n\t-----------------------------------");
        printf ("\n\t Obrigado! Volte sempre!");
        printf ("\n\t-----------------------------------");
    break;

    default:
        while((opcao <= 0)||(opcao > 3)){
        printf ("\t\n\n  ERRO! Digite um numero valido:  ");
        scanf("%d", &opcao);
       }
    }
}while (opcao != 4);

return 0;
}

void ResultadoDieta(){
    switch (dieta){
    case 1:
        printf ("\n\t **Dieta para Ganho de Peso**\n\n");
        printf ("\tDESJEJUM -(06:30)\n\n ");
        printf ("\tCarboidratos(massas)= 70g\n");
        printf ("\tLeite e derivados= 150g\n");
        printf ("\tFrutas= 154g\n");
        printf ("\n\tCOLACAO - (09:30)\n\n ");
        printf ("\tFrutas= 100g\n");
        printf ("\tProteina= 50g\n");
        printf ("\tProteina Saudavel= 10g\n");
        printf ("\n\tALMOCO - (12:30)\n\n ");
        printf ("\tCarboidratos= 150g\n");
        printf ("\tFeijao e derivados= 90g\n");
        printf ("\tProteina= 110g\n");
        printf ("\tVegetal A(verduras em geral, beterraba, etc)= A vontade\n");
        printf ("\tVegetal B(batata, mandioca, cenouras, etc)= 102g\n");
        printf ("\n\tLANCHE - (15:30)\n\n ");
        printf ("\tCarboidratos= 70g\n");
        printf ("\tFeijao e derivados= 20g\n");
        printf ("\tProteina= 60g\n");
        printf ("\tFrutas= 200g\n");
        printf ("\n\tJANTAR - (18:30)\n\n ");
        printf ("\tCarboidratos= 150g\n");
        printf ("\tFeijao e derivados= 90g\n");
        printf ("\tProteina= 110g\n");
        printf ("\tVegetal A(verduras em geral, beterraba, etc)= A vontade\n");
        printf ("\tVegetal B(batata, mandioca, cenouras, etc)= 102g\n");
        printf ("\n\tCEIA - (22:00)\n\n ");
        printf ("\tFrutas= 80g\n");
    break;

    case 2:
         printf ("\n\t **Dieta para Manutencao de Peso**\n\n");
        printf ("\tDESJEJUM -(06:30)\n\n ");
        printf ("\tCarboidratos(massas)= 50g\n");
        printf ("\tLeite e derivados= 120g\n");
        printf ("\tFrutas= 154g\n");
        printf ("\n\tCOLACAO - (09:30)\n\n ");
        printf ("\tFrutas= 90g\n");
        printf ("\tProteina= 35g\n");
        printf ("\tGordura Saudavel= 5g\n");
        printf ("\n\tALMOCO - (12:30)\n\n ");
        printf ("\tCarboidratos= 100g\n");
        printf ("\tFeijao e derivados= 70g\n");
        printf ("\tProteina= 90g\n");
        printf ("\tVegetal A(verduras em geral, beterraba, etc)= A vontade\n");
        printf ("\tVegetal B(batata, mandioca, cenouras, etc)= 90g\n");
        printf ("\n\tLANCHE - (15:30)\n\n ");
        printf ("\tCarboidratos= 50g\n");
        printf ("\tFeijao e derivados= 20g\n");
        printf ("\tProteina= 50g\n");
        printf ("\tFrutas= 150g\n");
        printf ("\n\tJANTAR - (18:30)\n\n ");
        printf ("\tCarboidratos= 100g\n");
        printf ("\tFeijao e derivados= 70g\n");
        printf ("\tProteina= 90g\n");
        printf ("\tVegetal A(verduras em geral, beterraba, etc)= A vontade\n");
        printf ("\tVegetal B(batata, mandioca, cenouras, etc)= 90g\n");
        printf ("\n\tCEIA - (22:00)\n\n ");
        printf ("\tFrutas= 80g\n");
    break;

    case 3:
        printf ("\n\t **Dieta para Perda de Peso**\n\n");
        printf ("\tDESJEJUM -(06:30)\n\n ");
        printf ("\tCarboidratos(massas)= 40g\n");
        printf ("\tLeite e derivados= 90g\n");
        printf ("\tFrutas= 120g\n");
        printf ("\n\tCOLACAO - (09:30)\n\n ");
        printf ("\tFrutas= 80g\n");
        printf ("\tProteina= 40g\n");
        printf ("\n\tALMOCO - (12:30)\n\n ");
        printf ("\tCarboidratos= 80g\n");
        printf ("\tFeijao e derivados= 50g\n");
        printf ("\tProteina= 80g\n");
        printf ("\tVegetal A(verduras em geral, beterraba, etc)= A vontade\n");
        printf ("\tVegetal B(batata, mandioca, cenouras, etc)= 60g\n");
        printf ("\n\tLANCHE - (15:30)\n\n ");
        printf ("\tCarboidratos= 60g\n");
        printf ("\tFeijao e derivados= 20g\n");
        printf ("\tProteina= 50g\n");
        printf ("\tFrutas= 100g\n");
        printf ("\n\tJANTAR - (18:30)\n\n ");
        printf ("\tCarboidratos= 90g\n");
        printf ("\tFeijao e derivados= 70g\n");
        printf ("\tProteina= 80g\n");
        printf ("\tVegetal A(verduras em geral, beterraba, etc)= A vontade\n");
        printf ("\tVegetal B(batata, mandioca, cenouras, etc)= 60g\n");
        printf ("\n\tCEIA - (22:00)\n\n ");
        printf ("\tFrutas= 80g\n");
    break;
    }
}

void ResultadoDietaArq(){
    char nome[] = "Dieta.txt";
    FILE*arq;

    arq = fopen(nome, "w");
    if (arq == NULL){
        printf("Erro, nao foi possivel abrir o arquivo\n");
    }else{
    switch (dieta){
    case 1:
        fprintf (arq,"\n\t **Dieta para Ganho de Peso**\n\n");
        fprintf (arq,"\tDESJEJUM -(06:30)\n\n ");
        fprintf (arq,"\tCarboidratos(massas)= 70g\n");
        fprintf (arq,"\tLeite e derivados= 150g\n");
        fprintf (arq,"\tFrutas= 154g\n");
        fprintf (arq,"\n\tCOLACAO - (09:30)\n\n ");
        fprintf (arq,"\tFrutas= 100g\n");
        fprintf (arq,"\tProteina= 50g\n");
        fprintf (arq,"\tProteina Saudavel= 10g\n");
        fprintf (arq,"\n\tALMOCO - (12:30)\n\n ");
        fprintf (arq,"\tCarboidratos= 150g\n");
        fprintf (arq,"\tFeijao e derivados= 90g\n");
        fprintf (arq,"\tProteina= 110g\n");
        fprintf (arq,"\tVegetal A(verduras em geral, beterraba, etc)= A vontade\n");
        fprintf (arq,"\tVegetal B(batata, mandioca, cenouras, etc)= 102g\n");
        fprintf (arq,"\n\tLANCHE - (15:30)\n\n ");
        fprintf (arq,"\tCarboidratos= 70g\n");
        fprintf (arq,"\tFeijao e derivados= 20g\n");
        fprintf (arq,"\tProteina= 60g\n");
        fprintf (arq,"\tFrutas= 200g\n");
        fprintf (arq,"\n\tJANTAR - (18:30)\n\n ");
        fprintf (arq,"\tCarboidratos= 150g\n");
        fprintf (arq,"\tFeijao e derivados= 90g\n");
        fprintf (arq,"\tProteina= 110g\n");
        fprintf (arq,"\tVegetal A(verduras em geral, beterraba, etc)= A vontade\n");
        fprintf (arq,"\tVegetal B(batata, mandioca, cenouras, etc)= 102g\n");
        fprintf (arq,"\n\tCEIA - (22:00)\n\n ");
        fprintf (arq,"\tFrutas= 80g\n");
    break;

    case 2:
        fprintf (arq,"\n\t **Dieta para Manutencao de Peso**\n\n");
        fprintf (arq,"\tDESJEJUM -(06:30)\n\n ");
        fprintf (arq,"\tCarboidratos(massas)= 50g\n");
        fprintf (arq,"\tLeite e derivados= 120g\n");
        fprintf (arq,"\tFrutas= 154g\n");
        fprintf (arq,"\n\tCOLACAO - (09:30)\n\n ");
        fprintf (arq,"\tFrutas= 90g\n");
        fprintf (arq,"\tProteina= 35g\n");
        fprintf (arq,"\tGordura Saudavel= 5g\n");
        fprintf (arq,"\n\tALMOCO - (12:30)\n\n ");
        fprintf (arq,"\tCarboidratos= 100g\n");
        fprintf (arq,"\tFeijao e derivados= 70g\n");
        fprintf (arq,"\tProteina= 90g\n");
        fprintf (arq,"\tVegetal A(verduras em geral, beterraba, etc)= A vontade\n");
        fprintf (arq,"\tVegetal B(batata, mandioca, cenouras, etc)= 90g\n");
        fprintf (arq,"\n\tLANCHE - (15:30)\n\n ");
        fprintf (arq,"\tCarboidratos= 50g\n");
        fprintf (arq,"\tFeijao e derivados= 20g\n");
        fprintf (arq,"\tProteina= 50g\n");
        fprintf (arq,"\tFrutas= 150g\n");
        fprintf (arq,"\n\tJANTAR - (18:30)\n\n ");
        fprintf (arq,"\tCarboidratos= 100g\n");
        fprintf (arq,"\tFeijao e derivados= 70g\n");
        fprintf (arq,"\tProteina= 90g\n");
        fprintf (arq,"\tVegetal A(verduras em geral, beterraba, etc)= A vontade\n");
        fprintf (arq,"\tVegetal B(batata, mandioca, cenouras, etc)= 90g\n");
        fprintf (arq,"\n\tCEIA - (22:00)\n\n ");
        fprintf (arq,"\tFrutas= 80g\n");
    break;

    case 3:
        fprintf (arq,"\n\t **Dieta para Perda de Peso**\n\n");
        fprintf (arq,"\tDESJEJUM -(06:30)\n\n ");
        fprintf (arq,"\tCarboidratos(massas)= 40g\n");
        fprintf (arq,"\tLeite e derivados= 90g\n");
        fprintf (arq,"\tFrutas= 120g\n");
        fprintf (arq,"\n\tCOLACAO - (09:30)\n\n ");
        fprintf (arq,"\tFrutas= 80g\n");
        fprintf (arq,"\tProteina= 40g\n");
        fprintf (arq,"\n\tALMOCO - (12:30)\n\n ");
        fprintf (arq,"\tCarboidratos= 80g\n");
        fprintf (arq,"\tFeijao e derivados= 50g\n");
        fprintf (arq,"\tProteina= 80g\n");
        fprintf (arq,"\tVegetal A(verduras em geral, beterraba, etc)= A vontade\n");
        fprintf (arq,"\tVegetal B(batata, mandioca, cenouras, etc)= 60g\n");
        fprintf (arq,"\n\tLANCHE - (15:30)\n\n ");
        fprintf (arq,"\tCarboidratos= 60g\n");
        fprintf (arq,"\tFeijao e derivados= 20g\n");
        fprintf (arq,"\tProteina= 50g\n");
        fprintf (arq,"\tFrutas= 100g\n");
        fprintf (arq,"\n\tJANTAR - (18:30)\n\n ");
        fprintf (arq,"\tCarboidratos= 90g\n");
        fprintf (arq,"\tFeijao e derivados= 70g\n");
        fprintf (arq,"\tProteina= 80g\n");
        fprintf (arq,"\tVegetal A(verduras em geral, beterraba, etc)= A vontade\n");
        fprintf (arq,"\tVegetal B(batata, mandioca, cenouras, etc)= 60g\n");
        fprintf (arq,"\n\tCEIA - (22:00)\n\n ");
        fprintf (arq,"\tFrutas= 80g\n");
    break;
    }
    fclose(arq);
}
}

void LerValidarNome(){
    int c;

    printf("\n\nDigite seu nome: ");
    fflush(stdin);
    scanf("%s", &nome);
}

void LerValidarSexo(){
    printf("\nDigite seu sexo [F ou M]: ");
    fflush(stdin);
    scanf("%c", &sexo);
    fflush(stdin);
    while((sexo != 'f') && (sexo != 'm')){
        printf ("\n\n  ERRO! Digite seu sexo [F ou M]: ");
        scanf ("%c", &sexo);
        fflush(stdin);
    }
}

void LerValidarAltura(){
    printf("\nDigite sua altura (em metros *.**): ");
    scanf("%f", &altura);
    fflush(stdin);
    while (altura <= 0){
        printf ("\n\n  ERRO!! Digite novamente (numeros positivos, apenas): ");
        fflush(stdin);
        scanf("%f", &altura);
    }
}

void LerValidarPeso(){
    printf("\nDigite seu peso (em kilogramas **.*): ");
    scanf("%f", &peso);
    fflush(stdin);
    while (peso <= 0){
        printf ("\n\n  ERRO!! Digite novamente (numeros positivos, apenas): ");
        fflush(stdin);
        scanf("%f", &peso);
    }
}

void ResultadoMasculino(){
        if (imc < 20.7){
        printf("\n\tVoce esta abaixo do peso!\n\tDieta ideal: Ganhar peso.\n\n");
        dieta = 1;
    }
    else {
       if (imc < 26.5){
        printf("\n\tVoce esta no peso normal!\n\tDieta ideal: Manter peso.\n\n");
        dieta = 2;
       }
       else{
        printf("\n\tVoce esta acima do peso!\n\tDieta ideal: Perder peso.\n\n");
        dieta = 3;
       }
    }
}

void ResultadoFeminino(){
        if (imc < 19.1){
        printf("\n\tVoce esta abaixo do peso!\n\tDieta ideal: Ganhar peso.\n\n");
        dieta = 1;
    }
    else {
       if (imc < 25.9){
        printf("\n\tVoce esta no peso normal!\n\tDieta ideal: Manter peso.\n\n");
        dieta = 2;
       }
       else{
        printf("\n\tVoce esta acima do peso!\n\tDieta ideal: Perder peso.\n\n");
        dieta = 3;
       }

    }
}

void Caso1(){
    LerValidarNome();
    LerValidarSexo();
    LerValidarAltura();
    LerValidarPeso();

    imc = peso/(altura*altura);

    printf("\n\n\t*** Seus dados ***");
    printf ("\n\tNome: %s",nome);
    printf("\n\n\tSeu IMC e: %f", imc);
    if (sexo == 'M'){
        ResultadoMasculino();
    }
    else{
        ResultadoFeminino();
    }
    controle++;
}

void Caso2(){
    if (controle == 0){
        printf("\n   Cadastro nao identificado! Efetue seu cadastro na opcao 'Cadastro Pessoal'\n");
    }
    else{
        printf ("\n\t Bem-Vindo ao Administrador de Dietas!\n");
        ResultadoDieta();
        ResultadoDietaArq();
        printf ("\n\n **Obrigado! Sua dieta esta arquivada na pasta do executavel**\n");
    }
}

void Caso3(){
    system("cls");
    printf("-----------------------------------");
    printf("\n  10 Recomendacoes Nutricionais\n");
    printf("-----------------------------------\n");
    printf("\n01. Tomar bastante liquido nos intervalos das refeicoes, no minimo  dois litros diariamente;\n");
    printf("\n02. Usar o minimo de gordura possivel no preparo dos alimentos, utilizar oleo vegetal e margarina;\n");
    printf("\n03. Evitar ao maximo frituras e gordura animal, como: bacon, toucinho, embutidos em geral;\n");
    printf("\n04. Preferir alimentos refogados, cozidos, assados ou grelhados;\n");
    printf("\n05. Evitar alimentos industrializados. Dar preferencia a alimentos naturais;\n");
    printf("\n06. Procurar variar a alimentacao e as preparacoes para tornar a dieta mais agradavel e saudavel;\n");
    printf("\n07. EVITAR pele de animais, carnes gordas e com gordura visivel;\n");
    printf("\n08. Nao exagerar na quantidade de sal utilizada na alimentacao;\n");
    printf("\n09. Temperos permitidos: cheiro verde, cominho, acafrao, colorau, etc;\n");
    printf("\n10. Inclua sempre uma fruta citrica (ou suco de) no seu cardapio;\n");
}

int Menu(){
    int op;

    system("cls");
    printf ("\t------------------------");
    printf ("\n\t VIDA SAUDAVEL Versão 1.2\n");
    printf ("\t------------------------\n");
    printf ("\n\t Selecione a operacao: ");
    printf ("\n\n\t  <1> Cadastro pessoal");
    printf ("\n\n\t  <2> Organizador de Dietas");
    printf ("\n\n\t  <3> Recomendacoes nutricionais");
    printf ("\n\n\t  <4> SAIR");
    printf ("\n\n\n\t>>> ");
    scanf ("%d", &op);

    return op;
}
