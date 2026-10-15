/*
 * FUN_10075bc8 at 10075bc8
 * undefined FUN_10075bc8(void)
 * Address ranges: 10075bc8-10075c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10075bc8(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2[1] != 0) {
    do {
      FUN_10076c38(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(*param_2 + uVar1 * 4));
      FUN_100914d0(**(undefined4 **)(*param_2 + uVar1 * 4));
      FUN_100914d0(*(undefined4 *)(*param_2 + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_2[1]);
  }
  FUN_100914d0(*param_2);
  FUN_10091460(param_2,0xc);
  return;
}

