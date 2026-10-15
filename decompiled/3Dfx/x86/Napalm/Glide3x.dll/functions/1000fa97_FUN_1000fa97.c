/*
 * FUN_1000fa97 at 1000fa97
 * undefined __thiscall FUN_1000fa97(void * this, int param_1)
 * Address ranges: 1000fa97-1000fae6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000fa97(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x198))();
  *(int *)((int)this + 0x2dc8) = param_1;
  if (*(int *)((int)this + 0x2b34) != param_1) {
    *(int *)((int)this + 0x2b34) = param_1;
    FUN_100088eb(this,*(int *)((int)this + 0x2cf8),*(int *)((int)this + 0x2cfc),
                 *(int *)((int)this + 0x2d00),*(int *)((int)this + 0x2d04));
  }
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

