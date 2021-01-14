# include <gtest/gtest.h>
# include "complejo.h"

/** Test de la sobrecarga del operador -
 */
TEST(testOperadorMenos, casoComun) {
        Complejo complejo1(1,3);
        Complejo complejo2(2,1);
        Complejo complejo3(-1,2);
        EXPECT_EQ(complejo3, complejo1 - complejo2);
}

TEST(testOperadorMenos, casoExtremo) {
        Complejo complejo1(0,0);
        Complejo complejo2(0,0);
        Complejo complejo3(0,0);
        EXPECT_EQ(complejo3, complejo1 - complejo2);
}