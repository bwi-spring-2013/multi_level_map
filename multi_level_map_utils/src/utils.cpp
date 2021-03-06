#include <multi_level_map_utils/utils.h>

namespace multi_level_map {

  std::string frameIdFromLevelId(std::string level_id) {
    assert (level_id.find('/') == std::string::npos);
    return "/" + level_id + "/map";
  }

  std::string levelIdFromFrameId(std::string frame_id) {
    std::vector<std::string> components;
    boost::split(components, frame_id, boost::is_any_of("/"));
    assert (components.size() == 3);
    assert (components[0] == "");
    assert (components[2] == "map");
    return components[1];
  }

}
