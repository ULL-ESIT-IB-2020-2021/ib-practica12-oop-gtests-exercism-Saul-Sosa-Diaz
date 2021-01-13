
# include <gtest/gtest.h>
# include "fecha.h"

/** Test función IsBisiesto
 */
TEST(TestBisiesto, casoComun) {
        Fecha fecha1(1,2,2020);
        Fecha fecha2(5,7,2021);
        EXPECT_EQ("Si", IsBisiesto(fecha1));
        EXPECT_EQ("No", IsBisiesto(fecha2));
}

TEST(TestBisiesto, CasoExtremo) {
         Fecha fecha3(2,3,0);
         EXPECT_EQ("Si", IsBisiesto(fecha3));
}

