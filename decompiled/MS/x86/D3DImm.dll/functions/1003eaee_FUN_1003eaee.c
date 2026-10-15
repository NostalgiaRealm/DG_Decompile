/*
 * FUN_1003eaee at 1003eaee
 * int __thiscall FUN_1003eaee(void * this, int param_1, int * param_2)
 * Address ranges: 1003eaee-1003eb25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1003eaee(void *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_2;
  iVar2 = -0x7ff8ffa9;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
    param_2 = (int *)0x0;
    iVar2 = FUN_10042849((void *)((int)this + 0x9dc),param_1,piVar1,(int *)&param_2);
  }
  return iVar2;
}

