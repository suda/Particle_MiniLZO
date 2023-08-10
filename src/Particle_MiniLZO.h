#pragma once

/**
 * minilzo library by Markus Franz Xaver Oberhumer
 * Adapted for Arduino/Particle by Wojtek Siudzinski <admin@suda.pl>
 */

#define LZO_WORK_SIZE     (LZO1X_1_MEM_COMPRESS)  // Work memory size

// This will load the definition for common Particle variable types
#include "Particle.h"
#include "minilzo.h"

// This is your main class that users will import into their application
class Particle_MiniLZO
{
public:
  /**
   * Constructor
   */
  Particle_MiniLZO(size_t inputSize);

  /**
   * Compresses the input buffer into the output buffer.
   */
  size_t compress(uint8_t *in, size_t in_len, uint8_t *out);

  /**
   * Decompresses the input buffer into the output buffer.
   */
  size_t decompress(uint8_t *in, size_t in_len, uint8_t *out);

  /**
   * Returns the size of the output buffer.
   */
  size_t getOutputSize();
private:
  size_t _inputSize;
  size_t _outputSize;
};
