/*
 * FUN_10131e50 at 10131e50
 * undefined FUN_10131e50(void)
 * Address ranges: 10131e50-10131eaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10131e50(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_101321c0(0x6c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (param_2 == (undefined4 *)0x0) {
    uVar2 = FUN_100fb430(iVar1);
  }
  else {
    uVar2 = FUN_100fb500(iVar1,*param_2,param_2[1],param_2[2]);
  }
  return uVar2;
}

