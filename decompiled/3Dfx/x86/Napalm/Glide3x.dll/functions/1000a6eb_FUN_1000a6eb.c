/*
 * FUN_1000a6eb at 1000a6eb
 * undefined __thiscall FUN_1000a6eb(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1000a6eb-1000a735
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000a6eb(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 0x36e8) = param_2;
  *(undefined4 *)((int)this + 0x36c0) = param_3;
  *(undefined4 *)((int)this + 0x36c4) = param_4;
  *(undefined4 *)((int)this + 0x36f0) = *(undefined4 *)(&DAT_10058b44 + param_1 * 4);
  *(undefined1 *)((int)this + 0x3736) = 1;
  FUN_1004355b(*(int *)(*(int *)((int)this + 0x3688) + 0x1304),param_1);
  return;
}

