#include <iostream>
using namespace std;

void Graff(int e, int v){
//перенести в мэйн
   int sr[e][2];
   for(int i=0; i<e; i++){
      for(int p=0; p<2; p++){
         cin >> sr[i][p];
      };
   };
   
   

cout << "\n";
cout << "\n";
   
   for(int i=0; i<e; i++){
      for(int p=0; p<2; p++){
         cout << sr[i][p];
      };
      cout << "\n";
   };
   
   
cout << "\n";
cout << "\n";

   int ms[v][v];

   for(int i=0; i<v; i++){
      for(int j=0; j<v; j++){
         ms[i][j]=0;
      };
   };

   for(int j=0; j<v; j++){
      for(int i=0; i<e; i++){
         for(int p=0; p<2; p++){
            if(sr[i][p]==j+1){
               int temp;
               if(p==0){
                  temp=sr[i][1];
                  }
                  else{
                  temp=sr[i][0];
               };
               ms[j][temp-1]=1;
            };
         };
      };
   };

   for(int i=0; i<v; i++){
      for(int j=0; j<v; j++){
         cout << ms[i][j] << " " << " ";
      };
      cout << "\n";
   };
cout << "\n";
cout << "\n";


   int mi[e][v];

   for(int i=0; i<e; i++){
      for(int j=0; j<v; j++){
         mi[i][j]=0;
      };
   };

   for(int i=0; i<e; i++){
      for(int p=0; p<2; p++){
         mi[i][(sr[i][p])-1]=((-2)*p + 1);
      };
   };

   for(int i=0; i<e; i++){
      for(int j=0; j<v; j++){
         cout << mi[i][j] << " " << " ";
      };
      cout << "\n";
   };


}

int main(){
   int e;
   cin >> e;
   int v;
   cin >> v;
   Graff(e, v);
}
