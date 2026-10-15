/*
 * FUN_1005fa38 at 1005fa38
 * undefined FUN_1005fa38(void)
 * Address ranges: 1005fa38-1005facb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005fa38(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2[1] != 0) {
    do {
      FUN_10060ea8(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(*param_2 + uVar1 * 4));
      FUN_10083420(**(undefined4 **)(*param_2 + uVar1 * 4));
      FUN_10083420(*(undefined4 *)(*param_2 + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_2[1]);
  }
  FUN_10083420(*param_2);
  FUN_100833b0(param_2,0xc);
  return;
}

