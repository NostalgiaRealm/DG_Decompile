/*
 * FUN_18005be98 at 18005be98
 * undefined __cdecl FUN_18005be98(longlong param_1, longlong * param_2, longlong * param_3, int param_4)
 * Address ranges: 18005be98-18005bf03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005be98(longlong param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  
  *param_2 = param_3[1] + (ulonglong)(uint)(*(int *)(param_1 + 0x40) * param_4);
  param_2[1] = *param_3;
  lVar1 = (**(code **)(*(longlong *)*param_3 + 0x58))();
  param_2[3] = lVar1;
  param_2[2] = lVar1 + (ulonglong)(uint)(*(int *)(param_1 + 0x40) * param_4);
  return;
}

