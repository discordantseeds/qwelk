#include "rack.hpp"

using namespace rack;

extern Plugin *plugin;

struct WidgetAutomaton : ModuleWidget {
    WidgetAutomaton();
};

struct WidgetChaos : ModuleWidget {
    WidgetChaos();
};

struct WidgetByte : ModuleWidget {
    WidgetByte();
};

struct WidgetScaler : ModuleWidget {
    WidgetScaler();
};

struct WidgetXFade : ModuleWidget {
    WidgetXFade();
};

struct WidgetOr : ModuleWidget {
    WidgetOr();
};

struct WidgetNot : ModuleWidget {
    WidgetNot();
};

struct WidgetXor : ModuleWidget {
    WidgetXor();
};

struct WidgetIndra : ModuleWidget {
    WidgetIndra();
    Menu *createContextMenu() override;
};
