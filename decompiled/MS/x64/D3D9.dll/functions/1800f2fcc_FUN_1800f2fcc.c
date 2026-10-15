/*
 * FUN_1800f2fcc at 1800f2fcc
 * undefined __fastcall FUN_1800f2fcc(undefined8 param_1, longlong * param_2, ulonglong * param_3, ulonglong * param_4)
 * Address ranges: 1800f2fcc-1800f3029
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f2fcc(undefined8 param_1,longlong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined1 local_res10 [8];
  undefined1 local_58 [24];
  int local_40 [14];
  
  (**(code **)(*param_2 + 0x50))(param_2,local_40);
  (**(code **)(*param_2 + 0x70))(param_2,local_58,local_res10);
  uVar1 = FUN_1800f2ce0(param_2,local_40);
  *param_3 = uVar1;
  *param_4 = uVar1;
  return;
}

