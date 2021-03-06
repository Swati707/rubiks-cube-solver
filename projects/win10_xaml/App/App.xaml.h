﻿#pragma once

#include "app.g.h"
#include "WindowsStore/XAMLApp/openglespage.xaml.h"

namespace RubiksCubeXAMLApp
{
    ref class App sealed
    {
    public:
        App();
        virtual void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ e) override;

    private:
        OpenGLESPage^ mPage;
    };
}
