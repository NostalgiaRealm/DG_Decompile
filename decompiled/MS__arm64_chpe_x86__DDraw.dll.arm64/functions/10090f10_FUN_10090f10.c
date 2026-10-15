/*
 * FUN_10090f10 at 10090f10
 * undefined FUN_10090f10(void)
 * Address ranges: 10090f10-10090f6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10090f10(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100913c0(0x6c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (param_2 == (undefined4 *)0x0) {
    uVar2 = FUN_1005c540(iVar1);
  }
  else {
    uVar2 = FUN_1005c610(iVar1,*param_2,param_2[1],param_2[2]);
  }
  return uVar2;
}

