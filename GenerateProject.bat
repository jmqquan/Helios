rmdir /s/q Helios\vendor
del /s/q .gitmodules
git rm -r --cached Helios/vendor/spdlog
cd.>.gitmodules
git submodule add https://github.com/gabime/spdlog Helios/vendor/spdlog
call .\vendor\bin\premake\premake5.exe vs2022
PAUSE