/*
 * FUN_1800e2a70 at 1800e2a70
 * undefined FUN_1800e2a70(void)
 * Address ranges: 1800e2a70-1800e2ac7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e2a70(longlong param_1,uint param_2,longlong param_3,int param_4)

{
  param_1 = param_1 + (ulonglong)param_2 * 0x18c0;
  if (((param_3 == *(longlong *)(param_1 + 0xb70)) && (param_4 == *(int *)(param_1 + 0xb78))) &&
     (*(int *)(param_1 + 0xb7c) == 0)) {
    return;
  }
  *(longlong *)(param_1 + 0xb70) = param_3;
  *(int *)(param_1 + 0xb78) = param_4;
  *(undefined4 *)(param_1 + 0xb7c) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001800e2ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x98))();
  return;
}

