/*
 * FUN_100c005c at 100c005c
 * undefined4 * __thiscall FUN_100c005c(void * this, byte param_1)
 * Address ranges: 100c005c-100c0085
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100c005c(void *this,byte param_1)

{
  *(undefined ***)((int)this + 0x38) = &PTR_D3DPERF_GetStatus_100d8cc0;
  *(undefined ***)this = &PTR_FUN_100d8d20;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

