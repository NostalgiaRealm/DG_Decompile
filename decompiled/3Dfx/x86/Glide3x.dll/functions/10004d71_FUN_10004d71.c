/*
 * FUN_10004d71 at 10004d71
 * undefined __thiscall FUN_10004d71(void * this, uint param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10004d71-10004df7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10004d71(void *this,uint param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != 0) {
      uVar2 = 0;
      do {
        lVar3 = FUN_10053160();
        *(int *)(param_2 + uVar2 * 4) = (int)lVar3 * 0xff;
        lVar3 = FUN_10053160();
        *(int *)(param_3 + uVar2 * 4) = (int)lVar3 * 0xff;
        lVar3 = FUN_10053160();
        *(int *)(param_4 + uVar2 * 4) = (int)lVar3 * 0xff;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_1);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

