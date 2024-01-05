@echo off
"%VULKAN_SDK%\Bin\glslc.exe" shaders\simple_shader.vert -o shaders\simple_shader.vert.spv
if %ERRORLEVEL% EQU 0 (
    echo Vertex shader compiled successfully.
) else (
    echo Vertex shader compilation failed.
)

"%VULKAN_SDK%\Bin\glslc.exe" shaders\simple_shader.frag -o shaders\simple_shader.frag.spv
if %ERRORLEVEL% EQU 0 (
    echo Fragment shader compiled successfully.
) else (
    echo Fragment shader compilation failed.
)

pause
