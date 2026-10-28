#include "mod/FishMania.h"

#include "ll/api/mod/RegisterHelper.h"

namespace fish_mania {

FishMania& FishMania::getInstance() {
    static FishMania instance;
    return instance;
}

bool FishMania::load() {
    getSelf().getLogger().debug("Loading...");
    // Code for loading the mod goes here.
    return true;
}

bool FishMania::enable() {
    getSelf().getLogger().debug("Enabling...");
    // Code for enabling the mod goes here.
    return true;
}

bool FishMania::disable() {
    getSelf().getLogger().debug("Disabling...");
    // Code for disabling the mod goes here.
    return true;
}

} // namespace fish_mania

LL_REGISTER_MOD(fish_mania::FishMania, fish_mania::FishMania::getInstance());
