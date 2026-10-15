/*
 * FUN_10004f80 at 10004f80
 * undefined4 * __thiscall FUN_10004f80(void * this, byte param_1)
 * Address ranges: 10004f80-10004fb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10004f80(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_10051748;
  if ((*(HANDLE *)((int)this + 4) != (HANDLE)0x0) && (*(char *)((int)this + 8) != '\0')) {
    CloseHandle(*(HANDLE *)((int)this + 4));
  }
  if ((param_1 & 1) != 0) {
    FUN_1004f9b6(this);
  }
  return this;
}

