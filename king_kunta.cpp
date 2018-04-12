#include <iostream>

using namespace std;

double f_1(double x, double y);
double las_ks(double xn, double yn, double h);

int main(){
  double h = 0.1;
  double N = 3/0.1;
  double y = 1;
  double x = 0;
  for(int i=0; i<=N; i++){
    cout<<x<<" "<< y <<endl;
    y = y + h*las_ks(x, y, h);
    x = x + h;
  }
}

double f_1(double x, double y){
  return -y;
}

double las_ks(double xn, double yn, double h){
  double k1;
  double k2;
  double k3;
  double k4;
  k1 = f_1(xn, yn);
  k2 = f_1(xn+h/2, yn+h*k1/2);
  k3 = f_1(xn+h/2, yn+h*k2/2);
  k4 = f_1(xn+h, yn+h*k3);
  return (k1+2*k2+2*k3+k4)/6;
}
