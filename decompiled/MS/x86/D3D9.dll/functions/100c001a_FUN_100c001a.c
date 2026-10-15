/*
 * FUN_100c001a at 100c001a
 * undefined4 * __thiscall FUN_100c001a(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 100c001a-100c005b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_100c001a(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x28) = param_3;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  *(undefined ***)this = &PTR_FUN_100d8d18;
  *(undefined ***)((int)this + 0x38) = &PTR_D3DPERF_GetStatus_100d8cc0;
  return this;
}

