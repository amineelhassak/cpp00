
struct tm {
    int tm_sec;   // secondes (0-59)
    int tm_min;   // minutes (0-59)
    int tm_hour;  // heures (0-23)
    int tm_mday;  // jour du mois (1-31)
    int tm_mon;   // mois (0-11, janvier = 0)
    int tm_year;  // année - 1900
    int tm_wday;  // jour de la semaine (0-6, dimanche = 0)
    int tm_yday;  // jour de l'année (0-365, 1er janvier = 0)
    int tm_isdst; // indicateur d'heure d'été (voir remarques ci-dessous)
};
l'explication de put_time()
std::cout << std::put_time(const struct tm* timeptr, const char* format);
timeptr : Un pointeur vers une structure tm contenant les informations sur la date et l'heure à formater et afficher.
format : Une chaîne de caractères C-style (const char*) définissant le format de sortie. Il suit la syntaxe des spécificateurs de format de date-heure de la bibliothèque C.
    exemple de format  : "%Y-%m-%dT%H:%M:%S"
La fonction time() retourne l'heure actuelle en secondes depuis le début de l'ère Unix (1er janvier 1970 à 00:00:00 UTC).
std : Indique que nous utilisons un élément du namespace std (standard),qui contient les fonctions et types de la bibliothèque standard C++.

La fonction localtime() retourne un pointeur vers une structure tm qui contient les informations détaillées sur l'heure locale.



