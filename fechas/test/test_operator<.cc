
# include <gtest/gtest.h>
# include "fecha.h"

/*Test del operador <
*/
TEST(TestOperator, CondicionesNormales) {
        Fecha fecha1(1,2,2020);
        Fecha fecha2(5,7,2021);
        EXPECT_EQ(true , fecha1 < fecha2);
        
}

TEST(TestBisiesto, casoRaro) {
         Fecha fecha3(2,3,2020);
         Fecha fecha4(3,3,2020);
         EXPECT_EQ(true, fecha3 < fecha4);
}

