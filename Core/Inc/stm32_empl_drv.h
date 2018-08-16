#ifndef __STM32_EMPL_DRV_H
#define __STM32_EMPL_DRV_H
#ifdef __cplusplus
 extern "C" {
#endif
#include "stm32f4xx_hal.h"

#define MAX_WRITE_SIZE     128

int stm32_i2c_write (unsigned char slave_addr,
                         unsigned char reg_addr, 
                         unsigned char length, 
                         unsigned char const *data);
													
int stm32_i2c_read  (unsigned char slave_addr,
                         unsigned char reg_addr, 
                         unsigned char length, 
                         unsigned char *data);

void stm32_delay_ms (unsigned long num_ms);
void stm32_get_ms   (unsigned long *count);

void stm32_log_i    (char const *s, ...);
void stm32_log_e    (char const *s, ...);

#ifdef __cplusplus
}
#endif
#endif /* __STM32_EMPL_DRV_H */
