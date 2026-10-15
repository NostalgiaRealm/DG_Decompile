/*
 * FUN_101196c8 at 101196c8
 * undefined FUN_101196c8(void)
 * Address ranges: 101196c8-1011975b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101196c8(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2[1] != 0) {
    do {
      FUN_1011b230(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(*param_2 + uVar1 * 4));
      FUN_101322d0(**(undefined4 **)(*param_2 + uVar1 * 4));
      FUN_101322d0(*(undefined4 *)(*param_2 + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_2[1]);
  }
  FUN_101322d0(*param_2);
  FUN_10132260(param_2,0xc);
  return;
}

