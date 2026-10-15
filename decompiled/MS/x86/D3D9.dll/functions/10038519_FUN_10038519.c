/*
 * FUN_10038519 at 10038519
 * undefined4 * __thiscall FUN_10038519(void * this, byte param_1)
 * Address ranges: 10038519-10038542
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10038519(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_D3DPERF_GetStatus_100d56e0;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_100d5ea0;
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

