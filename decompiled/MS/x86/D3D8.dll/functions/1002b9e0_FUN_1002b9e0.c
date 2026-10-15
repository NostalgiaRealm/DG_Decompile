/*
 * FUN_1002b9e0 at 1002b9e0
 * undefined __thiscall FUN_1002b9e0(void * this, int * param_1)
 * Address ranges: 1002b9e0-1002ba0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002b9e0(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0xdacc);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)((int)this + 0xdadc);
  }
  FUN_10041ab0(this,(int)this + 0x90,(int)this + 0xd970,param_1,piVar1);
  return;
}

