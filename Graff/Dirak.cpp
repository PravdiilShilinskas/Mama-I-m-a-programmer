#include <iostream>
using namespace std;

int dirak(int* evo, int* evd, int e, int v, int k){
   int c=0;
   for(int i=0;i<e;i++){
      if((evo[i]==k)||(evd[i]==0)){
         c++;
      };
   };
   if((c>=v/2)||(dirak(evo, evd, e, v, k+1)==1)){
      return 1;
   }
   else{
      return 0;
   };
}

void Graff(int e, int v){
   int evo[e];
   int evd[e];
   for(int i=0;i<e;i++){
      cin >> evo[i] >> evd[i];
   };
   if(v>=3){
      if(dirak(evo, evd, e, v, 1)==1){
         cout << "Есть Гамельтонов цикл. \n";
      }
      else{
         cout << "Нет Гамельтоновa цикла. \n";
      };
   }
   else
      cout << "Нужно больше вершин для процесса. \n";
   };
}

int main(){
   int e;
   int v;
   cin >> e;
   cin >> v;
   cout << "\n";
   Graff(e, v);
}
