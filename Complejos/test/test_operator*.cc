# include <gtest/gtest.h>
# include "complejo.h"

/** Test de la sobrecarga del operador *
 */
TEST(testOperadorMultiplicacion, casoComun) {
        Complejo complejo1(1,3);
        Complejo complejo2(2,1);
        Complejo complejo3(-1,7);
        EXPECT_EQ(complejo3, complejo1 * complejo2);
}
