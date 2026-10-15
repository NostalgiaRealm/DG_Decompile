/*
 * FUN_1000e7da at 1000e7da
 * undefined __thiscall FUN_1000e7da(void * this, int param_1)
 * Address ranges: 1000e7da-1000e829
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000e7da(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x170))();
  *(int *)((int)this + 0x2c78) = param_1;
  if (*(int *)((int)this + 0x29f8) != param_1) {
    *(int *)((int)this + 0x29f8) = param_1;
    FUN_10008341(this,*(int *)((int)this + 0x2bb8),*(int *)((int)this + 0x2bbc),
                 *(int *)((int)this + 0x2bc0),*(int *)((int)this + 0x2bc4));
  }
  *(undefined1 *)((int)this + 0x32d0) = 1;
  return;
}

