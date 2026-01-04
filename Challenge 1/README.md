# Guide de résolution : un string ?

But : trouver le flag "caché" dans le binaire

## Solution

### Outils utilisés

- commande `file` de Linux
- Ghidra

### Étape 1 : Identifier le type de fichier avec la commande `file`

```bash
file <fichier>
```

Cela permet d'dentifier le format et le type de fichier face à nous (par exemple si c'est du ELF 32 ou 64 bits).

### Étape 2 : Préparer le projet dans Ghidra

Commencez par lancer Ghidra et créer un nouveau projet.
Importez ensuite le binaire du challenge dans ce projet, puis lancez l’analyse automatique afin de permettre à Ghidra d’identifier les fonctions, les variables et la structure générale du programme.

### Étape 3 : Rechercher les chaînes de caractères

Utilisez l’outil `Strings` de Ghidra pour afficher les chaînes de caractères présentes dans le binaire.
Dans de nombreux challenges de reverse engineering pour débutants, le flag ou des indices importants sont stockés sous forme de texte lisible. Une simple inspection des chaînes permet souvent de les repérer rapidement.

Dans ce challenge, le flag peut être localisé directement dans la section contenant les chaînes de caractères.

### Étape 4 : Extraire le flag

Le flag apparaît sous forme de chaîne de caractères lisible dans le binaire. Il suffit donc de le relever tel quel depuis la liste des chaînes affichées par Ghidra.

Flag : `easy_reverse`