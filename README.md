# cpp0

# cpp00

## Entrées et Sorties en C++

### Bibliothèque d'Entrées/Sorties

C++ utilise la bibliothèque `<iostream>` pour les opérations d'entrées et de sorties. Voici comment déclarer différentes variables et utiliser les fonctions de base pour l'affichage et l'entrée.

### La Déclaration des Variables en C++

1. **Déclaration de Variables Simples**
    ```cpp
    int     a;
    double  b;
    char    c;
    bool    d;
    ```

2. **Déclaration de Variables Constantes**
    ```cpp
    const double b = 3.14;
    ```

3. **Déclaration de Pointeurs**
    ```cpp
    int     *ptr;
    double  *dptr;
    char    *cptr;
    bool    *bptr;
    ```

4. **Déclaration de Références**
    ```cpp
    int a = 10;
    int &ref = a;
    ```

5. **Déclaration de Tableaux**
    ```cpp
    int     arr[10];
    double  darr[5];
    char    carr[20];
    ```

6. **Déclaration de Variables Statique**
    ```cpp
    void function() 
    {
        static int count = 0;
        count++;
        std::cout << "Count: " << count << std::endl;
    }
    ```

7. **Déclaration de Variables Membres de Classe**
    ```cpp
    class MyClass {
        public:
            int member;
        private:
            double privateMember;
    };
    ```

8. **Déclaration de Variables Globales**
    ```cpp
    int globalVariable = 100;
    ```

```cpp
