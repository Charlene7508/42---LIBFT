*This activity has been created as part of the 42 curriculum by chlepain.*


# 42---LIBFT

**Développement d'une bibliothèque de fonctions système en C.**

---

## 📌 Description
Ce projet est réalisé dans le cadre du **Tronc Commun de l'École 42**. Il constitue l'un des piliers de ma formation technique en m'imposant des contraintes de rigueur, de gestion de la mémoire et de conformité aux standards du langage C.

- **Objectif :** Recoder les fonctions essentielles de la bibliothèque standard C pour comprendre leur fonctionnement interne.
- **Langage & outils :** C (Norme 42), Makefile, GCC.


### Liste des fonctions

| Fonction | Description |
|----------|-------------|
| ft_isalpha | Vérifie si le caractère est alphabétique |
| ft_isdigit | Vérifie si le caractère est un chiffre |
| ft_isalnum | Vérifie si le caractère est alphanumérique |
| ft_isascii | Vérifie si le caractère est dans la table ASCII |
| ft_isprint | Vérifie si le caractère est imprimable |
| ft_strlen | Retourne la longueur d'une string |
| ft_memset | Remplit une zone mémoire avec un octet |
| ft_bzero | Met une zone mémoire à zéro |
| ft_memcpy | Copie une zone mémoire vers une autre |
| ft_memmove | Copie une zone mémoire (gère le chevauchement) |
| ft_strlcpy | Copie une string de façon sécurisée |
| ft_strlcat | Concatène deux strings de façon sécurisée |
| ft_toupper | Convertit un caractère en majuscule |
| ft_tolower | Convertit un caractère en minuscule |
| ft_strchr | Cherche la première occurrence d'un caractère |
| ft_strrchr | Cherche la dernière occurrence d'un caractère |
| ft_strncmp | Compare deux strings sur n caractères |
| ft_memchr | Cherche un octet dans une zone mémoire |
| ft_memcmp | Compare deux zones mémoire |
| ft_strnstr | Cherche une substring dans n caractères |
| ft_atoi | Convertit une string en entier |
| ft_calloc | Alloue et initialise une zone mémoire à zéro |
| ft_strdup | Duplique une string avec malloc |
| ft_substr | Extrait une substring d'une string |
| ft_strjoin | Concatène deux strings |
| ft_strtrim | Supprime des caractères aux extrémités |
| ft_split | Découpe une string selon un délimiteur |
| ft_itoa | Convertit un entier en string |
| ft_strmapi | Applique une fonction à chaque caractère (nouvelle string) |
| ft_striteri | Applique une fonction à chaque caractère (en place) |
| ft_putchar_fd | Affiche un caractère sur un file descriptor |
| ft_putstr_fd | Affiche une string sur un file descriptor |
| ft_putendl_fd | Affiche une string suivie de \n sur un file descriptor |
| ft_putnbr_fd | Affiche un entier sur un file descriptor |
| ft_lstnew | Crée un nouveau nœud |
| ft_lstadd_front | Ajoute un nœud en tête de liste |
| ft_lstsize | Retourne le nombre d'éléments |
| ft_lstlast | Retourne le dernier nœud |
| ft_lstadd_back | Ajoute un nœud en fin de liste |
| ft_lstdelone | Supprime un nœud |
| ft_lstclear | Supprime toute la liste |
| ft_lstiter | Applique une fonction à chaque nœud |
| ft_lstmap | Crée une nouvelle liste transformée |

---


## 🛠️ Compétences techniques validées
- **Algorithmie :** Manipulation de listes chaînées, gestion des flux de données.
- **Gestion de la mémoire :** Allocation dynamique (malloc/free) et prévention des fuites mémoires (valgrind).
- **Rigueur :** Respect strict d'un cahier des charges et d'une norme de codage.


## 🎯 Approche projet & soft skills
Au-delà de la technique, la réalisation de ce projet m'a permis de consolider des piliers essentiels à tout environnement professionnel :
1. **Rigueur & normes :** Respect d'un cahier des charges strict (La Norme 42) et de contraintes de qualité logicielle élevées (zéro fuite mémoire).
2. **Autonomie & résolution de problèmes :** Capacité à décomposer des problèmes complexes en sous-tâches gérables pour atteindre l'objectif final.
3. **Conception durable :** Création d'un code modulaire et documenté, pensé pour être maintenu et réutilisé dans des projets futurs.
4. **Gestion de l'incertitude :** Recherche et auto-formation sur des concepts non enseignés, une compétence clé pour s'adapter à l'évolution constante des technologies.


## 📖 Resources

### Documentation de référence
- [Man pages C](https://www.man7.org/linux/man-pages/) — référence des fonctions libc
- [cppreference.com](https://en.cppreference.com/w/c) — documentation C complète
- [Valgrind](https://valgrind.org/docs/manual/quick-start.html) — détection des fuites mémoire
- [La Norme 42](https://cdn.intra.42.fr/pdf/pdf/960/norme.en.pdf) — règles de codage

### Utilisation de l'IA
L'IA (Claude) a été utilisée dans ce projet comme outil pédagogique pour :
- **Comprendre les concepts** : explications des notions C (pointeurs, mémoire, structures)
- **Révision** : génération de fiches de révision pour chaque fonction
- **Tests** : aide à la création des fichiers de test
- **Débogage** : analyse des erreurs de compilation et de logique


## 💻 Instruction - Installation & utilisation
1. Clonez le dépôt :
   git clone https://github.com/Charlene7508/42---LIBFT.git
2. Compiler le projet :
    make
