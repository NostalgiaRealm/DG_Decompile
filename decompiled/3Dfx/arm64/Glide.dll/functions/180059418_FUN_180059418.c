/*
 * FUN_180059418 at 180059418
 * undefined __cdecl FUN_180059418(longlong param_1, longlong * param_2, longlong * param_3, int param_4)
 * Address ranges: 180059418-180059483
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180059418(longlong param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  
  *param_2 = param_3[1] + (ulonglong)(uint)(*(int *)(param_1 + 0x40) * param_4);
  param_2[1] = *param_3;
  lVar1 = (**(code **)(*(longlong *)*param_3 + 0x58))();
  param_2[3] = lVar1;
  param_2[2] = lVar1 + (ulonglong)(uint)(*(int *)(param_1 + 0x40) * param_4);
  return;
}

