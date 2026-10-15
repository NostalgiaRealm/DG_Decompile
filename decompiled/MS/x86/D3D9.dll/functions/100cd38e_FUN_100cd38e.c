/*
 * FUN_100cd38e at 100cd38e
 * int * __thiscall FUN_100cd38e(void * this, int param_1)
 * Address ranges: 100cd38e-100cd3bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_100cd38e(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0xd4);
  if (iVar2 != 0) {
    do {
      piVar1 = (int *)(iVar2 * 0x48 + -0x48 + *(int *)((int)this + 0xd0));
      if (*piVar1 == param_1) {
        return piVar1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return (int *)0x0;
}

