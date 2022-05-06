//
// Created by etudiant on 22-05-03.
//

#include "tri_insertion.h"

/**
 * @brief Trie en place les éléments d'un vector.
 * @param v Référence au vector à trier.  Il est donc modifié par la fonction.
 * @except logic_error si v est vide
 */
void tri_insertion(std::vector<int> &v) {
    if (v.empty()) throw std::logic_error("tri_insertion: liste vide") ;
    if (v.size() == 1) return ;
    for (int i = 1; i < v.size(); ++i) {
        int j = i ;
        while ((j > 0) && (v.at(j) < v.at(j - 1) ) ){
            std::swap(v.at(j), v.at(j - 1)) ;
            --j ;
        }
    }
}
