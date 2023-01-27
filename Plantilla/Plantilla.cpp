#include <iostream>
#include "Pair.h"
#include "MiVector2.h"
#include "Vector3.h"

template <typename T>
T promedio(T valores[], int num)
{
    T acum = 0;
    for (int i = 0; i < num; i++)
    {
        acum += valores[i];
    }
    return acum / num;
}

/// <summary>
/// Compara si a es menor que b
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
template <typename T>
bool lessthan(T& a, T& b)
{
    if (a < b) return true;
    else return false;
}

int main()
{
    float flotantes[5] = { 23.3, 56.3,45.6,34.4,32.67 };
    int enteros[5] = { 5,4,3,7,9 };

    float prom = promedio(flotantes, 5);
    int prom2 = promedio(enteros, 5);

    std::cout << "promedio de floats: " << prom << std::endl;
    std::cout << "promedio de doubles: " << prom2 << std::endl;

    int a = 6;
    int b = 4;
    std::cout << "6 < 4? " << lessthan(b, a) << std::endl;
    double i = 6.243654643;
    double j = 4.234423437;
    std::cout << "6. < 4.? " << lessthan(j, i) << std::endl;

    //ordenar por metodo de la burbuja
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (!lessthan(enteros[i], enteros[j]))
            {
                int temp = enteros[i];
                enteros[i] = enteros[j];
                enteros[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
        std::cout << enteros[i] << std::endl;

    std::cout << "ahora vienen los floats" << std::endl;

    //ordenar los flotantes
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (!lessthan(flotantes[i], flotantes[j]))
            {
                float temp = flotantes[i];
                flotantes[i] = flotantes[j];
                flotantes[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
        printf("%f \n", flotantes[i]);


    char* s1 = (char*)"hola";
    char* s2 = (char*)"mundo";

    if (lessthan(s1, s2))
    {
        std::cout << "menor que\n";
    }
    else
    {
        std::cout << "mayor que\n";
    }


    //seccion de prueba de clase Pair
    Pair<int>* parA = new Pair<int>();
    parA->name = "Player1";
    parA->value = 53;

    Pair<double>* parB = new Pair<double>();
    parB->name = "Player2";
    parB->value = 234.67636357;

    Pair<std::string>* parDeStrings = new Pair<std::string>();
    parDeStrings->name = "hola";
    parDeStrings->value = "mundo";

    parA->print();
    parB->print();
    parDeStrings->print();

    //ejemplo de vectores
    MiVector2<float>* v1 = new MiVector2<float>();
    v1->x = 78.2345;
    v1->y = 43.213;

    std::cout << "velocidad: (" << v1->x << "," << v1->y << "), rapidez=" << v1->sqrMagnitude() << std::endl;

    MiVector2<float>* v2 = new MiVector2<float>(4, 3);
    std::cout << "velocidad: (" << v2->x << "," << v2->y << "), rapidez=" << v2->sqrMagnitude() << std::endl;

    std::cout << "velocidad: (" << v1->x << "," << v1->y << "), rapidez=" << v1->sqrMagnitude() << std::endl;

    MiVector2<float>* v2 = new MiVector2<float>(4, 3);
    std::cout << "velocidad: (" << v2->x << "," << v2->y << "), rapidez=" << v2->sqrMagnitude() << std::endl;

    //Suma de vectores
    Vector3<float>* v4 = new Vector3<float>(7, 4, 7);
    Vector3<float>* v5 = new Vector3<float>(6, 8, 9);

    std::cout << "vector1:(" << v4->x << "," << v4->y << "," << v4->z << ") + vector2:(" << v5->x << "," << v5->y << "," << v5->z << ") = " << v5->suma() << std::endl;

    // producto punto
    Vector3<float>* v6 = new Vector3<float>(7, 8, 9);
    Vector3<float>* v7 = new Vector3<float>();

    std::cout << "C: (" << v6->x << "," << v6->y << "," << v6->z << ") + vector2:(" << v7->x << "," << v7->y << "," << v7->z << ") = " << v7->punto() << std::endl;

    //producto cruz

    //sqrmagnitude
    Vector3<float>* v3 = new Vector3<float>(8, 9, 10);

    std::cout << "velocidad: (" << v3->x << "," << v3->y << "," << v3->z << "), rapidez=" << v3->sqrMagnitude() << std::endl;

    //ToString()


}
