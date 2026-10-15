/*
 * FUN_100fb338 at 100fb338
 * undefined FUN_100fb338(void)
 * Address ranges: 100fb338-100fb3db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100fb338(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  code *extraout_w11;
  int local_240 [2];
  undefined8 local_238;
  undefined1 auStack_230 [528];
  
  local_238 = 0x28745474544;
  FUN_100f42f8(auStack_230);
  local_238 = 0x28745474544;
  FUN_101325a0(auStack_230,param_1,0x20c);
  local_240[0] = 0;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar1 = (*extraout_w11)(param_2,0x214,&local_238,local_240);
  return iVar1 == 0 && local_240[0] == 0x214;
}

