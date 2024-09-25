#ifndef INC_DAC_H_
#define INC_DAC_H_

#include "stdint.h"
#include "platform.h"

struct Dac_Handle {
	// configuration
    DAC_HandleTypeDef* hdac;
    uint8_t channel;
};

// 12 bits max value 4095
void Dac_Set(struct Dac_Handle* handle, uint16_t value);

#endif
