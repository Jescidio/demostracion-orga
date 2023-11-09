#include <iostream>
using namespace std;

class Numero{
private:
  int num;
public:
Numero(){
  num=0;
}
~Numero{
}
int getNum(){
  return num;
}
void setNum(int n_){
num=n_;
}
bool esPar(){
  if(num%2 == 0)
    return true;
  return false;
}
};

int main(){

  Numero* n = new Numero;
  n->setNum(40);

  if(n->esPar())
    cout<<n->getNum()<<" es par"<<endl;
  else
    cout<<n->getNum()<<" es impar"<<endl;
  
  return 0;
}
