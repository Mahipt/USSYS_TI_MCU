#include <project_config.h>
#include "main.h"


int main(void)
{
    SYSCFG_DL_init(); 
    // initialize GPIO
    GPIO_init();
    GPIO_write(GPIO_PIN_RED_LED, 1);
    GPIO_write(GPIO_PIN_GREEN_LED, 1);
    GPIO_write(GPIO_PIN_BLUE_LED, 1);

    while(1)
    {
        
    }

}
    