#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<cstdlib>
#include<fstream>

using namespace std;



int main(int argc, char const *argv[])
{
    float cadena[128];
    //crear fichero de salida
    ofstream fs1("rango 1.txt");
    ofstream fs2("rango 2.txt");
    ofstream fs3("rango 3.txt");
    ofstream fs4("rango 4.txt");
    ofstream fs5("rango 5.txt");
    ofstream fs6("rango 6.txt");
    ofstream fs7("rango 7.txt");
    ifstream fin("numeros.txt");

    string valor,aux;
    int i=0;
    float num;

   while(fin>> valor){
        aux=valor;
        aux[1]='.';
        num=strtof((aux).c_str(),0);



       if (num>=1.0 & num<2.0)
       {
        fs1<<aux<<endl;
        }
        
        if (num>=2.0 & num<3.0)
        {
         fs2<<aux<<endl;
        }

        if (num>=3.0 & num<4.0)
        {
            fs3<<aux<<endl;
        }

        if (num>=4.0 & num<5.0)
        {
            fs4<<aux<<endl;
        }
        
        if (num>=5.0 & num<6.0)
        {
            fs5<<aux<<endl;
        }

        if (num>=6.0 & num<=7.0)
        {
            fs6<<aux<<endl;
        }

        if (num==7.0)
        {
            fs7<<aux<<endl;
        }
   }

}



