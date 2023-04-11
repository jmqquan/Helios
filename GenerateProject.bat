call rm -r .\Helios\vendor\
call rm -r .gitmodules
call git rm -r --cached Helios/vendor/spdlog
call new-item .gitmodules
call git submodule add https://github.com/gabime/spdlog Helios/vendor/spdlog
call .\vendor\bin\premake\premake5.exe vs2022
PAUSE