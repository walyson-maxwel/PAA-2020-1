
#include <stdio.h>
#include <vector>
 
void sort(std::vector<int> &numeros){
int counter = 0;
 
  for(int i = 1; i < numeros.size(); i++){
    int j = i;
    while(j > 0 && (numeros[j-1] > numeros[j])){
      int aux = numeros[j];
      numeros[j] = numeros[j-1];
      numeros[j-1] = aux;
      counter++;
      j--;
    }
}
  printf("%d\n",counter);
}
 
 
int main(){
using namespace std;
vector<int> numeros;
 
int testcases = 0;
int numbers=0;
int var;
scanf("%d",&testcases);
getchar();
 
 
while(testcases--){
  scanf("%d",&numbers);
  getchar();
  
  while(numbers--){
   scanf("%d",&var);
   numeros.push_back(var);
   
  }
  sort(numeros);
  numeros.clear();
}
}