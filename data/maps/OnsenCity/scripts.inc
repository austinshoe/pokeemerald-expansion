OnsenCity_MapScripts::
	.byte 0

Script_OnsenCitySign::
    lock
    faceplayer
    msgbox Text_OnsenCitySign, MSGBOX_DEFAULT
    release
    end

Text_OnsenCitySign:
    .string "{COLOR BLUE}{CLEAR_TO 70}Onsen City\n"
    .string "{COLOR DARK_GRAY}Why are you even here?$"

Script_OnsenCityOutsideBoy1::
    lock
    faceplayer
    msgbox Text_OnsenCityOutsideBoy1, MSGBOX_DEFAULT
    release
    end

Text_OnsenCityOutsideBoy1:
    .string "How does grass even grow on a\n"
    .string "volcano?$"

Script_OnsenCityOutsideSwimmer1::
    lock
    faceplayer
    msgbox Text_OnsenCityOutsideSwimmer1, MSGBOX_DEFAULT
    release
    end

Text_OnsenCityOutsideSwimmer1:
    .string "This pool is honestly the only reason\n"
    .string "I'm here.$"

Script_OnsenCityOutsideSwimmer2::
    lock
    faceplayer
    msgbox Text_OnsenCityOutsideSwimmer2, MSGBOX_DEFAULT
    release
    end

Text_OnsenCityOutsideSwimmer2:
    .string "How is there water on a volcano\n"
    .string "anyway.$"

Script_OnsenCityOutsideBoy2::
    lock
    faceplayer
    msgbox Text_OnsenCityOutsideBoy2, MSGBOX_DEFAULT
    release
    end

Text_OnsenCityOutsideBoy2:
    .string "Whew!\n"
    .string "Running on top of a volcano is\l"
    .string "a really good way to excercise.$"
