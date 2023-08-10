# minilzo

A Particle distribution of the minilzo library by Markus Franz Xaver Johannes Oberhumer

## README.LZO

============================================================================
miniLZO -- mini subset of the LZO real-time data compression library
============================================================================

Author  : Markus Franz Xaver Johannes Oberhumer
          <markus@oberhumer.com>
          http://www.oberhumer.com/opensource/lzo/
Version : 2.10
Date    : 01 Mar 2017

I've created miniLZO for projects where it is inconvenient to
include (or require) the full LZO source code just because you
want to add a little bit of data compression to your application.

miniLZO implements the LZO1X-1 compressor and both the standard and
safe LZO1X decompressor. Apart from fast compression it also useful
for situations where you want to use pre-compressed data files (which
must have been compressed with LZO1X-999).

miniLZO consists of one C source file and three header files:
  minilzo.c
  minilzo.h, lzoconf.h, lzodefs.h

To use miniLZO just copy these files into your source directory, add
minilzo.c to your Makefile and #include minilzo.h from your program.
Note: you also must distribute this file ('README.LZO') with your project.

minilzo.o compiles to about 6 KiB (using gcc or Visual C on an i386), and
the sources are about 30 KiB when packed with zip - so there's no more
excuse that your application doesn't support data compression :-)

For more information, documentation, example programs and other support
files (like Makefiles and build scripts) please download the full LZO
package from
  http://www.oberhumer.com/opensource/lzo/

Have fun,
Markus


P.S. minilzo.c is generated automatically from the LZO sources and
    therefore functionality is completely identical

## Welcome to your library!

To get started, modify the sources in [src](src). Rename the example folder inside [examples](examples) to a more meaningful name and add additional examples in separate folders.

To compile your example you can use `particle compile examples/usage` command in [Particle CLI](https://docs.particle.io/guide/tools-and-features/cli#update-your-device-remotely) or use our [Desktop IDE](https://docs.particle.io/guide/tools-and-features/dev/#compiling-code).

Libraries can also depend on other libraries. To add a dependency use [`particle library add`](https://docs.particle.io/guide/tools-and-features/cli#adding-a-library) or [library management](https://docs.particle.io/guide/tools-and-features/dev/#managing-libraries) in Desktop IDE.

After the library is done you can upload it with `particle library upload` or `Upload` command in the IDE. This will create a private (only visible by you) library that you can use in other projects. If you wish to make your library public, use `particle library publish` or `Publish` command.

_TODO: update this README_

## Usage

See the [examples](examples) folder for more details.


## Contributing

Here's how you can make changes to this library and eventually contribute those changes back.

To get started, [clone the library from GitHub to your local machine](https://help.github.com/articles/cloning-a-repository/).

Change the name of the library in `library.properties` to something different. You can add your name at then end.

Modify the sources in <src> and <examples> with the new behavior.

To compile an example, use `particle compile examples/usage` command in [Particle CLI](https://docs.particle.io/guide/tools-and-features/cli#update-your-device-remotely) or use our [Desktop IDE](https://docs.particle.io/guide/tools-and-features/dev/#compiling-code).

After your changes are done you can upload them with `particle library upload` or `Upload` command in the IDE. This will create a private (only visible by you) library that you can use in other projects. Do `particle library add minilzo_myname` to add the library to a project on your machine or add the minilzo_myname library to a project on the Web IDE or Desktop IDE.

At this point, you can create a [GitHub pull request](https://help.github.com/articles/about-pull-requests/) with your changes to the original library. 

If you wish to make your library public, use `particle library publish` or `Publish` command.

## LICENSE
Copyright 2023 Markus Franz Xaver Johannes Oberhumer

Licensed under the GPL v2 license
