/*
 * FUN_100a15c6 at 100a15c6
 * undefined4 __fastcall FUN_100a15c6(uint param_1)
 * Address ranges: 100a15c6-100a160a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100a15c6(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0x10041) {
    if (param_1 == 0x10040) {
      return 0x40;
    }
    if (param_1 == 0x40) {
      return 0x40;
    }
    if (param_1 == 0x41) {
      return 0x41;
    }
    iVar1 = param_1 - 0x50;
  }
  else {
    if (param_1 == 0x10050) {
      return 0x50;
    }
    if (param_1 == 0x10051) {
      return 0x51;
    }
    iVar1 = param_1 - 0x20050;
  }
  if (iVar1 == 0) {
    return 0x50;
  }
  if (iVar1 != 1) {
    return 0;
  }
  return 0x51;
}

