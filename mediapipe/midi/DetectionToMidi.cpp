#include "DetectionToMidi.h"
#include <android/log.h>
#define LOG_TAG "PIPE_POINTS"

namespace mediapipe {

	class DetectionToMidi {
	    DetectionToMidi(float x, float y) 
		{
__android_log_print(1, "HAND_x", "%f", x);
__android_log_print(1, "HAND_y", "%f", y);
		}
	};

} //namespace mediapipe
