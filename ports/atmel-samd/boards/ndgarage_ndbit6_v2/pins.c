#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_global_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_D1),  MP_ROM_PTR(&pin_PA02) },
    { MP_ROM_QSTR(MP_QSTR_D2),  MP_ROM_PTR(&pin_PA04) },
    { MP_ROM_QSTR(MP_QSTR_D3),  MP_ROM_PTR(&pin_PA07) },
    { MP_ROM_QSTR(MP_QSTR_D4),  MP_ROM_PTR(&pin_PA10) },
    { MP_ROM_QSTR(MP_QSTR_D5),  MP_ROM_PTR(&pin_PA15) },
    { MP_ROM_QSTR(MP_QSTR_D6),  MP_ROM_PTR(&pin_PA27) },
    { MP_ROM_QSTR(MP_QSTR_D7),  MP_ROM_PTR(&pin_PA01) },
    { MP_ROM_QSTR(MP_QSTR_D8),  MP_ROM_PTR(&pin_PA03) },
    { MP_ROM_QSTR(MP_QSTR_D9),  MP_ROM_PTR(&pin_PA06) },

    { MP_ROM_QSTR(MP_QSTR_D10),  MP_ROM_PTR(&pin_PA09) },
    { MP_ROM_QSTR(MP_QSTR_D11),  MP_ROM_PTR(&pin_PA18) },
    { MP_ROM_QSTR(MP_QSTR_D12),  MP_ROM_PTR(&pin_PA23) },
    { MP_ROM_QSTR(MP_QSTR_D13),  MP_ROM_PTR(&pin_PA00) },
    { MP_ROM_QSTR(MP_QSTR_D14),  MP_ROM_PTR(&pin_PA05) },
    { MP_ROM_QSTR(MP_QSTR_D15),  MP_ROM_PTR(&pin_PA08) },
    { MP_ROM_QSTR(MP_QSTR_D16),  MP_ROM_PTR(&pin_PA11) },
    { MP_ROM_QSTR(MP_QSTR_D17),  MP_ROM_PTR(&pin_PA22) },
    { MP_ROM_QSTR(MP_QSTR_D18),  MP_ROM_PTR(&pin_PA28) },
    { MP_ROM_QSTR(MP_QSTR_D19),  MP_ROM_PTR(&pin_PA19) },

    { MP_ROM_QSTR(MP_QSTR_TX),  MP_ROM_PTR(&pin_PA16) },
    { MP_ROM_QSTR(MP_QSTR_RX),  MP_ROM_PTR(&pin_PA17) },

    { MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_PA17) },
    { MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_PA16) },

    { MP_ROM_QSTR(MP_QSTR_L),   MP_ROM_PTR(&pin_PA23) },
    { MP_ROM_QSTR(MP_QSTR_LED),   MP_ROM_PTR(&pin_PA23) },

    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_global_dict_table);
