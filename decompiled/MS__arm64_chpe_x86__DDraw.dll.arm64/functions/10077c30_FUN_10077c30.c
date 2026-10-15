/*
 * FUN_10077c30 at 10077c30
 * undefined FUN_10077c30(void)
 * Address ranges: 10077c30-10077cc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10077c30(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = FUN_10091750(param_2,&DAT_100b1a30,0x10);
  if ((iVar1 == 0) || (iVar1 = FUN_10091750(param_2,0x100b1900,0x10), iVar1 == 0)) {
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

