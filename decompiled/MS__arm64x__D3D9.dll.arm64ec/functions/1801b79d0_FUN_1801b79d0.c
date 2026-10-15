/*
 * FUN_1801b79d0 at 1801b79d0
 * undefined FUN_1801b79d0(void)
 * Address ranges: 1801b79d0-1801b7a1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801b79d0(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 1;
  if ((param_1 & 0x400) != 0) {
    uVar1 = 3;
  }
  if ((param_1 & 0xf) != 2) {
    if ((param_1 & 0xf) == 1) {
      uVar1 = 0xd;
      uVar2 = 0xf;
    }
    else {
      if ((param_1 & 0xf) != 0) {
        return uVar1;
      }
      uVar1 = 5;
      uVar2 = 7;
    }
    if ((param_1 & 0x400) != 0) {
      uVar1 = uVar2;
    }
  }
  return uVar1;
}

