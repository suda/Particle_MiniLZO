/**
 * minilzo library by Markus Franz Xaver Oberhumer
 * Adapted for Arduino/Particle by Wojtek Siudzinski <admin@suda.pl>
 */

#include "Particle_MiniLZO.h"

/**
 * Constructor.
 */
Particle_MiniLZO::Particle_MiniLZO(size_t inputSize) {
    _inputSize = inputSize;
    _outputSize = _inputSize + _inputSize / 16 + 64 + 3;

    // Initialize the LZO library.
    if (lzo_init() != LZO_E_OK) {
        Serial.println("LZO initialization failed!");
    }
}

/**
 * Compresses the input buffer into the output buffer.
 * Returns the size of the compressed data.
 * Returns 0 if compression failed.
 */
size_t Particle_MiniLZO::compress(uint8_t *in, size_t in_len, uint8_t *out) {
    // lzo_uint out_len = _outputSize;
    lzo_uint out_len = 1024;
    uint8_t wrkmem[LZO_WORK_SIZE];

    if (lzo1x_1_compress(in, in_len, out, &out_len, wrkmem) != LZO_E_OK) {
        return 0;   // Compression failed
    }

    return out_len;
}

size_t Particle_MiniLZO::decompress(uint8_t *in, size_t in_len, uint8_t *out) {
    lzo_uint out_len = _inputSize;

    if (lzo1x_decompress(in, in_len, out, &out_len, NULL) != LZO_E_OK) {
        return 0;   // Decompression failed
    }

    return out_len;
}

size_t Particle_MiniLZO::getOutputSize() {
    return _outputSize;
}
