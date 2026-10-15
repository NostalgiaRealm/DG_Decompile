/*
 * FUN_1001d484 at 1001d484
 * undefined __thiscall FUN_1001d484(void * this, int param_1)
 * Address ranges: 1001d484-1001d4c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001d484(void *this,int param_1)

{
  FUN_1001c4fb(*(int **)((int)this + 0x315c));
  (**(code **)(*(int *)this + 0x150))();
  *(int *)((int)this + 0x2b54) = param_1;
  *(undefined1 *)((int)this + 0x2bc0) = 1;
  *(undefined4 *)((int)this + 0x2a48) = *(undefined4 *)(&DAT_10051ab0 + param_1 * 4);
  return;
}

