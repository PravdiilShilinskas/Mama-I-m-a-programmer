#include <iostream>
using namespace std;

int poisk(int* evo, int* evd, int e, int k, int v, int n){
if(v>1){
   for(int i=0;i<e;i++){
      if((evo[i]==k)||(evd[i]==k)){
         if((evd[i]==n)||(poisk(evo, evd, e, evd[i], v, n)==1)||(evo[i]==n)||(poisk(evo, evd, e, evo[i], v, n)==1)){
            cout << i << "   ";
            return 1;
         }
         else{
            return 0;
         };
      };
   };
};
}

void Graff(int e, int v, int m, int n){
   int evo[e];
   int evd[e];
   
   for(int i=0;i<e;i++){
      cin >> evo[i] >> evd[i];
   };
   poisk(evo, evd, e, m, v, n);
}

int main(){
   int e;
   int v;
   int m;
   int n;
   cin >> e;
   cin >> v;
   cin >> m;
   cin >> n;
   cout << "\n";
   Graff(e, v, m, n);
}
