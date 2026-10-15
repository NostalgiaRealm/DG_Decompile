/*
 * FUN_10031f98 at 10031f98
 * undefined FUN_10031f98(void)
 * Address ranges: 10031f98-1003200f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10031f98(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (param_2[4] == 1) {
    uVar1 = 3;
  }
  FUN_1006f8e8(*(undefined4 *)(param_1 + 0x10),*param_2,uVar1,param_2[6]);
  FUN_10070168(*(undefined4 *)(param_1 + 0x10),*param_2,param_1 + param_2[5] * 0xc18 + 0xa8,
               param_1 + 0xc);
  return;
}

