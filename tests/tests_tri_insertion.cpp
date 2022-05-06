#include "tri_insertion.h"
#include "gtest/gtest.h"
#include <stdexcept>

TEST(tri_insertion, liste_vide_lance_exception) {
    std::vector<int> vtest ;
    EXPECT_THROW(tri_insertion(vtest), std::logic_error) ;
}

TEST(tri_insertion, liste_un_seul_element_inchangee) {
    std::vector<int> vtest{1}, vexp{1} ;
    tri_insertion(vtest) ;
    EXPECT_EQ(vexp, vtest) ;
}

TEST(tri_insertion, liste_deux_elements_triee_inchangee) {
    std::vector<int> vtest{1, 2}, vexp{1, 2} ;
    tri_insertion(vtest) ;
    EXPECT_EQ(vexp, vtest) ;
}

TEST(tri_insertion, liste_deux_elements_inversee_triee) {
    std::vector<int> vtest{2, 1}, vexp{1, 2} ;
    tri_insertion(vtest) ;
    EXPECT_EQ(vexp, vtest) ;
}

TEST(tri_insertion, liste_deux_elements_identiques_inchangee) {
    std::vector<int> vtest{1, 1}, vexp{1, 1} ;
    tri_insertion(vtest) ;
    EXPECT_EQ(vexp, vtest) ;
}

TEST(tri_insertion, liste_dix_elements_distinct_triee) {
    std::vector<int> vtest{10, 5, 2, 8, 1, 9, 11, 56, -4, 22} ;
    std::vector<int> vexp{-4, 1, 2, 5, 8, 9, 10, 11, 22, 56};
    tri_insertion(vtest) ;
    EXPECT_EQ(vexp, vtest) ;
}

TEST(tri_insertion, liste_dix_elements_avec_repetition_triee) {
    std::vector<int> vtest{0, 1, 1, 0, 0, 0, 1, 0, 1, 1} ;
    std::vector<int> vexp{0, 0, 0, 0, 0, 1, 1, 1, 1, 1};
    tri_insertion(vtest) ;
    EXPECT_EQ(vexp, vtest) ;
}