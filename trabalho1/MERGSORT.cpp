#include <iostream>
#include <stdio.h>
#include <vector>
#include <sstream>
 
void merge(std::vector<int> &v,int low,int mid,int high){
std::vector<int> aux(high - low + 1);
int i=low;
int j=mid + 1;
int k=0;
 
while(i<=mid && j<=high){
 
  if(v[i]< v[j]){
    aux[k] = v[i];
    i++;
        k++;
  }
  else{
    aux[k] = v[j];
    j++;
        k++;
  }
 
}
 
while(i<=mid){
  aux[k] = v[i];
  k++;
  i++;
}
while(j<=high){
  aux[k] = v[j];
  k++;
  j++;
}
 
for(int b = low ; b<=high;b++){
  v[b] = aux[b-low];
}
 
 
}
 
void merge_sort(std::vector<int> &v,int low,int high){
int mid;
if(low < high){
  mid = (high + low)/2;
  merge_sort(v,low,mid);
  merge_sort(v,mid+1,high);
  merge(v,low,mid,high);
 
}
 
}
 
int main(){
 
int i;
std::string numeros_string;
std::vector<int> numeros;
std::getline(std::cin,numeros_string);
std::stringstream  stream(numeros_string);
 
while(stream >> i){
  numeros.push_back(i);
}
 
merge_sort(numeros,0,numeros.size() - 1);
for(i = 0 ; i<numeros.size();i++)
printf("%d ",numeros[i]);
 
return 0;
} 