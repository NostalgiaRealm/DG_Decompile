/*
 * FUN_10021c81 at 10021c81
 * undefined __thiscall FUN_10021c81(void * this, LPCVOID param_1)
 * Address ranges: 10021c81-10021cb4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10021c81(void *this,LPCVOID param_1)

{
  CloseHandle(*(HANDLE *)((int)this + 0x4c));
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  UnmapViewOfFile(param_1);
  UnmapViewOfFile(*(LPCVOID *)((int)this + 0x50));
  return;
}

