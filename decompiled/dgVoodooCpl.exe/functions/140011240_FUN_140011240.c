/*
 * FUN_140011240 at 140011240
 * undefined * __fastcall FUN_140011240(int param_1, char param_2)
 * Address ranges: 140011240-14001163c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140011240(int param_1,char param_2)

{
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  
  if ((DAT_14002d3f4 & 1) == 0) {
    DAT_14002d3f4 = DAT_14002d3f4 | 1;
    FUN_140011f20((undefined8 *)&DAT_14002d8a0);
    _DAT_14002d8a0 = &PTR_FUN_140028be8;
    _DAT_14002dd30 = &DAT_140028c88;
    _DAT_14002dd39 = local_37;
    _DAT_14002dd3d = local_33;
    DAT_14002dd3f = local_31;
    DAT_14002dd20 = 0;
    _DAT_14002dd28 = 0;
    _DAT_14002dd2c = 1;
    DAT_14002dd38 = 0;
    _DAT_14002dcd4 = 0xffffffffffffffff;
    _DAT_14002dcdc = 0xffffffffffffffff;
    _DAT_14002dce4 = 0xffffffffffffffff;
    _DAT_14002dcec = 0xffffffffffffffff;
    _DAT_14002dcf4 = 0xffffffffffffffff;
    _DAT_14002dcfc = 0xffffffffffffffff;
    _DAT_14002dd04 = 0xffffffffffffffff;
    _DAT_14002dd0c = 0xffffffffffffffff;
    DAT_14002dd18 = 0;
    FUN_140024c60(FUN_1400253d0);
  }
  if ((DAT_14002d3f4 & 2) == 0) {
    DAT_14002d3f4 = DAT_14002d3f4 | 2;
    FUN_140011f20((undefined8 *)&DAT_14002d400);
    _DAT_14002d899 = local_37;
    _DAT_14002d89d = local_33;
    DAT_14002d89f = local_31;
    _DAT_14002d400 = &PTR_FUN_140028be8;
    DAT_14002d880 = 0;
    _DAT_14002d888 = 0;
    _DAT_14002d88c = 1;
    _DAT_14002d890 = &DAT_140028bdc;
    DAT_14002d898 = 0;
    _DAT_14002d834 = 0xffffffffffffffff;
    _DAT_14002d83c = 0xffffffffffffffff;
    _DAT_14002d844 = 0xffffffffffffffff;
    _DAT_14002d84c = 0xffffffffffffffff;
    _DAT_14002d854 = 0xffffffffffffffff;
    _DAT_14002d85c = 0xffffffffffffffff;
    _DAT_14002d864 = 0xffffffffffffffff;
    _DAT_14002d86c = 0xffffffffffffffff;
    DAT_14002d878 = 0;
    FUN_140024c60(FUN_140025370);
  }
  if ((DAT_14002d3f4 & 4) == 0) {
    DAT_14002d3f4 = DAT_14002d3f4 | 4;
    FUN_140011f20((undefined8 *)&DAT_14002e1e0);
    _DAT_14002e1e0 = &PTR_FUN_140028be8;
    _DAT_14002e670 = &DAT_140028be0;
    _DAT_14002e679 = local_37;
    _DAT_14002e67d = local_33;
    DAT_14002e67f = local_31;
    DAT_14002e660 = 0;
    _DAT_14002e668 = 0;
    _DAT_14002e66c = 1;
    DAT_14002e678 = 0;
    _DAT_14002e614 = 0xffffffffffffffff;
    _DAT_14002e61c = 0xffffffffffffffff;
    _DAT_14002e624 = 0xffffffffffffffff;
    _DAT_14002e62c = 0xffffffffffffffff;
    _DAT_14002e634 = 0xffffffffffffffff;
    _DAT_14002e63c = 0xffffffffffffffff;
    _DAT_14002e644 = 0xffffffffffffffff;
    _DAT_14002e64c = 0xffffffffffffffff;
    DAT_14002e658 = 0;
    FUN_140024c60(FUN_140025310);
  }
  if ((DAT_14002d3f4 & 8) == 0) {
    DAT_14002d3f4 = DAT_14002d3f4 | 8;
    FUN_140011f20((undefined8 *)&DAT_14002dd40);
    _DAT_14002e1d9 = local_37;
    _DAT_14002e1dd = local_33;
    DAT_14002e1df = local_31;
    _DAT_14002dd40 = &PTR_FUN_140028be8;
    DAT_14002e1c0 = 0;
    _DAT_14002e1c8 = 5;
    _DAT_14002e1cc = 1;
    _DAT_14002e1d0 = &DAT_140028bdc;
    DAT_14002e1d8 = 0;
    _DAT_14002e174 = 0xffffffffffffffff;
    _DAT_14002e17c = 0xffffffffffffffff;
    _DAT_14002e184 = 0xffffffffffffffff;
    _DAT_14002e18c = 0xffffffffffffffff;
    _DAT_14002e194 = 0xffffffffffffffff;
    _DAT_14002e19c = 0xffffffffffffffff;
    _DAT_14002e1a4 = 0xffffffffffffffff;
    _DAT_14002e1ac = 0xffffffffffffffff;
    DAT_14002e1b8 = 1;
    FUN_140024c60(FUN_1400252b0);
  }
  if (param_2 == '\0') {
    if (param_1 == 0x100) {
      return &DAT_14002e1e0;
    }
    if (param_1 == 0x101) {
      return &DAT_14002d400;
    }
    if (param_1 == 0x110) {
      return &DAT_14002d8a0;
    }
  }
  return &DAT_14002dd40;
}

