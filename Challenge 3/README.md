# Solution Guide: In static analysis you shall analyze, the truth will be revealed

Objective: always find the flag encoded in the code. But here, there are a few subtleties.

## Solution

### Tools Used
- `file` command
- Ghidra

### Step 1: Identify the File Type Using the `file` Command

```bash
file <file>
```

This allows you to identify the file format and type you are dealing with (for example, whether it is a 32-bit or 64-bit ELF).

### Step 2: Set Up the Project in Ghidra

As with the other challenges, open the binary in Ghidra.

### Step 3: Perform Static Analysis

In the challenge title, it says "in static analysis you shall analyze" — is that a coincidence? Probably not 🙂

Start by analyzing the entry function and then all the others. You will notice that one of them is a decoy designed to modify the correct flag when the program is executed with GDB. So ignore it — it’s a trap!

Instead, analyze the other functions, just like in the previous challenge.

Flag: `congratulations`

---

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
