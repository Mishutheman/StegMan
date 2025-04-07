#include "string.h"
#include "stdlib.h"
#include "stdio.h"


#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

#define STB_IMAGE_RESIZE2_IMPLEMENTATION
#include "stb_image_resize2.h"

#define STB_PERLIN_IMPLEMENTATION
#include "stb_perlin.h"

int main(int argc, char const *argv[]) {

  // char* command=(char*)calloc(10,sizeof(char));

  if(argc==1){
    printf("Usage: ./stegMan <options> <file>\nUse option -h, --help for a list of possible options\nSimple steganography tool - FOR LEARNING PURPOSES ONLY" );
    return 0;
  }
  if(strcmp(argv[1],"-h")==0 || strcmp(argv[1],"--help")==0){
    printf("Usage: stegMan [OPTION]... [FILE]...\n");
    printf("Simple steganography tool for learning purposes only.\n\n");

    printf("Options:\n");
    printf("  -h, --help               Show this help message and exit\n");
    printf("  -e, --encode             Encode a message into an image\n");
    printf("  -d, --decode             Decode a hidden message from an image\n");
    printf("  -o, --output=FILE        Specify output file for encoded image\n");
    printf("  -m, --message=STRING     Message to encode into image\n\n");

    printf("Examples:\n");
    printf("  stegMan -e -m \"Secret\" input.png -o output.png\n");
    printf("  stegMan -d output.png\n");
    return 0;
  }


  return 0;
}
