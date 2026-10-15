/*
 * FUN_10013bb7 at 10013bb7
 * undefined4 * __thiscall FUN_10013bb7(void * this, int param_1, undefined4 param_2, undefined2 param_3)
 * Address ranges: 10013bb7-10013bfe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10013bb7(void *this,int param_1,undefined4 param_2,undefined2 param_3)

{
  *(undefined ***)this = &PTR_D3DPERF_GetStatus_100d4cd4;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x30) = param_3;
  *(uint *)((int)this + 0x14) = -(uint)(param_1 != 0) & param_1 + 0x66b4U;
  return this;
}

