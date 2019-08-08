/*
 * adc.h
 *
 *  Created on: Sep 5, 2015
 *  Author: Mohamed Tarek
 */

#ifndef TEMP_SENSOR_EXAMPLE_ADC_H_
#define TEMP_SENSOR_EXAMPLE_ADC_H_

#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"

/*
 * Description :
 * Function responsible for initialize the ADC driver.
 */
void ADC_init(void);

/*
 * Description :
 * Function responsible for read analog data from a certain ADC channel
 * and convert it to digital using the ADC driver.
 */
uint16 ADC_readChannel(uint8 channel_num);

#endif /* TEMP_SENSOR_EXAMPLE_ADC_H_ */
