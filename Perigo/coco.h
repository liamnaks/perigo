//
//  coco.h
//  Perigo
//
//  Created by Liam on 6/25/17.
//  Copyright © 2017 Perigo. All rights reserved.
//


#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

#include <memory>
#include "tensorflow/core/public/session.h"
#include "tensorflow/core/util/memmapped_file_system.h"

@interface coco : NSObject {
    std::unique_ptr<tensorflow::Session> tf_session;
    std::unique_ptr<tensorflow::MemmappedEnv> tf_memmapped_env;
}

- (void)load_model;
- (NSArray*)coco_search:(UIImage*)image;


@end





/*

id2label = [
"",//0 - nil
"person",//1
"bicycle",//2
"car",//3
"motorcycle",//4
"airplane",//5
"bus",//6
"train",//7
"truck",//8
"boat",//9
"traffic light",//10
"fire hydrant",//11
"",//12
"stop sign",//13
"parking meter",//14
"bench",//15
"bird",//16
"cat",//17
"dog",//18
"horse",//19
"sheep",//20
"cow",//21
"elephant",//22
"bear",//23
"zebra",//24
"giraffe",//25
"",//26
"backpack",//27
"umbrella",//28
"",//29
"",//30
"handbag",//31
"tie",//32
"suitcase",//33
"frisbee",//34
"skis",//35
"snowboard",//36
"sports ball",//37
"kite",//38
"baseball bat",//39
"baseball glove",//40
"skateboard",//41
"surfboard",//42
"tennis racket",//43
"bottle",//44
"",//45
"wine glass",//46
"cup",//47
"fork",//48
"knife",//49
"spoon",//50
"bowl",//51
"banana",//52
"apple",//53
"sandwich",//54
"orange",//55
"broccoli",//56
"carrot",//57
"hot dog",//58
"pizza",//59
"donut",//60
"cake",//61
"chair",//62
"couch",//63
"potted plant",//64
"bed",//65
"",//66
"dining table",//67
"",//68
"",//69
"toilet",//70
"",//71
"tv",//72
"laptop",//73
"mouse",//74
"remote",//75
"keyboard",//76
"cell phone",//77
"microwave",//78
"oven",//79
"toaster",//80
"sink",//81
"refrigerator",//82
"",//83
"book",//84
"clock",//85
"vase",//86
"scissors",//87
"teddy bear",//88
"hair drier",//89
"toothbrush",//90
]

*/
