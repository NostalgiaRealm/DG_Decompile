/*
 * FUN_10013f0a at 10013f0a
 * int __thiscall FUN_10013f0a(void * this, int param_1)
 * Address ranges: 10013f0a-10013f5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10013f0a(void *this,int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = FUN_10012926((int)this);
  if (cVar2 == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    if (param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) {
      if (*(char *)((int)this + 0x3c) == '\0') {
        iVar3 = *(int *)(*(int *)((int)this + 0x1c) + 0x793);
      }
      else {
        piVar1 = (int *)((int)this + 0x38);
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        iVar3 = *(int *)(param_1 * 0x4e8 + 0x2a4 + *(int *)((int)this + 0xc));
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
    }
    iVar3 = iVar3 + -0x10;
  }
  return iVar3;
}

