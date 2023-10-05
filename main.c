#include <stdio.h>
#include <stdlib.h>

typedef struct{
	float Peso;
	int Idade;
	float Altura;
} Pessoa;

Pessoa SetPessoa (int idade, float peso, float altura){
	Pessoa P;
	P.Idade =  idade;
	P.Peso = peso;
	P.Altura = altura;
	return P;
}

void ImprimePessoa(Pessoa P){
	printf("%d\n%f\n%f\n", P.Idade, P.Peso,P.Altura);
	
}
//
//	Pessoa Andre;
//	Andre = SetPessoa(20,70.5,1.80);
//	
//	ImprimePessoa(Andre);
//  Main setPessoa / struct. 



			// Bubble Sort
//O m�todo de ordena��o por bubble sort ou conhecido como bolha
//�consiste em comparar dados armazenados em um vetor de tamanho
//qualquer, comparando cada elemento de uma posi��o com o pr�ximo
//elemento do vetor.

//void bubbleSort(int arr[], int n) {
//    int i,j;
//	
//	for (i = 0; i < n - 1; i++) {
//        for (j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                // Troca arr[j] e arr[j + 1].
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }


			//	Main bubble sort.    
//	int arr[] = {64, 34, 25, 12, 22, 11, 90};
//    int i, n = sizeof(arr) / sizeof(arr[0]);
//
//    bubbleSort(arr, n);
//
//    printf("\nArray ordenado:\n");
//    for (i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    
//    
//}



			//	Insert sort.
//Sua teoria baseia-se em ordenar os valores da esquerda
//para a direita, deixando os elementos lidos (a esquerda)
//ordenados. Este � geralmente utilizado para ordenar um
//pequeno n�mero de valores, onde faz-se muito eficiente;


//void insertionSort(int arr[], int n) {
//    int i;
//	for (i = 1; i < n; i++) {
//        int chave = arr[i];
//        int j = i - 1;
//
//        while (j >= 0 && arr[j] > chave) {
//            arr[j + 1] = arr[j];
//            j--;
//        }
//        arr[j + 1] = chave;
//    }
//}


			// Main insertionSort
//	int arr[] = {64, 34, 25, 12, 22, 11, 90};
//    int n = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	
//	insertionSort(arr, n);
//
//    printf("\nArray ordenado:\n");
//    for (i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//	}


			//QuickSort
//Sua teoria baseia-se em uma t�cnica conhecida por divis�o e
//conquista, muito conhecida por reduzir problemas complexos
//em problemas menores para tentar chegar em uma solu��o.
//
//void trocar(int *a, int *b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//int particionar(int arr[], int baixo, int alto) {
//    int pivo = arr[alto];
//    int j, i = (baixo - 1);
//
//    for (j = baixo; j <= alto - 1; j++) {
//        if (arr[j] < pivo) {
//            i++;
//            trocar(&arr[i], &arr[j]);
//        }
//    }
//    trocar(&arr[i + 1], &arr[alto]);
//    return (i + 1);
//}
//
//void quickSort(int arr[], int baixo, int alto) {
//    if (baixo < alto) {
//        int indicePivo = particionar(arr, baixo, alto);
//
//        quickSort(arr, baixo, indicePivo - 1);
//        quickSort(arr, indicePivo + 1, alto);
//    }
//}

			//Main quickSort
//	int arr[] = {64, 34, 25, 12, 22, 11, 90};
//    int i, n = sizeof(arr) / sizeof(arr[0]);
//    
//    quickSort(arr, 0, n - 1);
//
//    printf("\nArray ordenado:\n");
//    for (i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//


			//Busca Sequencial
//Sua teoria baseia-se em dada uma cole��o de n elementos,
//pretende-se saber se um determinado elemento (valor) est�
//presente nessa cole��o.
//Al�m de encontrar o valor desejado, � poss�vel determinar a
//posi��o desse elemento (valor) em um conjunto de elementos.
//

			//Busca Sequencial
