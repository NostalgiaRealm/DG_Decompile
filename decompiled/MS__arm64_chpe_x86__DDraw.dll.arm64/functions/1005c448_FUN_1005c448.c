/*
 * FUN_1005c448 at 1005c448
 * undefined FUN_1005c448(void)
 * Address ranges: 1005c448-1005c4eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1005c448(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  code *extraout_w11;
  int local_240 [2];
  undefined8 local_238;
  undefined1 auStack_230 [528];
  
  local_238 = 0x28745474544;
  FUN_10055408(auStack_230);
  local_238 = 0x28745474544;
  FUN_100917a0(auStack_230,param_1,0x20c);
  local_240[0] = 0;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar1 = (*extraout_w11)(param_2,0x214,&local_238,local_240);
  return iVar1 == 0 && local_240[0] == 0x214;
}

