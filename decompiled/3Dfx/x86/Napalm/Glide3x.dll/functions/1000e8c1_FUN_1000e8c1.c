/*
 * FUN_1000e8c1 at 1000e8c1
 * undefined __thiscall FUN_1000e8c1(void * this, LPWSTR param_1, int param_2)
 * Address ranges: 1000e8c1-1000e8dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000e8c1(void *this,LPWSTR param_1,int param_2)

{
  GetWindowTextW(*(HWND *)(*(int *)((int)this + 8) + 0x94),param_1,param_2);
  return;
}

