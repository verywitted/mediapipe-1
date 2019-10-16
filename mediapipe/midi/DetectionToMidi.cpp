#include "DetectionToMidi.h"
#include "mediapipe/framework/port/logging.h"
#define LOG_TAG "PIPE_POINTS"

namespace mediapipe {

	class DetectionToMidi {
	    DetectionToMidi(float x, float y) 
		{
			LOG(ERROR) << "HAND_x = " << x;
			LOG(ERROR) << "HAND_y = " << y;
		}
	};

} //namespace mediapipe
