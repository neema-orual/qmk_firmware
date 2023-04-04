macro(find_arm_toolchain)
    find_toolchain(arm-none-eabi TOOLCHAIN_ROOT)

    if(NOT TOOLCHAIN_ROOT)
        include(GetARMToolchain)
        find_toolchain(arm-none-eabi TOOLCHAIN_ROOT)
    endif()

    if(NOT TOOLCHAIN_ROOT)
        message(FATAL_ERROR "ARM Toolchain could not be found")
    endif()

    message(STATUS "ARM toolchain found: ${TOOLCHAIN_ROOT}")
endmacro()