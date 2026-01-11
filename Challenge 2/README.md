# Solution Guide: How Do You XOR Again?

Objective: find the flag hidden in the binary.

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

Just like the first challenge, open the binary in Ghidra.

### Step 3: Observe the Function That XORs the Input with the Encoded Flag

First, you need to identify the encoded array. As in the first CTF, the array is located at the very beginning of the binary.

Next, observe the loop that performs a XOR operation between a hexadecimal value and the user input using the encoded array.
Yes, really! You just need to XOR each value of the encoded array to recover the flag!

Flag: `printf_debugging`

---

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