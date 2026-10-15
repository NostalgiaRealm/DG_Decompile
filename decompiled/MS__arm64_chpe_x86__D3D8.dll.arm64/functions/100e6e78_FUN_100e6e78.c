/*
 * FUN_100e6e78 at 100e6e78
 * undefined FUN_100e6e78(void)
 * Address ranges: 100e6e78-100e6f0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e6e78(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2[1] != 0) {
    do {
      FUN_100e89e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(*param_2 + uVar1 * 4));
      FUN_100fed00(**(undefined4 **)(*param_2 + uVar1 * 4));
      FUN_100fed00(*(undefined4 *)(*param_2 + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_2[1]);
  }
  FUN_100fed00(*param_2);
  FUN_100fec90(param_2,0xc);
  return;
}

