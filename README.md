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


## Utilisation des Namespaces en C++

### Qu'est-ce qu'un Namespace ?

Les **namespaces** (espaces de noms) en C++ sont utilisés pour organiser le code et éviter les conflits de noms. Ils permettent de regrouper les identifiants (comme les classes, fonctions, et variables) sous un même nom.

### Namespace Standard `std`

Le namespace standard (`std`) contient la plupart des fonctionnalités de la bibliothèque standard C++. Cela inclut des classes, des fonctions et des objets courants, tels que `std::string`, `std::vector`, et les flux d'entrée/sortie (`std::cin`, `std::cout`).

### Utilisation de `using namespace std`

Pour éviter de préfixer chaque identifiant du namespace `std` avec `std::`, vous pouvez utiliser la directive `using namespace std;`. Cela permet d'accéder directement aux éléments de `std` sans préfixe.

#### Exemple de Code

```cpp
#include <iostream>
#include <string>

using namespace std;  // Utilisation du namespace std

int main() {
    string str = "Bonjour, le monde!";
    cout << "La chaîne est : " << str << endl;
    cout << "Taille de la chaîne : " << str.size() << endl;

    str.append(" Comment ça va?");
    cout << "Chaîne après ajout : " << str << endl;

    return 0;
}
```
utlisations : <br>
### Fonction `toupper`

La fonction `toupper` est utilisée pour convertir une lettre minuscule en majuscule. Voici une implémentation simple de cette fonction :

```cpp
int toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;  // Convertit la lettre minuscule en majuscule
    return c;
}




