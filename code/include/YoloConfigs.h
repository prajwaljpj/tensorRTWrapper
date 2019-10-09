#ifndef _YOLO_CONFIGS_H_
#define _YOLO_CONFIGS_H_


namespace Yolo
{
    static constexpr int CHECK_COUNT = 3;
    static constexpr float IGNORE_THRESH = 0.5f;
    static constexpr int CLASS_NUM = 9;

    struct YoloKernel
    {
        int width;
        int height;
        float anchors[CHECK_COUNT*2];
    };

    /* //YOLO 608 */
    /* YoloKernel yolo1 = { */
    /*     19, */
    /*     19, */
    /*     {11.3950,25.3481, 21.0826,48.1415, 29.8289,76.1553} */
    /* }; */
    /* YoloKernel yolo2 = { */
    /*     38, */
    /*     38, */
    /*     {35.8586,132.5984, 66.4218,89.7861, 92.6243,139.2145} */
    /* }; */
    /* YoloKernel yolo3 = { */
    /*     76, */
    /*     76, */
    /*     {164.5912,141.0014, 140.5117,216.2245, 238.7294,323.5685} */
    /* }; */

    //YOLO 416
     YoloKernel yolo1 = {
         13,
         13,
         {164.5912,141.0014, 140.5117,216.2245, 238.7294,323.5685}
     };
     YoloKernel yolo2 = {
         26,
         26,
         {35.8586,132.5984, 66.4218,89.7861, 92.6243,139.2145}
     };
     YoloKernel yolo3 = {
         52,
         52,
         {11.3950,25.3481, 21.0826,48.1415, 29.8289,76.1553}
     };
}

#endif
