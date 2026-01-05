# Guide de résolution : Comment on XOR, déjà ?

Objectif : trouver le flag caché dans le binaire

## Solution

### Outils utilisés

- commande `file`
- Ghidra

### Étape 1 : Identifier le type de fichier avec la commande `file`

```bash
file <fichier>
```

Cela permet d'dentifier le format et le type de fichier face à nous (par exemple si c'est du ELF 32 ou 64 bits).

### Étape 2 : Préparer le projet dans Ghidra

Tout comme le premier challenge, ouvrez le binaire dans Ghidra.

### Étape 3 : Observer la fonction qui xor l'entrée avec le flag encodé

Tout d'abord, il convient d'identifier le tableau encodé. Comme pour le premier CTF, le tableau se trouve au tout début du binaire. 
Maintenant, remarquez la boucle exécutant un XOR entre une valeur hexadécimale et l'enntrée utilisateur avec le tableau encodé. 
Oui oui ! Il vous suffit de réaliser un XOR sur chaque valeur du tableau encodé pour retrouver le flag !

Flag : `printf_debugging`