/*
 * FUN_100806d0 at 100806d0
 * undefined FUN_100806d0(void)
 * Address ranges: 100806d0-10080767
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100806d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = FUN_10081e90(param_2,&DAT_1009c5d0,0x10);
  if ((iVar1 == 0) || (iVar1 = FUN_10081e90(param_2,0x1009c5b0,0x10), iVar1 == 0)) {
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

