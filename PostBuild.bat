@echo off
copy .\build\Zap\%1-x64\Zap.lib .\build\Game\%1-x64\Zap.lib
copy .\build\Zap\%1-x64\Zap.lib .\Game\libs\Zap.lib
pause