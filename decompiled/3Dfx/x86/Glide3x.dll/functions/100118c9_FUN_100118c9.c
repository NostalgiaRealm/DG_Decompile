/*
 * FUN_100118c9 at 100118c9
 * undefined __thiscall FUN_100118c9(void * this, int param_1)
 * Address ranges: 100118c9-10011905
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100118c9(void *this,int param_1)

{
  FUN_100102f1(*(int **)((int)this + 0x32dc));
  (**(code **)(*(int *)this + 0x170))();
  *(int *)((int)this + 0x2bf4) = param_1;
  *(undefined1 *)((int)this + 0x2c60) = 1;
  *(undefined4 *)((int)this + 0x2ae8) = *(undefined4 *)(&DAT_10054814 + param_1 * 4);
  return;
}

