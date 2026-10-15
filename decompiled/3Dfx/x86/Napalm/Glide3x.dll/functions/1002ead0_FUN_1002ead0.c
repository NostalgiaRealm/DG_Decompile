/*
 * FUN_1002ead0 at 1002ead0
 * undefined4 * __thiscall FUN_1002ead0(void * this, byte param_1)
 * Address ranges: 1002ead0-1002eb07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002ead0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_10059784;
  if ((*(HANDLE *)((int)this + 4) != (HANDLE)0x0) && (*(char *)((int)this + 8) != '\0')) {
    CloseHandle(*(HANDLE *)((int)this + 4));
  }
  if ((param_1 & 1) != 0) {
    FUN_10055686(this);
  }
  return this;
}

