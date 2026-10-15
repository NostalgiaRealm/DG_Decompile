/*
 * FUN_100c07dc at 100c07dc
 * undefined __thiscall FUN_100c07dc(void * this, int * param_1, int * param_2, int param_3)
 * Address ranges: 100c07dc-100c0820
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c07dc(void *this,int *param_1,int *param_2,int param_3)

{
  longlong lVar1;
  
  *param_1 = *(int *)((int)this + 0x28) * param_3 + param_2[1];
  param_1[1] = *param_2;
  lVar1 = (**(code **)(*(int *)*param_2 + 0x2c))((int *)*param_2);
  *(longlong *)(param_1 + 4) = lVar1;
  *(ulonglong *)(param_1 + 2) = lVar1 + (ulonglong)(uint)(*(int *)((int)this + 0x28) * param_3);
  return;
}

