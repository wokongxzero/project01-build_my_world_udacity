#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginbuild_my_world : public WorldPlugin
  {
    public: WorldPluginbuild_my_world() : WorldPlugin()
            {
              printf("welcome to pavan's world'\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginbuild_my_world)
}
