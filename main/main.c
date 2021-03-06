/* 
	Autor: Pedro Otávio Mariano Perucelo
	Hardware: NodeMCU ESP32
	Espressif: SDK-IDF
	Program Name: EL Contador
*/

/*
	Primeiramente vamos habilitar as bibliotecas em C
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
	Agora irei colocar as bibliotecas do FRERTOS
*/

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "freertos/queue.h"
#include "freertos/event_groups.h"

/* 
	Irei habilitar bibliotecas para fazer o Print do ESP32
*/

#include "esp_system.h"
#include "esp_log.h"

/*
	Definições
*/

#define DEBUG 1

/*
	Variável
*/
static const char * TAG = "MAIN: ";

/* 
	Inicio do Programa
*/

void app_main(void)
{
	uint32_t count = 0;
	
	if(DEBUG)
		ESP_LOGI(TAG, "App main run ...");
	
	for( ;; )
	{
		if( DEBUG)
			ESP_LOGI(TAG, "CONTA: %d", count++);
		
		vTaskDelay(100/portTICK_PERIOD_MS );
	}
	
	return;
}		