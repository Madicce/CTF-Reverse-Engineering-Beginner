# Guide de résolution : En statique tu analyseras, la vérité se dévoilera

Objectif : toujours trouver le flag encodé dans le code. Mais ici, il y a quelques subtilités.

## Solution

### Outils utilisés
- Commande `file`
- Ghidra

### Étape 1 : Identifier le type de fichier avec la commande `file`

```bash
file <fichier>
```

Cela permet d'dentifier le format et le type de fichier face à nous (par exemple si c'est du ELF 32 ou 64 bits).

### Étape 2 : Préparer le projet dans Ghidra

Comme pour les autres challenges, ouvrez le binaire dans Ghidra.

### Étape 3 : Analyser le fichier en statique

Dans le titre du challenge, il est noté "en statique tu analyseras", est-ce un hasard ? Pas sûr :).

Commencer par analyser la fonction `entry` puis toutes les autres, on remarque que l'une d'elles est un leurre visant à modifier le bon flag quand le programme est exécuté avec GDB. Alors n'en tenez pas compte, c'est un piège ! Analysez plutôt les autres fonctions, comme sur le challenge précedent.

Flag : `congratulations`