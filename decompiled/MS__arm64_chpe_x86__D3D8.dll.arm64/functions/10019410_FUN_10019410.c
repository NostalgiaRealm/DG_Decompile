/*
 * FUN_10019410 at 10019410
 * undefined FUN_10019410(void)
 * Address ranges: 10019410-10019467
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10019410(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x30) & 2;
  uVar2 = 3;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  if (*(int *)(param_1 + 0x2c) == 3) {
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
    if (*(int *)(param_1 + 0x2c) == 5) {
      uVar2 = uVar3;
    }
  }
  return uVar2;
}

