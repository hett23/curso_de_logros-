#include <iostream>
#include <cmath>
int main() {
    int run1;
    std::cout << "primer numero la suma es:" << std::endl; 
    std::cin >> run1;
    int run2;
    std::cout << "segundo numero la suma es:"; 
    std::cin >> run2;
    int suma;
    suma = run1 + run2; 
    std::cout <<"igual a:" << suma << std::endl;

    return 0;
} 


/// ejecicio numero 2

#include <iostream>
#include <cmath>
int main() {
    int run1;
    std::cout << "primer numero la resta es:" << std::endl; 
    std::cin >> run1;
    int run2;
    std::cout << "segundo numero la resta es:"; 
    std::cin >> run2;
    int resta;
    resta = run1 - run2; 
    std::cout <<"igual a:" << resta << std::endl;

    return 0;
} 

/// ejecicio 3
 
 #include <iostream>
#include <cmath>
int main() {
    int run1;
    std::cout << "primer numero la multipliccion es:" << std::endl; 
    std::cin >> run1;
    int run2;
    std::cout << "segundo numero la multipliccion es:"; 
    std::cin >> run2;
    int multipliccion = run1 *  run2; 
    std::cout <<"igual a:" << multipliccion << std::endl;

    return 0;
} 

/// ejecicio 4
 #include <iostream>
#include <cmath>
int main() {
    int run1;
    std::cout << "primer numero la divisicion es:" << std::endl; 
    std::cin >> run1;
    int run2;
    std::cout << "segundo numero la divisicion es:"; 
    std::cin >> run2;
    int divisicion;
    divisicion = run1 / run2; 
    std::cout <<"es:"<< divisicion <<std::endl;

    return 0;
}

/// ejercicio 5

 #include <iostream>
#include <cmath>
int main() {
    int run1;
    std::cout << "primer numero la modulo es:" << std::endl; 
    std::cin >> run1;
    int run2;
    std::cout << "segundo numero la modulo es:"; 
    std::cin >> run2;
    int modulo;
    modulo = run1 % run2; 
    std::cout <<"es:"<< modulo <<std::endl;

    return 0;
}

/// ejecicio 6

 #include <iostream>
#include <cmath>
int main() {
    int run1;
    std::cout << "primer numero la promedio es:" << std::endl; 
    std::cin >> run1;
    int run2;
    std::cout << "segundo numero la promedio es:"; 
    std::cin >> run2;
    int run3;
    std::cout << "tercer numero la promedio es:"; 
    std::cin >> run3;
    int promedio;
    promedio = (run1 + run2 + run3) / 3; 
    std::cout <<"es:"<< promedio <<std::endl;

    return 0;
}

/// ejercicio 7

#include <iostream>

int invertirNumero(int numero) {
    int invertido = 0;
    while (numero != 0) {
        invertido = invertido * 10 + numero % 10;
        numero /= 10;
    }
    return invertido;
}

int main() {
    int numero;
    std::cout << "Ingresa un número entero: ";
    std::cin >> numero;
    int numeroInvertido = invertirNumero(numero);
    std::cout << "Número original: " << numero << std::endl;
    std::cout << "Número invertido: " << numeroInvertido << std::endl;

    return 0;
}

/// ejercicio 8 

#include <iostream>

int main() {
    double base, altura, area;
    std::cout << "Ingresa la base del rectángulo: ";
    std::cin >> base;

    std::cout << "Ingresa la altura del rectángulo: ";
    std::cin >> altura;

    area = base * altura;

    std::cout << "El área del rectángulo es: " << area << std::endl;

    return 0;
}
 
 /// ejercicio 9 
 
 #include <iostream>

int main() {
    int numero1, numero2;

    std::cout << "Ingresa el primer número: ";
    std::cin >> numero1;

    std::cout << "Ingresa el segundo número: ";
    std::cin >> numero2;

    if (numero1 == numero2) {
        std::cout << "Los dos números son iguales." << std::endl;
    } else {
        std::cout << "Los dos números no son iguales." << std::endl;
    }

    return 0;
}

/// ejercicio 10 

#include <iostream>

int main() {
    int numero1, numero2, suma, producto;

    std::cout << "Ingresa el primer número: ";
    std::cin >> numero1;

    std::cout << "Ingresa el segundo número: ";
    std::cin >> numero2;

    suma = numero1 + numero2;

    producto = numero1 * numero2;

    std::cout << "La suma de los dos números es: " << suma << std::endl;
    std::cout << "El producto de los dos números es: " << producto << std::endl;

    return 0;
}