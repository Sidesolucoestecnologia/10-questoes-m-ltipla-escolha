#include <stdio.h>
#include <string.h>

#define NUM_QUESTIONS 10

typedef struct {
    char question[512];
    char options[5][256];
    char correctOption;
} Question;

void initializeQuestions(Question questions[]) {
    // Pergunta 1
    strcpy(questions[0].question, "1. A criação de um programa em linguagem C/C++ tem como objetivo implementar um algoritmo por meio dos comandos da linguagem para que a solução possa ser utilizada em um computador. Neste contexto, existe uma instrução em linguagem de programação C/C++ que implementa a linha de pseudocódigo/português estruturado para atribuir o valor inteiro 50 à variável diaMes, que é uma variável do tipo inteiro. Diante disso, marque a alternativa que apresenta corretamente a instrução referenciada.");
    strcpy(questions[0].options[0], "a) char a='50';");
    strcpy(questions[0].options[1], "b) int a=50.0;");
    strcpy(questions[0].options[2], "c) float a=50;");
    strcpy(questions[0].options[3], "d) int a='50';");
    strcpy(questions[0].options[4], "e) int a=50;");
    questions[0].correctOption = 'e';

    // Pergunta 2
    strcpy(questions[1].question, "2. A criação de um programa em linguagem C/C++ é o resultado da implementação de um pseudocódigo/português estruturado, criado para solucionar um problema do mundo real, sendo possível executá-lo em computadores. Diante disso, marque a alternativa que apresenta corretamente o comando em linguagem C/C++ para o comando em pseudocódigo/português estruturado: se(idade>=18).");
    strcpy(questions[1].options[0], "a) if(idade<>18)");
    strcpy(questions[1].options[1], "b) if(idade>=18)");
    strcpy(questions[1].options[2], "c) if(idade>18)");
    strcpy(questions[1].options[3], "d) if(idade<18)");
    strcpy(questions[1].options[4], "e) if(idade=18)");
    questions[1].correctOption = 'b';

    // Pergunta 3
    strcpy(questions[2].question, "3. A criação de um algoritmo de programação tem como objetivo auxiliar na criação de uma solução para um problema do mundo real, que precisa ser resolvido por uma rotina informatizada a partir de um conjunto de instruções em uma linguagem de programação. Diante disso, marque a alternativa que apresenta corretamente a rotina, em pseudocódigo/português estruturado, que imprime uma mensagem de 'bem-vindo' ao usuário.");
    strcpy(questions[2].options[0], "a) cin>>('bem vindo');");
    strcpy(questions[2].options[1], "b) while('bem vindo');");
    strcpy(questions[2].options[2], "c) Ler('bem vindo')");
    strcpy(questions[2].options[3], "d) cout<<('bem vindo');");
    strcpy(questions[2].options[4], "e) Escrever('bem vindo')");
    questions[2].correctOption = 'e';

    // Pergunta 4
    strcpy(questions[3].question, "4. A criação de um programa em linguagem C/C++ tem como objetivo implementar um algoritmo por meio dos comandos da linguagem, utilizando suas palavras reservadas. Diante disso, marque a alternativa que apresenta corretamente 3 palavras reservadas da linguagem C/C++.");
    strcpy(questions[3].options[0], "a) or, while, senao;");
    strcpy(questions[3].options[1], "b) variando, for, else;");
    strcpy(questions[3].options[2], "c) caso, while, if;");
    strcpy(questions[3].options[3], "d) if, else, for;");
    strcpy(questions[3].options[4], "e) while, for, se;");
    questions[3].correctOption = 'd';

    // Pergunta 5
    strcpy(questions[4].question, "5. A criação de um programa em linguagem C/C++ é o resultado da implementação de um pseudocódigo/português estruturado, criado para solucionar um problema do mundo real, sendo possível executá-lo em computadores. Neste contexto, existe um comando em pseudocódigo/português estruturado para fazer uma comparação entre uma variável de nome, idade, se um candidato pode ou não tirar habilitação — sendo 18 anos a idade mínima para ter direito a tirar habilitação. Diante disso, marque a alternativa que apresenta corretamente o comando referenciado.");
    strcpy(questions[4].options[0], "a) se(idade>18)");
    strcpy(questions[4].options[1], "b) se(idade<18)");
    strcpy(questions[4].options[2], "c) se(idade=18)");
    strcpy(questions[4].options[3], "d) se(idade>=18)");
    strcpy(questions[4].options[4], "e) se(idade<>18)");
    questions[4].correctOption = 'd';

    // Pergunta 6
    strcpy(questions[5].question, "6. A linguagem de programação C/C++ utiliza diversos comandos para iniciar e trabalhar a implementação de uma rotina informatizada por meio de diversos comandos e/ou palavras reservadas da linguagem. Neste contexto, existem comandos em linguagem C/C++ que implementam um laço do tipo enquanto para ler matrícula e imprimir a matrícula lida parando quando for digitado 0 em matrícula. Diante disso, marque a alternativa que apresenta corretamente os comandos referenciados.");
    strcpy(questions[5].options[0], "a) cin>>(matricula); while(matricula!=0) { cout<<(matricula); cin>>(matricula); }");
    strcpy(questions[5].options[1], "b) int matricula; while(matricula!=0) { cout<<(matricula); cin>>(matricula); }");
    strcpy(questions[5].options[2], "c) int matricula; cin>>(matricula); while(matricula!=0) { cout<<(matricula); }");
    strcpy(questions[5].options[3], "d) int matricula; cin>>(matricula); while(matricula!=0) { cout<<(matricula); cin>>(matricula); }");
    strcpy(questions[5].options[4], "e) int matricula; cin>>(matricula); while(matricula!=0) { cout<<(matricula); matricula=0; }");
    questions[5].correctOption = 'd';

    // Pergunta 7
    strcpy(questions[6].question, "7. Em um programa C++, qual é o comando utilizado para incluir uma biblioteca padrão, como a biblioteca de entrada e saída?");
    strcpy(questions[6].options[0], "a) #include <iostream.h>");
    strcpy(questions[6].options[1], "b) #include <stdio.h>");
    strcpy(questions[6].options[2], "c) #include <stdlib.h>");
    strcpy(questions[6].options[3], "d) #include <conio.h>");
    strcpy(questions[6].options[4], "e) #include <math.h>");
    questions[6].correctOption = 'a';

    // Pergunta 8
    strcpy(questions[7].question, "8. Qual a palavra-chave utilizada em C++ para definir uma constante que não pode ser alterada?");
    strcpy(questions[7].options[0], "a) final");
    strcpy(questions[7].options[1], "b) static");
    strcpy(questions[7].options[2], "c) constant");
    strcpy(questions[7].options[3], "d) const");
    strcpy(questions[7].options[4], "e) define");
    questions[7].correctOption = 'd';

    // Pergunta 9
    strcpy(questions[8].question, "9. Em C++, qual operador é utilizado para acessar os membros de uma estrutura ou classe através de um ponteiro?");
    strcpy(questions[8].options[0], "a) .");
    strcpy(questions[8].options[1], "b) &");
    strcpy(questions[8].options[2], "c) *");
    strcpy(questions[8].options[3], "d) ->");
    strcpy(questions[8].options[4], "e) ::");
    questions[8].correctOption = 'd';

    // Pergunta 10
    strcpy(questions[9].question, "10. Qual é a saída do seguinte trecho de código em C++?\n```cpp\nint a = 10;\nint b = 20;\nint c = a + b;\ncout << c;\n```");
    strcpy(questions[9].options[0], "a) 10");
    strcpy(questions[9].options[1], "b) 20");
    strcpy(questions[9].options[2], "c) 30");
    strcpy(questions[9].options[3], "d) 40");
    strcpy(questions[9].options[4], "e) Erro de compilação");
    questions[9].correctOption = 'c';
}

void askQuestions(Question questions[], char answers[]) {
    char answer;
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        printf("%s\n", questions[i].question);
        for (int j = 0; j < 5; j++) {
            printf("%s\n", questions[i].options[j]);
        }
        printf("Digite a sua resposta (a, b, c, d, e): ");
        scanf(" %c", &answer);
        answers[i] = answer;
    }
}

int gradeQuiz(Question questions[], char answers[]) {
    int correctAnswers = 0;
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        if (answers[i] == questions[i].correctOption) {
            correctAnswers++;
        }
    }
    return correctAnswers;
}

int main() {
    Question questions[NUM_QUESTIONS];
    char answers[NUM_QUESTIONS];

    initializeQuestions(questions);
    askQuestions(questions, answers);
    
    int score = gradeQuiz(questions, answers);

    printf("Você acertou %d de %d perguntas.\n", score, NUM_QUESTIONS);

    return 0;
}
