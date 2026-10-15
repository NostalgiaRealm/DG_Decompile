/*
 * FUN_10004d8b at 10004d8b
 * undefined __thiscall FUN_10004d8b(void * this, int param_1)
 * Address ranges: 10004d8b-10004e12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10004d8b(void *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = FUN_100054db((int)this);
  if (bVar2) {
    if (param_1 == 4) {
      *(undefined1 *)((int)this + 0x58) = 0;
    }
    else if (param_1 == 6) {
      uVar3 = FUN_100061fc((int)this);
      if ((&DAT_1005f389)[uVar3 * 0x18] != '\0') {
        FUN_100055bc((int)this);
      }
    }
    else if ((param_1 == 7) && (*(char *)((int)this + 0x3c) != '\0')) {
      piVar1 = (int *)((int)this + 0x38);
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      bVar2 = FUN_100051b3(this,4);
      if ((bVar2) && ((char)(*(int **)((int)this + 0xc))[0x3c] != '\0')) {
        (**(code **)(**(int **)((int)this + 0xc) + 0x184))(0);
        *(undefined1 *)(*(int *)((int)this + 0xc) + 0xf0) = 0;
      }
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
  }
  return;
}

