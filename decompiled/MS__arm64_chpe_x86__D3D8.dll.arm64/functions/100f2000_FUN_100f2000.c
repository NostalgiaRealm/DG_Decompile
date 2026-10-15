/*
 * FUN_100f2000 at 100f2000
 * undefined FUN_100f2000(void)
 * Address ranges: 100f2000-100f2097
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100f2000(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = FUN_100ff610(param_2,&DAT_10129280,0x10);
  if ((iVar1 == 0) || (iVar1 = FUN_100ff610(param_2,0x10129190,0x10), iVar1 == 0)) {
    *param_3 = param_1;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    uVar2 = 0;
  }
  else {
    *param_3 = 0;
    uVar2 = 0x80004002;
  }
  return uVar2;
}

