/*
 * FUN_101255d0 at 101255d0
 * undefined FUN_101255d0(void)
 * Address ranges: 101255d0-10125667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_101255d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = FUN_10132550(param_2,&DAT_1015e670,0x10);
  if ((iVar1 == 0) || (iVar1 = FUN_10132550(param_2,0x1015e580,0x10), iVar1 == 0)) {
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

