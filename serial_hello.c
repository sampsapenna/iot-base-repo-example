// Generic example program. Blinks the pico LED, and reports
// the program runtime to serial.

#include <stdio.h>
#include "pico/stdlib.h"

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
