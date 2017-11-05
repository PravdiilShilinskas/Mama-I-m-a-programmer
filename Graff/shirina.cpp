#include <iostream>
using namespace std;

void shirina(int* evo, int* evd, int e, int k, int v){
if(v>1)
   int z=0;
   for(int i=0;i<e;i++){
      if(evo[i]==k){
         cout << i+1 << "  " << "  " << "  ";
         v--;
         z++;
      };
   };
   int y[z];
   int r=0;
   for(int i=0;i<e;i++){
      if(evo[i]==k){
          y[r]=evd[i];
          r++;
          evd[i]=-1;
      };
   };
   for(int i=0;i<z;z++){
      shirina(evo, evd, e, evd[y[i]], v);
   };
}

void Graff(int e, int v){
   int evo[e];
   int evd[e];
   
   for(int i=0;i<e;i++){
      cin >> evo[i] >> evd[i];
   };
   shirina(evo, evd, e, 1, v);
}

int main(){
   int e;
   int v;
   cin >> e;
   cin >> v;
   Graff(e, v);
}
