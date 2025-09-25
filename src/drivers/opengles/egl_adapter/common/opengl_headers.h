#ifndef LV_COMMON_OPENGL_HEADERS_H_
#define LV_COMMON_OPENGL_HEADERS_H_

#include "../../../../lv_conf_internal.h"

#if LV_USE_OPENGLES
    #include "../private/glad/include/glad/gles2.h"
#else /* Use desktop OpenGL */
    #include "../private/glad/include/glad/gl.h"
#endif

#endif /* LV_COMMON_OPENGL_HEADERS_H_ */
