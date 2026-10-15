/*
 * FUN_1800f0400 at 1800f0400
 * undefined FUN_1800f0400(void)
 * Address ranges: 1800f0400-1800f046b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f0400(longlong param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  
  *param_2 = param_3[1] + (ulonglong)(uint)(*(int *)(param_1 + 0x40) * param_4);
  param_2[1] = *param_3;
  lVar1 = (**(code **)(*(longlong *)*param_3 + 0x58))();
  param_2[3] = lVar1;
  param_2[2] = lVar1 + (ulonglong)(uint)(*(int *)(param_1 + 0x40) * param_4);
  return;
}

