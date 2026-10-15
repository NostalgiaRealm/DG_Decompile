/*
 * FUN_1004bb07 at 1004bb07
 * int __thiscall FUN_1004bb07(void * this, int param_1, int * param_2)
 * Address ranges: 1004bb07-1004bb3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004bb07(void *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_2;
  iVar2 = -0x7ff8ffa9;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
    param_2 = (int *)0x0;
    iVar2 = FUN_1004be0c((void *)((int)this + 0x20),param_1,piVar1,(int *)&param_2);
  }
  return iVar2;
}

