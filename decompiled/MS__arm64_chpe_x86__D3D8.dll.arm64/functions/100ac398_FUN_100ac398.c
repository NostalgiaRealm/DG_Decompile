/*
 * FUN_100ac398 at 100ac398
 * undefined FUN_100ac398(void)
 * Address ranges: 100ac398-100ac413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ac398(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (param_2[4] == 1) {
    uVar1 = 3;
  }
  FUN_100ddf98(*(undefined4 *)(param_1 + 0x10),*param_2,uVar1,param_2[6]);
  FUN_100de818(*(undefined4 *)(param_1 + 0x10),*param_2,param_1 + param_2[5] * 0xc18 + 0x100a8,
               param_1 + 0xc);
  return;
}

