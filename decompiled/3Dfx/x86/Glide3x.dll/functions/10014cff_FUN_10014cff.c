/*
 * FUN_10014cff at 10014cff
 * undefined __thiscall FUN_10014cff(void * this, LPCVOID param_1)
 * Address ranges: 10014cff-10014d32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10014cff(void *this,LPCVOID param_1)

{
  CloseHandle(*(HANDLE *)((int)this + 0x4c));
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  UnmapViewOfFile(param_1);
  UnmapViewOfFile(*(LPCVOID *)((int)this + 0x50));
  return;
}

