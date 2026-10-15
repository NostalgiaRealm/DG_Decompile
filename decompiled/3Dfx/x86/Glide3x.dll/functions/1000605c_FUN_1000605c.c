/*
 * FUN_1000605c at 1000605c
 * undefined __thiscall FUN_1000605c(void * this, undefined4 param_1)
 * Address ranges: 1000605c-1000614a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000605c(void *this,undefined4 param_1)

{
  void *this_00;
  undefined4 *puVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    this_00 = *(void **)((int)this + 0x1c);
    if (*(char *)((int)this_00 + 0x7bb) == '\0') {
      if (*(char *)((int)this_00 + 0x971) == '\0') {
        FUN_10003fd1(this_00,*(HWND *)(*(int *)((int)this + 0xc) + 0x94));
      }
      puVar1 = (undefined4 *)FUN_100038c6(*(int *)((int)this + 0x1c));
      if (puVar1 != (undefined4 *)0x0) {
        SendNotifyMessageW((HWND)*puVar1,0x402,0x44454745,0x45474544);
      }
      *(undefined1 *)(*(int *)((int)this + 0x1c) + 0x971) = 0;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x1c) + 0x318));
    if (*(char *)(*(int *)((int)this + 0x1c) + 0x759) != '\0') {
      (**(code **)(**(int **)((int)this + 0xc) + 0x1c))();
      (**(code **)(**(int **)((int)this + 0xc) + 0x14))(*(int *)((int)this + 0x1c) + 0x54c);
      *(byte *)((int)this + 0x58) =
           *(byte *)((int)this + 0x58) | *(byte *)(*(int *)((int)this + 0x1c) + 0x5a1);
      *(undefined1 *)(*(int *)((int)this + 0x1c) + 0x759) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x1c) + 0x318));
    if ((*(char *)((int)this + 0x58) != '\0') &&
       (*(char *)(*(int *)((int)this + 0x1c) + 0x7b9) != '\0')) {
      FUN_1000d416(this);
    }
    (**(code **)(**(int **)((int)this + 0xc) + 0x70))(param_1);
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
  }
  return;
}

