/*
 * FUN_10051c18 at 10051c18
 * int * __thiscall FUN_10051c18(void * this, int * param_1, uint param_2, int param_3)
 * Address ranges: 10051c18-10051c4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_10051c18(void *this,int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)((int)this + 0x34) + (param_2 >> 0x10) * 8);
  (**(code **)(*piVar1 + 0x24))(piVar1,param_1);
  *param_1 = *param_1 + ((param_2 & 0xffff) + param_3) * *(int *)((int)this + 0x18);
  return param_1;
}

