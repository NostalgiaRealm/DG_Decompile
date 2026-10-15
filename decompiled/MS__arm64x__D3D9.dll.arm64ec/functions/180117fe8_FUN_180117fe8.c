/*
 * FUN_180117fe8 at 180117fe8
 * undefined FUN_180117fe8(void)
 * Address ranges: 180117fe8-18011802f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180117fe8(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x50) & 2;
  uVar2 = 3;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    uVar2 = 4;
    if (uVar1 == 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar3 = 5;
    if (uVar1 == 0) {
      uVar3 = 2;
    }
    if (*(int *)(param_1 + 0x4c) == 5) {
      uVar2 = uVar3;
    }
  }
  return uVar2;
}

