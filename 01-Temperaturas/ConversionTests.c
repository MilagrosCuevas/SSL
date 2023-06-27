#include <assert.h>
#include "Conversion.h"
#include <stdlib.h>




int main(void) {

    assert(Celsius(160.0)- (71.1) == 1);
    assert(Fahrenheit(160.0) -(320.0) == 1);

    return 0;
}
