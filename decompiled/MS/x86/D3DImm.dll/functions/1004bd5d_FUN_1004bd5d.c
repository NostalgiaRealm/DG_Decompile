/*
 * FUN_1004bd5d at 1004bd5d
 * undefined4 __thiscall FUN_1004bd5d(void * this, int param_1, int param_2)
 * Address ranges: 1004bd5d-1004be0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004bd5d(void *this,int param_1,int param_2)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0x80070057;
  if ((param_1 != 0) && (param_2 == 0)) {
    BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
    if (BVar2 == 0) {
      FUN_1003c603();
    }
    uVar4 = 0x8876080e;
    if ((*(int *)((int)this + 0xc) == 0) &&
       (uVar4 = 0x8876080c, *(char *)((int)this + 0x134) == '\0')) {
      FUN_1004b8b2((int)this);
      *(undefined1 *)((int)this + 0x134) = 1;
      iVar3 = FUN_1003f683(param_1);
      *(char *)((int)this + 0x135) = (char)iVar3;
      if (*(int *)((int)this + 300) != 0) {
        cVar1 = (**(code **)(**(int **)((int)this + 0x68) + 0x30))();
        if ((cVar1 == '\0') && (*(int *)((int)this + 0x80) == 0)) {
          if (*(int *)((int)this + 4) != 0) {
            FUN_1005c797(*(LPVOID *)(*(int *)((int)this + 4) + -4));
          }
          *(undefined4 *)((int)this + 4) = 0;
        }
      }
      uVar4 = 0;
    }
    LeaveCriticalSection(DAT_1006bbd0);
  }
  return uVar4;
}

