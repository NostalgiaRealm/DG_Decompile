/*
 * FUN_1801fff08 at 1801fff08
 * undefined FUN_1801fff08(void)
 * Address ranges: 1801fff08-1801fff7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801fff08(longlong param_1,uint param_2,longlong param_3,int param_4)

{
  code *extraout_x11;
  
  param_1 = param_1 + (ulonglong)param_2 * 0x18c0;
  if (((param_3 != *(longlong *)(param_1 + 0xb70)) || (param_4 != *(int *)(param_1 + 0xb78))) ||
     (*(int *)(param_1 + 0xb7c) != 0)) {
    *(longlong *)(param_1 + 0xb70) = param_3;
    *(int *)(param_1 + 0xb78) = param_4;
    *(undefined4 *)(param_1 + 0xb7c) = 0;
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
  }
  return;
}

