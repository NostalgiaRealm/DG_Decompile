/*
 * FUN_100ac750 at 100ac750
 * undefined4 * __thiscall FUN_100ac750(void * this, byte param_1)
 * Address ranges: 100ac750-100ac787
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100ac750(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100b5a70;
  if ((*(HANDLE *)((int)this + 4) != (HANDLE)0x0) && (*(char *)((int)this + 8) != '\0')) {
    CloseHandle(*(HANDLE *)((int)this + 4));
  }
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

