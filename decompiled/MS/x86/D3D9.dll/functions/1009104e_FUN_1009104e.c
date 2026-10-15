/*
 * FUN_1009104e at 1009104e
 * undefined4 __thiscall FUN_1009104e(void * this, int param_1, uint * param_2, int * param_3)
 * Address ranges: 1009104e-100910a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1009104e(void *this,int param_1,uint *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)this != 0) {
    do {
      iVar3 = 0;
      while (*(int *)(param_1 + iVar3 * 4) == *(int *)((int)this + iVar3 * 4 + uVar2 * 0x10 + 0x10))
      {
        iVar3 = iVar3 + 1;
        if (iVar3 == 4) {
          LOCK();
          piVar1 = (int *)((int)this + 4);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          if (param_3 != (int *)0x0) {
            *param_3 = iVar3 + 1;
          }
          *param_2 = *(uint *)((int)this + 0xc);
          return 0;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)this);
  }
  return 0x80004002;
}

