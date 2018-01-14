#pragma once
#include "IRuntimeModule.hpp"
#include "GfxConfiguration.h"

namespace My {
    Interface IApplication : implements IRuntimeModule
    {
    public:
        virtual int Initialize() = 0;
        virtual void Finalize() = 0;
        // One cycle of the main loop
        virtual void Tick() = 0;

        virtual void SetCommandLineParameters(int argc, char** argv) = 0;

        virtual bool IsQuit() = 0;

        virtual int LoadScene() = 0;

        virtual void OnDraw() = 0;

        virtual GfxConfiguration& GetConfiguration() = 0;
    };

	extern IApplication*    g_pApp;
}


