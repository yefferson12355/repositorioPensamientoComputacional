#include<iostream>

using namespace std;

int main()
{
    // Tercias 
    //Descripcion:
    //es necesario para sucecion artimetica a,b,c a<b<c / c-b=b-a;
    //determinar cuantos de ellos estan en sucesion aritmetica es un tarea  mas difici

    //Entrada :cantidad de numeros en el conjunto N ,un numero del conjunto el 
    //el cual sea entero mayor a 0 y menor a 1,00000 ademas estos numeros tienen
    // que estar ordenados de manera creciente 
    //Salida:un solo numero indicando cuantas tercias hay en sucesion artimetica
    
    int N;
    cin>>N;
    int array[N];
    //entrada de todos los numero N;
    for(int i=0;i<N;i++)
    {
        cin>>array[i];
    }
   
    int tercia=0;
    for (int i = 0; i < N - 2; i++)
{
    for (int j = i + 1; j < N - 1; j++)
    {
        for (int k = j + 1; k < N; k++)
        
        {
            if (array[j] - array[i] == array[k] - array[j])
            {
                tercia++;
                /*Cuando i=0, j=1, k=2, tenemos la tercia (1, 2, 3).
                Cuando i=0, j=1, k=3, no hay tercia.
                Cuando i=0, j=1, k=4, no hay tercia.
                asi avanza
                */
            }
        }
    }
}
    cout<<tercia;
    return 0;

}
