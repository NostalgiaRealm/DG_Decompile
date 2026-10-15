/*
 * FUN_1001669e at 1001669e
 * undefined __thiscall FUN_1001669e(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1001669e-100166e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001669e(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 0x31e8) = param_2;
  *(undefined4 *)((int)this + 0x31c0) = param_3;
  *(undefined4 *)((int)this + 0x31c4) = param_4;
  *(undefined4 *)((int)this + 0x31f0) = *(undefined4 *)(&DAT_10053770 + param_1 * 4);
  *(undefined1 *)((int)this + 0x3236) = 1;
  FUN_1003d9fd(*(int *)(*(int *)((int)this + 0x3188) + 0x1304),param_1);
  return;
}

