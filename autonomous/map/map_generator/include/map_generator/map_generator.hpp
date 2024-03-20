#ifndef MAP_GENERATOR_MAP_GENERATOR_HPP_
#define MAP_GENERATOR_MAP_GENERATOR_HPP_

#include <string>

#include "map_interface/map_generator_interface.hpp"
#include "map_generator/map_types.hpp"

namespace autonomous {
namespace map_generator {

class MapGenerator : public map_interface::MapGeneratorInterface
{
public:
    MapGenerator();
    ~MapGenerator();

    virtual bool Create() override; 

    virtual bool Create(std::string& filename) override; 

    void Publish();

};

}  // map_generator
}  // autonomous

#endif   // MAP_GENERATOR_MAP_GENERATOR_HPP_