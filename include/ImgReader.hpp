//
// Created by bartek on 7/5/24.
//

#ifndef IMGSTACKER_IMGREADER_HPP
#define IMGSTACKER_IMGREADER_HPP

#include <opencv2/opencv.hpp>

class ImgReader {
public:
    virtual cv::Mat read(const std::string &path) = 0;
    virtual ~ImgReader() = default;
};


#endif //IMGSTACKER_IMGREADER_HPP
