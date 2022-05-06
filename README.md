# Démo du tri par insertion

Le problème présenté lors de la séance de TD du 5 mai était essentiellement un prétexte pour réviser les étapes de 
création d'un projet cohérent en C++.

L'algorithme insertsort ou tri par insertion est un algorithme idéal pour se familiariser avec les algorithmes de tri 
car il est très intuitif: il correspond essentiellement à la manière avec laquelle nous trions naturellement des groupes d' objets.


## Objectifs de l'activité
- Bâtir un projet fonctionnel en C++ dans l'environnement de développement proposé pour le cours IFT-2008
- Se familiariser avec l'utilisation des tests pour faciliter le développement
- Utiliser la structure de données vector
- Apprivoiser un algorithme de tri qui sera revu plus tard dans le cours...

## Questions pour aller plus loin...

- La solution proposée ne vaut que pour des entiers.  
  - Y aurait-il moyen d'adapter l'algorithme pour trier des réels?  Des caractères?
  - Y aurait-il moyen d'adapter l'algorithme pour trier n'importe quel type supportant les opérateurs plus grand et plus petit?
- Notre algorithme fait seulement un tri en ordre croissant
  - Y aurait-il moyen de trier en sens inverse? (Si vous avez assisté à la séance, vous avez la réponse...)
  - Y aurait-il moeyn d'avoir un algorithme qui trie dans un sens ou l'autre?
- Notre algorithme comporte beaucoup d'appels inutiles à la fonction std::swap
  - Peut-on l'optimiser pour éliminer ces appels inutiles?