#define LZO_INPUT_SIZE    (38)        // Define your buffer size

#include "Particle_MiniLZO.h"

// Initialize objects from the lib
Particle_MiniLZO minilzo(LZO_INPUT_SIZE);

void setup() {
    Serial.begin();
    Serial.println("Particle_MiniLZO test");

    uint8_t input[LZO_INPUT_SIZE] = "Some example data to be compressed...";
    uint8_t compressed[minilzo.getOutputSize()];
    uint8_t decompressed[LZO_INPUT_SIZE];

    size_t compressed_len = minilzo.compress(input, strlen((const char *)input), compressed);
    if (compressed_len == 0) {
        Serial.println("Compression failed.");
    } else {
        Serial.println("Compression succeeded.");
    }

    // size_t decompressed_len = minilzo.decompress(compressed, compressed_len, decompressed);
    // if (decompressed_len == 0) {
    //     Serial.println("Decompression failed.");
    // } else {
    //     Serial.println("Decompression succeeded.");
    // }
}

void loop() {
    Serial.println("hello");
    delay(1000);
}
