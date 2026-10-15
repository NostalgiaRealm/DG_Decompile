/*
 * FUN_100910a8 at 100910a8
 * undefined4 __thiscall FUN_100910a8(void * this, int * param_1)
 * Address ranges: 100910a8-100910cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100910a8(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((int)this + 4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2 + -1;
  }
  iVar2 = *(int *)((int)this + 8) + iVar2 + -1;
  return CONCAT31((int3)((uint)-iVar2 >> 8),'\x01' - (iVar2 != 0));
}

