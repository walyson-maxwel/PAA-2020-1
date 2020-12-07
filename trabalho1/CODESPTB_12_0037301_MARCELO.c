#include <stdio.h>
#include <stdlib.h>
int insertion(int vetor[], int n){
   int i, aux, pos , cont=0;
   for (i = 1; i < n; i++){
       aux = vetor[i];

       pos = i-1;
       while (pos >= 0 && (vetor[pos] > aux) ){
           vetor[pos+1] = vetor[pos];
           pos = pos-1;
           cont++;
       }
       vetor[pos+1] = aux;
   }
   return cont;
}
int main(){
	int t,n,i,j;
	int numero_alteracao[5];
	int vetor[100000];

	scanf("%d",&t);

	for(i=0 ; i<t ; i++){
		scanf("%d",&n);
		for(j=0 ; j<n ; j++){
			scanf("%d",&vetor[j]);
		}
		numero_alteracao[i] = insertion(vetor,n);
	}

	for(i=0 ; i<t ; i++){
		printf("%d\n",numero_alteracao[i]);
	}
	return 0;
}
