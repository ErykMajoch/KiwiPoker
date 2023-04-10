add_executable(KiwiPokerEngine
    main.cpp
    card.cpp
)

set(HEADER_LIST
    ${KiwiPokerEngine_SOURCE_DIR}/include/card.h
)

target_include_directories(KiwiPokerEngine PUBLIC ../include)
