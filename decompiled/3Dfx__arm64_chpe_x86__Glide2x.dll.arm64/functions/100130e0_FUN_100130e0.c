/*
 * FUN_100130e0 at 100130e0
 * undefined FUN_100130e0(void)
 * Address ranges: 100130e0-10013177
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100130e0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  code *extraout_w11;
  ulonglong extraout_x14;
  int local_230 [2];
  undefined8 local_228;
  undefined1 auStack_220 [528];
  
  FUN_10005a68(auStack_220);
  local_228 = 0x28745474544;
  FUN_1007a780(auStack_220,extraout_x14 & 0xffffffff,0x20c);
  local_230[0] = 0;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar1 = (*extraout_w11)(param_2,0x214,&local_228,local_230);
  return iVar1 == 0 && local_230[0] == 0x214;
}

