/*
 * FUN_100cf030 at 100cf030
 * undefined4 * __thiscall FUN_100cf030(void * this, byte param_1)
 * Address ranges: 100cf030-100cf067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100cf030(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100d94c8;
  if ((*(HANDLE *)((int)this + 4) != (HANDLE)0x0) && (*(char *)((int)this + 8) != '\0')) {
    CloseHandle(*(HANDLE *)((int)this + 4));
  }
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

