//
// Created by bartek on 7/5/24.
//

#ifndef IMGSTACKER_RAWIMGREADER_HPP
#define IMGSTACKER_RAWIMGREADER_HPP


#include <ImgReader.hpp>
#include <libraw/libraw.h>

class RawImgReader : public ImgReader {
protected:
    LibRaw rawProcessor;
public:
    RawImgReader();
    cv::Mat read(const std::string &path) override;
};


#endif //IMGSTACKER_RAWIMGREADER_HPP
