
#include <fstream>

#include "airlab_ros_json/airlab_ros_json.hpp"

using json = nlohmann::json;

json read_json(const std::string& json_path)
{
    std::ifstream ifs(json_path);

    if ( !ifs.good() )
        throw std::runtime_error("Failed to open JSON file: " + json_path);

    json json_obj = json::parse(ifs);

    ifs.close();

    return json_obj;
}
