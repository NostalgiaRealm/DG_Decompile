/*
 * FUN_10004d05 at 10004d05
 * undefined __thiscall FUN_10004d05(void * this, int param_1)
 * Address ranges: 10004d05-10004d8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10004d05(void *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = FUN_100054db((int)this);
  if (bVar2) {
    if (param_1 == 4) {
      *(undefined1 *)((int)this + 0x58) = 1;
    }
    else if (param_1 == 6) {
      uVar3 = FUN_100061fc((int)this);
      if ((&DAT_1005f389)[uVar3 * 0x18] != '\0') {
        FUN_10005568((int)this);
      }
    }
    else if ((param_1 == 7) && (*(char *)((int)this + 0x3c) != '\0')) {
      piVar1 = (int *)((int)this + 0x38);
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      bVar2 = FUN_100051b3(this,4);
      if ((bVar2) && ((char)(*(int **)((int)this + 0xc))[0x3c] == '\0')) {
        (**(code **)(**(int **)((int)this + 0xc) + 0x184))(1);
        *(undefined1 *)(*(int *)((int)this + 0xc) + 0xf0) = 1;
      }
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
  }
  return;
}

