/*
 * FUN_1000f307 at 1000f307
 * undefined __thiscall FUN_1000f307(void * this, int param_1)
 * Address ranges: 1000f307-1000f32f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000f307(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x170))();
  *(int *)((int)this + 0x2cfc) = param_1;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  *(int *)((int)this + 0x29e8) = param_1;
  return;
}

