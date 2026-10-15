/*
 * FUN_1001a4b7 at 1001a4b7
 * undefined __thiscall FUN_1001a4b7(void * this, LPWSTR param_1, int param_2)
 * Address ranges: 1001a4b7-1001a4d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001a4b7(void *this,LPWSTR param_1,int param_2)

{
  GetWindowTextW(*(HWND *)(*(int *)((int)this + 8) + 0x94),param_1,param_2);
  return;
}

