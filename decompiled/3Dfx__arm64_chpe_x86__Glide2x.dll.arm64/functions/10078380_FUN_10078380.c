/*
 * FUN_10078380 at 10078380
 * undefined FUN_10078380(void)
 * Address ranges: 10078380-10078417
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10078380(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = FUN_1007a730(param_2,&DAT_10094748,0x10);
  if ((iVar1 == 0) || (iVar1 = FUN_1007a730(param_2,0x10094658,0x10), iVar1 == 0)) {
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

