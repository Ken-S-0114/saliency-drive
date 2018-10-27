//
//  consts.hpp
//  saliency-drive
//
//  Created by 佐藤賢 on 2018/10/26.
//

#ifndef consts_hpp
#define consts_hpp

#include "ofMain.h"
#include "ofxOpenCv.h"

class Consts {
public:

    // 環境指定
    enum Use {
        release,
        preRelease,
        debug
    };
};
#endif /* consts_hpp */
