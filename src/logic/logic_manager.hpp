#ifndef TIC_TAC_TOE_LOGIC_MANAGER_HPP
#define TIC_TAC_TOE_LOGIC_MANAGER_HPP

namespace tic_tac_toe {

class Resource_manager;
class Graphic_manager;

/**
 * @todo write docs
 */
class Logic_manager
{
public:
    Logic_manager(Resource_manager& resource_manager_, Graphic_manager& graphics_manager_): resource_manager{resource_manager_}, graphics_manager{graphics_manager_} {};

    void Loop();

private:
    void Handle_events();

    Resource_manager& resource_manager;
    Graphic_manager& graphics_manager;
};

}

#endif // TIC_TAC_TOE_LOGIC_MANAGER_HPP
