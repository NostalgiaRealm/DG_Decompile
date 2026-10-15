/*
 * FUN_100064e2 at 100064e2
 * undefined __thiscall FUN_100064e2(void * this, uint param_1)
 * Address ranges: 100064e2-1000652d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100064e2(void *this,uint param_1)

{
  int *this_00;
  uint uVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    this_00 = *(int **)((int)this + 0xc);
    uVar1 = FUN_10008b77(this_00,param_1);
    if (uVar1 != *(uint *)((int)this_00 + 0xfa)) {
      (**(code **)(*this_00 + 0xbc))(uVar1);
      *(uint *)(*(int *)((int)this + 0xc) + 0xfa) = uVar1;
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
  }
  return;
}

