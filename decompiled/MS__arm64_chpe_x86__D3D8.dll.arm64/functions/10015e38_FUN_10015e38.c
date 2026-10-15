/*
 * FUN_10015e38 at 10015e38
 * undefined FUN_10015e38(void)
 * Address ranges: 10015e38-10015ec7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10015e38(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 & 0x1fff;
  param_1 = param_1 & 0x70000000;
  if (param_1 == 0) {
    uVar2 = uVar1 + 0x13;
  }
  else {
    uVar2 = uVar1;
    if (param_1 != 0x10000000) {
      if (param_1 == 0x20000000) {
        uVar2 = uVar1 + 0x26;
      }
      else if (param_1 == 0x30000000) {
        uVar2 = uVar1 + 0x429;
      }
      else if (param_1 == 0x40000000) {
        uVar2 = uVar1 + 0x432;
      }
      else if (param_1 == 0x50000000) {
        uVar2 = uVar1 + 0x435;
      }
      else {
        uVar2 = 0;
        if (param_1 == 0x60000000) {
          uVar2 = uVar1 + 0x42a;
        }
      }
    }
  }
  return uVar2;
}

