// Generic example program. Blinks the pico LED, and reports
// the program runtime to serial.

#include <stdio.h>
#include "pico/stdlib.h"

#include "add_lib/simple_maths.h"

// Code autoformatted with clang-format, through VSCode.

int setup()
{
	// Set up stdio
	stdio_init_all();
	printf("Initialized standard IO\n");
	gpio_init(PICO_DEFAULT_LED_PIN);
	gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
	return 0;
}

int main()
{
	setup();
	unsigned int uptime = 0;

	printf("Testing simple_maths.h\n");
	printf("Testing simple_add: %d + %d = %d\n", 4, 2, simple_add(4, 2));
	printf("Testing simple_sub: %d - %d = %d\n", 6, 2, simple_sub(6, 2));
	printf("Testing simple_div: %d / %d = %d\n", 10, 2, simple_div(10, 2));
	printf("Testing simple_mul: %d * %d = %d\n", 2, 6, simple_mul(2, 6));

	while (true)
	{
		printf("Uptime: %d seconds.\n", uptime);
		gpio_put(PICO_DEFAULT_LED_PIN, 1);
		sleep_ms(500);
		gpio_put(PICO_DEFAULT_LED_PIN, 0);
		sleep_ms(500);
		uptime++;
	}
}