//			
//Sua teoria baseia-se em dada uma cole��o de n elementos,
//pretende-se saber se um determinado elemento (valor) est�
//presente nessa cole��o.

//int buscaSequencial(int arr[], int n, int chave) {
//    int i;
//	for (i = 0; i < n; i++) {
//        if (arr[i] == chave) {
//            return i;
//        }
//    }
//    return -1;
//}

			//Main busca Sequencial 
//	int arr[] = {64, 34, 25, 12, 22, 11, 90};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int chave = 22;
//
//    int resultado = buscaSequencial(arr, n, chave);
//
//    if (resultado != -1) {
//        printf("Chave encontrada no �ndice %d.\n", resultado);
//    } else {
//        printf("Chave n�o encontrada no array.\n");
//    }

			//Busca Binaria
//Sua teoria baseia-se em realiza uma busca com um vetor de
//elementos j� ordenados.
//
//int buscaBinaria(int arr[], int n, int chave) {
//    int esquerda = 0;
//    int direita = n - 1;
//
//    while (esquerda <= direita) {
//        int meio = esquerda + (direita - esquerda) / 2;
//
//        if (arr[meio] == chave) {
//            return meio; // A chave foi encontrada; retorna o �ndice.
//        }
//
//        if (arr[meio] < chave) {
//            esquerda = meio + 1;
//        } else {
//            direita = meio - 1;
//        }
//    }
//
//    return -1; // A chave n�o foi encontrada.
//}
			//Main Busca Binaria	
//	int arr[] = {11, 12, 22, 25, 34, 64, 90};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int chave = 22; // Valor que estamos buscando.
//
//    int resultado = buscaBinaria(arr, n, chave);
//
//    if (resultado != -1) {
//        printf("Chave encontrada no �ndice %d.\n", resultado);
//    } else {
//        printf("Chave n�o encontrada no array.\n");
//    }
//

			//Lista Ordenada
//Listas ordenadas (ou listas ligadas ordenadas) s�o estruturas
//de dados em que os elementos s�o armazenados de forma
//ordenada, geralmente em ordem crescente ou decrescente.
//Sua teoria baseia-se em estruturas de dados s�o baseadas em
//n�s (nodes) que cont�m dois principais componentes: um valor
//(que pode ser qualquer tipo de dado) e um ponteiro ou valor
//de �ndice para o pr�ximo n� na lista (ou, no caso de listas
//duplamente ligadas, tamb�m um ponteiro um valor de �ndice
//para o n� anterior)
//
//typedef struct Node {
//    int data;
//    struct Node* next;
//} Node;
//
//Node* criarNo(int valor) {
//    Node* novoNo = (Node*)malloc(sizeof(Node));
//    novoNo->data = valor;
//    novoNo->next = NULL;
//    return novoNo;
//}
//
//void inserirOrdenado(Node** lista, int valor) {
//    Node* novoNo = criarNo(valor);
//
//    if (*lista == NULL || valor < (*lista)->data) {
//        novoNo->next = *lista;
//        *lista = novoNo;
//    } else {
//        Node* atual = *lista;
//
//        while (atual->next != NULL && atual->next->data < valor) {
//            atual = atual->next;
//        }
//
//        novoNo->next = atual->next;
//        atual->next = novoNo;
//    }
//}
//
//void imprimirLista(Node* lista) {
//    Node* atual = lista;
//
//    while (atual != NULL) {
//        printf("%d ", atual->data);
//        atual = atual->next;
//    }
//
//    printf("\n");
//}

			//Main ListaOrdenada
//	
//	Node* lista = NULL;
//
//    inserirOrdenado(&lista, 22);
//    inserirOrdenado(&lista, 12);
//    inserirOrdenado(&lista, 34);
//    inserirOrdenado(&lista, 11);
//    inserirOrdenado(&lista, 64);
//    inserirOrdenado(&lista, 25);
//
//    printf("Lista ordenada: ");
//    imprimirLista(lista);
//	



int main() {


	return 0;
}




























