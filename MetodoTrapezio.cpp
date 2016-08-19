#include <iostream>
using namespace std;

class Metodo{
             double fa; //função na variavel a
             double fb; //função na variavel b
             double fj; //função na variavel j
             double a,b; //extremos de integração
             double h;
             double solucao; //solução
             int n; // iterações
             double xj;
             double f2x; //derivada segunda
      public:
             Metodo (){
                    fj=0.0;
                    a=0.0;
                    b=2.0;
                    n=1;
                    h=1.0;
                    fa=a+3; //função x+3
                    fb=b+3; //função x+3
                    xj=0.0;
                    solucao=0.0;
                    f2x=1.0;
                    }
             double funcao(double x){
                    return (x+3);
                    }
             void   calcula (int it){
                    n=it;
                    h=(b-a)/n;
                    for (int j=1;j<n;j++){
                        xj=a+j*h;
                        fj=fj+funcao(xj);
                        }
                    solucao=((h/2)*(fa+(2*fj)+fb))-(((b-a)/12)*h*h*f2x);
                    cout<<endl<<"Solucao: "<<solucao<<endl;
                    cin.get(); //lê o \n do buffer para limpá-lo
                    cin.get(); //pausa
                    }
};

int main(){
    Metodo M;
    int n=1;
    cout<<"Digite numero de iteracoes: ";
    cin>>n;
    M.calcula(n);
    return 0;
}
