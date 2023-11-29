# ALGORTIHME DES TABLEAUX 

<div align="center">
Ceci a été fait de sorte a ce que les personnes qui ne comprennent pas trop les algos de tri
on un petit apercu des algos de tri avec une petite explication en commentaire ainsi que
les complexités des algos avec une petite explication 
<br>
<br>
(Pour ceux qui ont du mal a visualiser les complexités je vous invite a lire ceci : https://www.geeksforgeeks.org/understanding-time-complexity-simple-examples/)
</div>

## I. Algo de recherche 

### a - Recherche par dichotomie 
    Cet algo doit etre fait dans un tableau trié.
    Complexité :
    Dans tous les cas ----> O( log n )  [Meilleure complexité d'ailleurs]


## -------------------------------

## II. Algo de tri de tableau

### a - Tri par sélection 

    Complexité :
    O (n^2) car on a deux boucles dans l'algorithme de tri 
    et il n y'a pas de meilleurs cas


### b - Tri par insertion 

    Complexité :
    O (n^2) car on a deux boucles dans l'algorithme de tri 
    et il n y'a pas de meilleurs cas aussi
    

### c - Tri bulle

### d - Tri shaker

    Explication : 
    Meme principe que le tri bulle sauf qu'on le fait dans les 2 sens.
    On parcours le tableau de droite a gauche et chaque bulle [ i-1 / i ]
    est triée. A chaque étape, au moins un élement est bien trié (le plus léger a gauche)

    Complexité :
    O (n^2) en moyenne 
    O (n) est le meilleur des cas si le tableau est trié en amont
    O (n^2) dans le pire des cas
    

    
