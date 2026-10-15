/*
 * FUN_10078800 at 10078800
 * undefined FUN_10078800(void)
 * Address ranges: 10078800-10078897
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10078800(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = FUN_1007abb0(param_2,&DAT_10094778,0x10);
  if ((iVar1 == 0) || (iVar1 = FUN_1007abb0(param_2,0x10094688,0x10), iVar1 == 0)) {
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

