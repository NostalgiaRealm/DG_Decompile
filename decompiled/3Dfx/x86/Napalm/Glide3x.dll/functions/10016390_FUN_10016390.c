/*
 * FUN_10016390 at 10016390
 * undefined __thiscall FUN_10016390(void * this, LPCVOID param_1)
 * Address ranges: 10016390-100163c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10016390(void *this,LPCVOID param_1)

{
  CloseHandle(*(HANDLE *)((int)this + 0x4c));
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  UnmapViewOfFile(param_1);
  UnmapViewOfFile(*(LPCVOID *)((int)this + 0x50));
  return;
}

