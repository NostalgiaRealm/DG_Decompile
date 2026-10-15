/*
 * FUN_100218f5 at 100218f5
 * undefined __thiscall FUN_100218f5(void * this, LPCVOID param_1)
 * Address ranges: 100218f5-10021928
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100218f5(void *this,LPCVOID param_1)

{
  CloseHandle(*(HANDLE *)((int)this + 0x4c));
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  UnmapViewOfFile(param_1);
  UnmapViewOfFile(*(LPCVOID *)((int)this + 0x50));
  return;
}

