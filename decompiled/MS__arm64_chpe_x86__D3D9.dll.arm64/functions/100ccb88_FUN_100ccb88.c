/*
 * FUN_100ccb88 at 100ccb88
 * undefined FUN_100ccb88(void)
 * Address ranges: 100ccb88-100ccc03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ccb88(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (param_2[4] == 1) {
    uVar1 = 3;
  }
  FUN_101106d8(*(undefined4 *)(param_1 + 0x10),*param_2,uVar1,param_2[6]);
  FUN_10110f58(*(undefined4 *)(param_1 + 0x10),*param_2,param_1 + param_2[5] * 0xc18 + 0x100a8,
               param_1 + 0xc);
  return;
}

