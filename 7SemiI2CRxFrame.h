
#ifndef 7SEMI_I2C_RX_FRAME_H_
#define 7SEMI_I2C_RX_FRAME_H_

#include <stdint.h>
#include <stdlib.h>

#include "7SemiI2CCom.h"
#include "7SemiRxFrame.h"


class DeviceLibraryI2CRxFrame : public DeviceLibraryRxFrame {

    friend class DeviceLibraryI2CCommunication;

  public:

    DeviceLibraryI2CRxFrame(uint8_t buffer[], size_t bufferSize)
        : DeviceLibraryRxFrame(buffer, bufferSize){};
};

#endif /* 7SEMI_I2C_RX_FRAME_H_ */
