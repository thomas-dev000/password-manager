\# Gestionnaire de Mots de Passe Local Sécurisé (C++)

\[!\[Langage: C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)



\## 📌 Objectif : Gérez Vos Identifiants en Local, Simplement et Sûrement



Ce projet a pour but de développer un gestionnaire de mots de passe local en C++ permettant à un utilisateur de stocker de manière sécurisée ses identifiants et mots de passe. Le programme repose sur une interface console simple, une structure modulaire claire, et un chiffrement symétrique de type XOR avec conversion en hexadécimal.



---



\## 🚀 Installation et Démarrage Rapide



\### Pour les Développeurs (Compilation à partir du code source)



Pour compiler et exécuter ce gestionnaire de mots de passe, vous aurez besoin d'un compilateur C++ compatible avec la norme C++11 ou ultérieure (par exemple, g++).



1\.  \*\*Clonez le dépôt :\*\*

&nbsp;   ```bash

&nbsp;   git clone https://github.com/thomas-dev000/password-manager.git

&nbsp;   cd votre\_repo\_cloné

&nbsp;   ```

2\.  \*\*Compilez le programme :\*\*

&nbsp;   ```bash

&nbsp;   g++ main.cpp password\_manager.cpp -o password\_manager -std=c++11 # Ou tout autre drapeau nécessaire

&nbsp;   ```

3\.  \*\*Exécutez l'application :\*\*

&nbsp;   \* Sur Linux/macOS : `./password\_manager`

&nbsp;   \* Sur Windows (dans l'invite de commande/PowerShell) : `password\_manager.exe`



\### Pour les Utilisateurs (Exécutable pré-compilé)



Si vous souhaitez utiliser l'application sans compiler le code, des exécutables pré-compilés pour Windows sont disponibles dans la section \[Releases](https://github.com/votre\_utilisateur/votre\_repo/releases) de ce dépôt.



1\.  Téléchargez la dernière version de `password\_manager.exe` depuis la page des \[Releases](https://github.com/votre\_utilisateur/votre\_repo/releases).

2\.  Exécutez le fichier téléchargé.


\### Mot de passe : 

Un mot de passe maitre est demander avant d'accéder au coffre fort, le mot de passe est : M0t_d&_p@ss& 


---



\## 🧩 Fonctionnalités



\- Authentification par mot de passe maître

\- Ajout d’un nouveau mot de passe (site, identifiant, mot de passe)

\- Vérification des doublons au niveau des noms de site

\- Chiffrement des mots de passe avec une clé secrète par l’algorithme XOR

\- Conversion en hexadécimal pour assurer la lisibilité et l’intégrité du fichier

\- Affichage des mots de passe en version déchiffrée

\- Suppression de mots de passe par numéro de ligne



---



\## 🔐 Sécurité : Chiffrement XOR



Le chiffrement implémente l'opérateur \*\*XOR caractère à caractère\*\* entre le mot de passe et une \*\*clé secrète\*\* définie en dur dans le code. Pour garantir la compatibilité avec l’écriture dans un fichier texte, le résultat du chiffrement est \*\*converti en hexadécimal\*\*. Cette méthode permet d’éviter l’introduction de caractères non imprimables ou instables.



> Remarque : le chiffrement XOR est ici utilisé à des fins pédagogiques et n’est pas suffisant pour sécuriser des données sensibles dans un contexte professionnel.



---



\## 💻 Technologies Utilisées



\* \*\*Langage :\*\* C++ (avec fonctionnalités C++11/C++14)

\* \*\*Librairies Standard :\*\* `iostream`, `fstream`, `string`, `sstream`, `iomanip`, `limits`

\* \*\*Algorithme de chiffrement :\*\* XOR (pour l'opération symétrique bit à bit)

\* \*\*Encodage :\*\* Hexadécimal (pour la persistance des données)



---



\## 🛠️ Architecture



\- `main.cpp` : point d’entrée du programme

\- `password\_manager.h / .cpp` : déclaration et définition des fonctions de gestion

\- `Mot\_de\_passe.txt` : fichier local stockant les données chiffrées

\- `README.md` : documentation du projet



---



\## 🚧 Problèmes rencontrés et solutions



\- \*\*Conflit d'entrée entre `cin` et `getline`\*\* : résolu par `cin.ignore()` après chaque saisie numérique.

\- \*\*Chiffrement initial non lisible\*\* : présence de caractères binaires posant problème à la lecture → conversion en hexadécimal ajoutée.

\- \*\*Lignes vides à l’affichage\*\* : erreurs d'encodage corrigées avec une gestion plus rigoureuse du déchiffrement.

\- \*\*Vérification de doublons\*\* : ajout d’une vérification de l’unicité des sites avant enregistrement.



---



\## 🧪 Exemple d’utilisation du menu du coffre fort



==================================

&nbsp;  COFFRE FORT DE MOTS DE PASSE   

==================================

Si vous souhaitez Ajouter un mot de passe, tapez 1.

Si vous souhaitez Afficher les mots de passe, tapez 2.

Si vous souhaitez Supprimer un mot de passe, tapez 3.

Si vous souhaitez Quitter le coffre fort, tapez 4.



--------------------------



Votre choix :



---



\## 🙌 Contribution



Ce projet est à des fins éducatives, mais si vous avez des suggestions d'amélioration ou souhaitez signaler un bug :

1\.  Ouvrez une \*\*issue\*\* sur le dépôt GitHub.

2\.  Si vous souhaitez contribuer du code, veuillez forker le dépôt et soumettre une \*\*pull request\*\*.



Toutes les contributions sont les bienvenues !



---



\## ✉️ Contact / Auteur



Développé par Thomas Darrigrand (thomas-dev000) 

\[Profil GitHub](https://github.com/thomas-dev000)

\[Profil LinkedIn](https://www.linkedin.com/in/thomas-darrigrand-a30a5723a/)



---

\## 📄 Licence



Ce projet est distribué sous la \[Licence MIT](https://opensource.org/licenses/MIT).

Voir le fichier \[LICENSE](LICENSE) pour plus de détails.









