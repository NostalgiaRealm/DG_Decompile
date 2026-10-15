/*
 * FUN_10006900 at 10006900
 * undefined __thiscall FUN_10006900(void * this, uint param_1)
 * Address ranges: 10006900-1000694b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006900(void *this,uint param_1)

{
  int *this_00;
  uint uVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    this_00 = *(int **)((int)this + 0xc);
    uVar1 = FUN_10009384(this_00,param_1);
    if (uVar1 != *(uint *)((int)this_00 + 0x11d)) {
      (**(code **)(*this_00 + 0xb8))(uVar1);
      *(uint *)(*(int *)((int)this + 0xc) + 0x11d) = uVar1;
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
  }
  return;
}

