/*
 * FUN_10004c30 at 10004c30
 * undefined4 * __thiscall FUN_10004c30(void * this, byte param_1)
 * Address ranges: 10004c30-10004c67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10004c30(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_10051748;
  if ((*(HANDLE *)((int)this + 4) != (HANDLE)0x0) && (*(char *)((int)this + 8) != '\0')) {
    CloseHandle(*(HANDLE *)((int)this + 4));
  }
  if ((param_1 & 1) != 0) {
    FUN_1004f626(this);
  }
  return this;
}

