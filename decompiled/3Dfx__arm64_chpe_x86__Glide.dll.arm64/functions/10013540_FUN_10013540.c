/*
 * FUN_10013540 at 10013540
 * undefined FUN_10013540(void)
 * Address ranges: 10013540-100135d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10013540(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  code *extraout_w11;
  ulonglong extraout_x14;
  int local_230 [2];
  undefined8 local_228;
  undefined1 auStack_220 [528];
  
  FUN_10005bc8(auStack_220);
  local_228 = 0x28745474544;
  FUN_1007ac00(auStack_220,extraout_x14 & 0xffffffff,0x20c);
  local_230[0] = 0;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar1 = (*extraout_w11)(param_2,0x214,&local_228,local_230);
  return iVar1 == 0 && local_230[0] == 0x214;
}

