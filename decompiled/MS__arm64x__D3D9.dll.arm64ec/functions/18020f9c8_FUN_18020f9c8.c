/*
 * FUN_18020f9c8 at 18020f9c8
 * undefined FUN_18020f9c8(void)
 * Address ranges: 18020f9c8-18020fa47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020f9c8(longlong param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  code *extraout_x11;
  
  *param_2 = param_3[1] + (ulonglong)(uint)(*(int *)(param_1 + 0x40) * param_4);
  param_2[1] = *param_3;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar1 = (*extraout_x11)();
  param_2[3] = lVar1;
  param_2[2] = lVar1 + (ulonglong)(uint)(*(int *)(param_1 + 0x40) * param_4);
  return;
}

