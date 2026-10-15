/*
 * FUN_18005ad4c at 18005ad4c
 * undefined __fastcall FUN_18005ad4c(undefined8 param_1, longlong * param_2, ulonglong * param_3, ulonglong * param_4)
 * Address ranges: 18005ad4c-18005ada9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005ad4c(undefined8 param_1,longlong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined1 local_res10 [8];
  undefined1 local_58 [24];
  int local_40 [14];
  
  (**(code **)(*param_2 + 0x50))(param_2,local_40);
  (**(code **)(*param_2 + 0x70))(param_2,local_58,local_res10);
  uVar1 = FUN_18005aa60(param_2,local_40);
  *param_3 = uVar1;
  *param_4 = uVar1;
  return;
}

