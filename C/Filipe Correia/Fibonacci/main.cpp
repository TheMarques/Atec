#include <iostream>

using namespace std;

class math
{
public:
    int EncherArray(int i)
    {
        return i+1;
    }

    int Fibonacci(int LimiteFibonacci)
    {
        int Num1, Num2, ProximoFibonacci;

        Num1=0;
        Num2=1;
        for(ProximoFibonacci=0; ProximoFibonacci<=LimiteFibonacci; ProximoFibonacci++)
        {
            ProximoFibonacci=Num1+Num2;
            if(ProximoFibonacci<=LimiteFibonacci)cout<<endl<<ProximoFibonacci;
            Num1=Num2;
            Num2=ProximoFibonacci;
        }
        return Num2;
    }

        int FibonacciII(int LimiteFibonacci)
    {
        int Num1=0, Num2=1, ProximoFibonacci, n=0;
        for(ProximoFibonacci=0; ProximoFibonacci<=LimiteFibonacci; ProximoFibonacci++)
        {
            ProximoFibonacci=Num1+Num2;
            //if(ProximoFibonacci<=LimiteFibonacci)cout<<endl<<ProximoFibonacci;
            Num1=Num2;
            Num2=ProximoFibonacci;
            n++;
        }
        return n;
    }

    int FibonacciArray(int r[], int i)
    {
        r[i] = r[i-1]+r[i-2];
    }
};


class conversor
{

public:

    float PedirValor()
    {
        float temp;

        cout<< "Qual o valor de temperatura?";
        cin>> temp;

        return temp;
    }

    float CtoF (float temp)
    {
        return (temp*9/5+32);
    }

    float FtoC (float temp)
    {
        return ((temp-32)*5/9);
    }

};


int main()
{

    int opcao;
    float temperatura;
    int i = 0;

    math m;
    conversor conv;

    cout<<"1- Celsius para Fahrenheit\n";
    cout<<"2- Fahrenheit para Celsius\n";
    cout<<"3 - Fibonacci\n";
    cout<<"4 - Array\n";
    cout<<"5 - FibonacciNoArray\n";
    cin>> opcao;


    switch (opcao)
    {
    case 1:
        temperatura = conv.PedirValor();
        cout<<"Celsius -> "<<temperatura<<"\nFahrenheit -> "<<conv.CtoF(temperatura);
        break;
    case 2:
        temperatura = conv.PedirValor();
        cout<<"Fahrenheit -> "<<temperatura<<"\nCelsius -> "<<conv.FtoC(temperatura);
        break;
    case 3:
        temperatura = conv.PedirValor();
        m.Fibonacci(temperatura);
        break;
    case 4:
    {

        temperatura = conv.PedirValor();
        int numeros[(int)temperatura];

        i = 0;
        do
        {
            numeros[i]=m.EncherArray(i);
            cout<<endl<<numeros[i++];
        }
        while (temperatura > i);
        break;

    }
    case 5:
    {

        temperatura = conv.PedirValor();
        int tamanho = m.FibonacciII(temperatura);
        int r[tamanho];
        i = 2;
        r[0] =0;
        r[1] = 1;
        do
        {
            r[i]=m.FibonacciArray(r,i);
            cout<<endl<<r[i++];
        }
        while (tamanho > i);
        break;
    }
    }


    return 0;
}
