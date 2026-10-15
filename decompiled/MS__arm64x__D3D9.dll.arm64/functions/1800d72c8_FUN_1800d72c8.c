/*
 * FUN_1800d72c8 at 1800d72c8
 * undefined FUN_1800d72c8(void)
 * Address ranges: 1800d72c8-1800d7353
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800d72c8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int local_240 [2];
  undefined8 local_238;
  undefined1 auStack_230 [528];
  
  local_238 = 0x28745474544;
  FUN_1800d14a0(auStack_230);
  local_238 = 0x28745474544;
  thunk_FUN_180001218(auStack_230,param_1,0x20c);
  local_240[0] = 0;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x214,&local_238,local_240);
  return iVar1 == 0 && local_240[0] == 0x214;
}

