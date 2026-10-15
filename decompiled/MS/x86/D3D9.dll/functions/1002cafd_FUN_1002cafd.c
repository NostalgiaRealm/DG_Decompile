/*
 * FUN_1002cafd at 1002cafd
 * undefined4 * __thiscall FUN_1002cafd(void * this, undefined4 param_1, undefined1 param_2)
 * Address ranges: 1002cafd-1002cb35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002cafd(void *this,undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_D3DPERF_GetStatus_100d5224;
  puVar2 = (undefined4 *)((int)this + 8);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined1 *)((int)this + 0x48) = param_2;
  return this;
}

