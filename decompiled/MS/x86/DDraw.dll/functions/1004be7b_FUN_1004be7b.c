/*
 * FUN_1004be7b at 1004be7b
 * int * __thiscall FUN_1004be7b(void * this, int * param_1, uint param_2, int param_3)
 * Address ranges: 1004be7b-1004beaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_1004be7b(void *this,int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)((int)this + 0x34) + (param_2 >> 0x10) * 8);
  (**(code **)(*piVar1 + 0x24))(piVar1,param_1);
  *param_1 = *param_1 + ((param_2 & 0xffff) + param_3) * *(int *)((int)this + 0x18);
  return param_1;
}

