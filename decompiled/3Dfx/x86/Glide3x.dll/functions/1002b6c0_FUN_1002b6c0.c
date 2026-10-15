/*
 * FUN_1002b6c0 at 1002b6c0
 * undefined4 * __thiscall FUN_1002b6c0(void * this, byte param_1)
 * Address ranges: 1002b6c0-1002b6f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002b6c0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_100562d8;
  if ((*(HANDLE *)((int)this + 4) != (HANDLE)0x0) && (*(char *)((int)this + 8) != '\0')) {
    CloseHandle(*(HANDLE *)((int)this + 4));
  }
  if ((param_1 & 1) != 0) {
    FUN_10052276(this);
  }
  return this;
}

