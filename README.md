<h1>ImgStacker</h1>
Image alignment and stacking tool originally meant for astrophotography.

## Used libraries
- LibRaw
- OpenCV

## How to build
1. Install OpenCV
2. Make sure LibRaw and LibRaw-cmake submodules are initialized. If not, run `git submodule update --init --recursive`
3. Run `cmake .` in the project root directory
4. Run `make`

ImgStacker executable will be created in the project root directory.

## How to use
Run the executable. In command line, provide the image files you want to stack. The program will align the images and stack them and the name of the output file.
The output file will be a 16-bit TIFF file.
<br>
<h4>Example command on Linux:</h4>
```bash
./ImgStacker <image_file_1> <image_file_2> ... <output_file>
```

<h4>Test:</h4>
```bash
./ImgStacker test/TestImg1.NEF test/TestImg2.NEF testOutput.tif
```
This will align and stack the two test images and save the result as `testOutput.tif`.

## Research
- [Online article on a fast image fitting algorithm for fusion (in polish)](https://automatykaonline.pl/Artykuly/Sterowanie/szybki-algorytm-dopasowania-obrazow-dla-potrzeb-fuzji-w-czasie-rzeczywistym)

## Development state
Right now the application is in early planning phase. The first version is planned to be a simple image fusing software working only on light frames and without any GUI.