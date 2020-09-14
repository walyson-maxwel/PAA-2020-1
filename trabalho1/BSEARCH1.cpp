#include <iostream>
#include <vector>
 
int mybsearch(std::vector<int> &numeros,int low,int high,int key)
{
   while(low<=high)
   {
     int mid=(low+high)/2;
     if(numeros[mid]<key)
     {
         low=mid+1;
     }
     else if(numeros[mid]>key)
     {
         high=mid-1;
     }
     else
     {
         return mid;
     }
   }
   return -1;                //key not found
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
int result;
int result2;
int achoumenor = 0;
while(aux2--){
//printf("->%d\n",aux2);
  scanf("%d",&testcase);
  result = mybsearch(numeros,0,numeros.size()-1,testcase);
 
  while( (result != -1) && (result-1>=0) && (numeros[result - 1] == testcase) ) 
  {
      result2 = mybsearch(numeros,0,result-1,testcase);
      if(result2 != -1){
        result = result2;
      }
  
  }
    printf("%d\n",result);
}
 
}