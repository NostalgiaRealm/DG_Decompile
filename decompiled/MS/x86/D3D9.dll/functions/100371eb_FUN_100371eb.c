/*
 * FUN_100371eb at 100371eb
 * undefined4 * __thiscall FUN_100371eb(void * this, int param_1, int param_2, undefined1 param_3)
 * Address ranges: 100371eb-10037230
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100371eb(void *this,int param_1,int param_2,undefined1 param_3)

{
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x34) = param_3;
  *(undefined ***)this = &PTR_D3DPERF_GetStatus_100d5568;
  *(int *)((int)this + 0x20) = param_1;
  *(int *)((int)this + 0x24) = param_2;
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_2 * 0x28 + 0x38 + param_1);
  return this;
}

