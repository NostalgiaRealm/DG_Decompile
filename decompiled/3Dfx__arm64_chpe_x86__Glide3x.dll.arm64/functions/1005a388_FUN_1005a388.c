/*
 * FUN_1005a388 at 1005a388
 * undefined FUN_1005a388(void)
 * Address ranges: 1005a388-1005a41b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005a388(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2[1] != 0) {
    do {
      FUN_1005b7f8(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(*param_2 + uVar1 * 4));
      FUN_1007dd80(**(undefined4 **)(*param_2 + uVar1 * 4));
      FUN_1007dd80(*(undefined4 *)(*param_2 + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_2[1]);
  }
  FUN_1007dd80(*param_2);
  FUN_1007dd10(param_2,0xc);
  return;
}

