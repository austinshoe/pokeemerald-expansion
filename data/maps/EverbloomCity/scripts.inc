EverbloomCity_MapScripts::
	.byte 0

Script_EverbloomCityFan::
    lock
    faceplayer
    msgbox Text_EverbloomCityFan, MSGBOX_DEFAULT
    release
    end

Text_EverbloomCityFan:
    .string "Flora, the gym leader of this city, is\n"
    .string "so cool!\l"
    .string "Did you know, she was the one who\l"
    .string "discovered the uses of the {COLOR RED}{SHADOW LIGHT_RED}Big Root{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"
