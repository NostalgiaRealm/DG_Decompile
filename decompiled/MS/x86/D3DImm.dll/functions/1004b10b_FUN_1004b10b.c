/*
 * FUN_1004b10b at 1004b10b
 * int __thiscall FUN_1004b10b(void * this, int param_1, int * param_2)
 * Address ranges: 1004b10b-1004b133
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004b10b(void *this,int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = -0x7ff8ffa9;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
    iVar1 = FUN_1004b2b6(this,param_1,param_2,(int *)0x0);
  }
  return iVar1;
}

