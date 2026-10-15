/*
 * FUN_10042460 at 10042460
 * int * __thiscall FUN_10042460(void * this, int * param_1, uint param_2, int param_3)
 * Address ranges: 10042460-10042494
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_10042460(void *this,int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)((int)this + 0x34) + (param_2 >> 0x10) * 8);
  (**(code **)(*piVar1 + 0x24))(piVar1,param_1);
  *param_1 = *param_1 + ((param_2 & 0xffff) + param_3) * *(int *)((int)this + 0x18);
  return param_1;
}

