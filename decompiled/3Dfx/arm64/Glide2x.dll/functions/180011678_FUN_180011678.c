/*
 * FUN_180011678 at 180011678
 * bool __cdecl FUN_180011678(undefined8 param_1, longlong * param_2)
 * Address ranges: 180011678-1800116f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180011678(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *extraout_x13;
  int local_230 [2];
  undefined8 local_228;
  undefined8 auStack_220 [66];
  
  FUN_180005d80(auStack_220);
  local_228 = 0x28745474544;
  thunk_FUN_180001218(auStack_220,extraout_x13,0x20c);
  local_230[0] = 0;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x214,&local_228,local_230);
  return iVar1 == 0 && local_230[0] == 0x214;
}

