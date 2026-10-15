/*
 * FUN_1004c14b at 1004c14b
 * int __thiscall FUN_1004c14b(void * this, int param_1, int * param_2)
 * Address ranges: 1004c14b-1004c17f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004c14b(void *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_2;
  iVar2 = -0x7ff8ffa9;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
    param_2 = (int *)0x0;
    iVar2 = FUN_1004caa6((void *)((int)this + 4),param_1,piVar1,(int *)&param_2);
  }
  return iVar2;
}

