/*
 * FUN_1006f850 at 1006f850
 * undefined FUN_1006f850(void)
 * Address ranges: 1006f850-1006f8eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006f850(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  
  iVar1 = FUN_10070300(*param_1);
  if ((iVar1 - 0x40U & 0xffffffee) == 0 && iVar1 != 0x51) {
    FUN_100703a0(param_2,param_3,param_7);
  }
  else if (iVar1 == 0x51) {
    FUN_100704c0(param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

