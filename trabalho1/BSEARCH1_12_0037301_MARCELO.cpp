#include <iostream>
#include <vector>
int bsearch(std::vector<int> &numeros,int l,int h,int k){
   while(l<=h){
     int m=(l+h)/2;
     if(numeros[m]<k){
         l=m+1;
     }
     else if(numeros[m]>k){
         h=m-1;
     }
     else{
         return m;
     }
   }
   return -1;
}
int main(){
int quantnumeros;
int quantqueries;
int numero;
int testcase;
std::vector<int> numeros;
scanf("%d %d",&quantnumeros,&quantqueries);
getchar();

int aux = quantnumeros;
int aux2 = quantqueries;
while(aux--){
  scanf("%d",&numero);
  numeros.push_back(numero);
}
int res1;
int res2;
int achoumenor = 0;
while(aux2--){
  scanf("%d",&testcase);
  res1 = bsearch(numeros,0,numeros.size()-1,testcase);

  while( (res1 != -1) && (res1-1>=0) && (numeros[res1 - 1] == testcase) ){
      res2 = bsearch(numeros,0,res1-1,testcase);
      if(res2 != -1){
        res1 = res2;
      }

  }
    printf("%d\n",res1);
}

}
