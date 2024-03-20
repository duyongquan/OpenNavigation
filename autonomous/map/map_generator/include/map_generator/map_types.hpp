#ifndef MAP_GENERATOR_MAP_TYPES_HPP_
#define MAP_GENERATOR_MAP_TYPES_HPP_


namespace autonomous {
namespace map_generator {

struct MapType
{
    const int kFOREST = 1;
    const int kIMAGE2D = 2;
    const int kRANDOM2D = 3;
    const int kRANDOM3D = 4;
};

}  // map_generator
}  // autonomous

#endif   // MAP_GENERATOR_MAP_TYPES_HPP_