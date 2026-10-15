/*
 * FUN_100096c0 at 100096c0
 * undefined FUN_100096c0(void)
 * Address ranges: 100096c0-1000971f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100096c0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10079f50(0x6c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (param_2 == (undefined4 *)0x0) {
    uVar2 = FUN_1000a340(iVar1);
  }
  else {
    uVar2 = FUN_1000a410(iVar1,*param_2,param_2[1],param_2[2]);
  }
  return uVar2;
}

