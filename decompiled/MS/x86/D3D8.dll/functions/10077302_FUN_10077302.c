/*
 * FUN_10077302 at 10077302
 * int * __thiscall FUN_10077302(void * this, int * param_1, int param_2)
 * Address ranges: 10077302-10077345
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_10077302(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  iVar3 = *(int *)((int)this + 0x8c);
  *param_1 = (iVar1 - *(int *)((int)this + 0x88)) + -10;
  param_1[1] = (iVar2 - iVar3) + -10;
  param_1[2] = iVar1 + -10;
  param_1[3] = iVar2 + -10;
  return param_1;
}

