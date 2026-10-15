/*
 * FUN_100c9068 at 100c9068
 * undefined FUN_100c9068(void)
 * Address ranges: 100c9068-100c910b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100c9068(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  code *extraout_w11;
  int local_240 [2];
  undefined8 local_238;
  undefined1 auStack_230 [528];
  
  local_238 = 0x28745474544;
  FUN_100c2028(auStack_230);
  local_238 = 0x28745474544;
  FUN_100ff660(auStack_230,param_1,0x20c);
  local_240[0] = 0;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar1 = (*extraout_w11)(param_2,0x214,&local_238,local_240);
  return iVar1 == 0 && local_240[0] == 0x214;
}

