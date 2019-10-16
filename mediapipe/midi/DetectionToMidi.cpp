#include "DetectionToMidi.h"
#include "glog/logging.h"
#define LOG_TAG "PIPE_POINTS"
  
namespace mediapipe {

	class DetectionToMidi {
	    DetectionToMidi(float x, float y) 
		{
			LOG(WARN) << "HAND_x = " << x;
			LOG(WARN) << "HAND_y = " << y;
		}
	};

} //namespace mediapipe
