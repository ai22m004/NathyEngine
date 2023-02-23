workspace "Nathy"
    architecture "x64"

    configurations
    {
        "Debug",
        "Release",
        "Dist"
    }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Nathy"
    location "Nathy"
    kind "SharedLib"
    language "C++"

    targetdir("bin/" .. outputdir .."/%{prj.name}")
    objdir (("bin-int/" .. outputdir .."/%{prj.name}"))

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    includedirs 
    {
        "%{prj.name}/vendor/spdlog/include";
    }

    filter "system:windows"
        cppdialect "C++14"
        staticruntime "On"
        systemversion "latest"

        defines 
        {
            "NY_PLATFORM_WINDOWS", 
            "NY_BUILD_DLL"
        }

        postbuildcommands
        {
            ("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Beachbox")
        }

    filter "configurations:Debug"
        defines "NY_DEBUG"
        symbols "On"

    filter "configurations:Release"
        defines "NY_RELEASE"
        optimize "On"
    
    filter "configurations:Dist"
        defines "NY_DIST"
        optimize "On"

project "Beachbox"
    location "Beachbox"
    kind "ConsoleApp"
    language "C++"

    targetdir("bin/" .. outputdir .."/%{prj.name}")
    objdir (("bin-int/" .. outputdir .."/%{prj.name}"))

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    includedirs 
    {
        "Nathy/vendor/spdlog/include",
        "Nathy/src"
    }

    links
    {
        "Nathy"
    }

    filter "system:windows"
        cppdialect "C++14"
        staticruntime "On"
        systemversion "latest"

    defines 
    {
        "NY_PLATFORM_WINDOWS", 
    }

    filter "configurations:Debug"
        defines "NY_DEBUG"
        symbols "On"

    filter "configurations:Release"
        defines "NY_RELEASE"
        optimize "On"

    filter "configurations:Dist"
        defines "NY_DIST"
        optimize "On"
    