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
```
 ## Fonctions `time` et `localtime`

### Fonction `time`

La fonction `time` est utilisée pour obtenir l'heure actuelle en secondes depuis le début de l'ère Unix, c'est-à-dire depuis le 1er janvier 1970 à 00:00:00 UTC. Elle retourne la valeur du temps sous forme de nombre entier de type `time_t`.

**Prototype :**
```cpp
time_t time(time_t* timer);
```
**Time :**
Un pointeur vers une variable de type time_t où l'heure actuelle peut être stockée. Si ce paramètre est NULL, la fonction ne stocke pas le temps dans une variable mais le retourne directement.

**Valeur de return :**
La fonction retourne le nombre de secondes écoulées depuis l'ère Unix (1er janvier 1970 à 00:00:00 UTC).

## Fonction `localtime`

La fonction `localtime` est utilisée pour convertir un temps en secondes depuis le début de l'ère Unix, obtenu à l'aide de la fonction `time`, en une structure `tm` contenant les informations détaillées sur la date et l'heure locales.

**Prototype :**
```cpp
struct tm* localtime(const time_t* timer);
```
La structure `tm` est utilisée pour représenter les informations de date et d'heure en C++. Elle est définie dans l'en-tête `<ctime>` et est souvent utilisée avec les fonctions liées au temps pour obtenir des détails spécifiques sur la date et l'heure.

**Paramètre :**

timer : Un pointeur vers une variable de type time_t qui représente le temps en secondes depuis le début de l'ère Unix. Cette valeur est convertie en heure locale.
**Valeur de retour :**

La fonction retourne un pointeur vers une structure tm qui contient les informations locales sur la date et l'heure. Cette structure est remplie avec les détails comme les secondes, les minutes, les heures, le jour du mois, le mois, l'année, et d'autres informations temporelles.

### Définition de la Structure `tm`

```cpp
struct tm {
    int tm_sec;   // secondes (0-59)
    int tm_min;   // minutes (0-59)
    int tm_hour;  // heures (0-23)
    int tm_mday;  // jour du mois (1-31)
    int tm_mon;   // mois (0-11, janvier = 0)
    int tm_year;  // année - 1900
    int tm_wday;  // jour de la semaine (0-6, dimanche = 0)
    int tm_yday;  // jour de l'année (0-365, 1er janvier = 0)
    int tm_isdst; // indicateur d'heure d'été
};
```

## Description des Membres de la Structure `tm`

La structure `tm` est utilisée pour stocker les informations de date et d'heure en C++. Voici la description des membres de cette structure :

- **`tm_sec`** : Les secondes écoulées depuis le début de la minute (0 à 59).
- **`tm_min`** : Les minutes écoulées depuis le début de l'heure (0 à 59).
- **`tm_hour`** : Les heures écoulées depuis le début de la journée (0 à 23).
- **`tm_mday`** : Le jour du mois (1 à 31).
- **`tm_mon`** : Le mois de l'année (0 à 11, où 0 correspond à janvier).
- **`tm_year`** : L'année depuis 1900.
- **`tm_wday`** : Le jour de la semaine (0 à 6, où 0 correspond à dimanche).
- **`tm_yday`** : Le jour de l'année (0 à 365, où 0 correspond au 1er janvier).
- **`tm_isdst`** : Indicateur d'heure d'été (valeur positive si l'heure d'été est en vigueur, 0 sinon, valeur négative en cas d'erreur).
- 




