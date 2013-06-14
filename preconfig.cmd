@echo off
rem setup INCLUDE and LIB environment variables
set %LIB%=%CD%\3rdparty\icu\lib
set %INCLUDE%=%CD%\3rdparty\icu\include

set QT_CONFIG=

set QT_CONFIG=%QT_CONFIG% -debug
set QT_CONFIG=%QT_CONFIG% -static
set QT_CONFIG=%QT_CONFIG% -opensource
set QT_CONFIG=%QT_CONFIG% -nomake demos
set QT_CONFIG=%QT_CONFIG% -nomake tests
set QT_CONFIG=%QT_CONFIG% -nomake examples
set QT_CONFIG=%QT_CONFIG% -mp
set QT_CONFIG=%QT_CONFIG% -no-cetest
set QT_CONFIG=%QT_CONFIG% -no-iwmmxt
set QT_CONFIG=%QT_CONFIG% -no-vcproj
set QT_CONFIG=%QT_CONFIG% -no-angle
set QT_CONFIG=%QT_CONFIG% -opengl desktop
set QT_CONFIG=%QT_CONFIG% -icu
set QT_CONFIG=%QT_CONFIG% -qt-zlib
set QT_CONFIG=%QT_CONFIG% -qt-libpng
set QT_CONFIG=%QT_CONFIG% -qt-libjpeg
set QT_CONFIG=%QT_CONFIG% -platform win32-msvc2010

configure %QT_CONFIG%