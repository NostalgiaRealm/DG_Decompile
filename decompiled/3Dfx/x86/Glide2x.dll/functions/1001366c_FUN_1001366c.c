/*
 * FUN_1001366c at 1001366c
 * undefined __thiscall FUN_1001366c(void * this, undefined4 param_1)
 * Address ranges: 1001366c-1001375a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001366c(void *this,undefined4 param_1)

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
        FUN_1000423d(this_00,*(HWND *)(*(int *)((int)this + 0xc) + 0x94));
      }
      puVar1 = (undefined4 *)FUN_10003b32(*(int *)((int)this + 0x1c));
      if (puVar1 != (undefined4 *)0x0) {
        SendNotifyMessageW((HWND)*puVar1,0x402,0x44454745,0x45474544);
      }
      *(undefined1 *)(*(int *)((int)this + 0x1c) + 0x971) = 0;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x1c) + 0x318));
    if (*(char *)(*(int *)((int)this + 0x1c) + 0x759) != '\0') {
      (**(code **)(**(int **)((int)this + 0xc) + 0x18))();
      (**(code **)(**(int **)((int)this + 0xc) + 0x10))(*(int *)((int)this + 0x1c) + 0x54c);
      *(byte *)((int)this + 0x58) =
           *(byte *)((int)this + 0x58) | *(byte *)(*(int *)((int)this + 0x1c) + 0x5a1);
      *(undefined1 *)(*(int *)((int)this + 0x1c) + 0x759) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x1c) + 0x318));
    if ((*(char *)((int)this + 0x58) != '\0') &&
       (*(char *)(*(int *)((int)this + 0x1c) + 0x7b9) != '\0')) {
      FUN_10015234(this);
    }
    (**(code **)(**(int **)((int)this + 0xc) + 0x60))(param_1);
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
  }
  return;
}

