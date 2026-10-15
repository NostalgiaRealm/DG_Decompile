/*
 * FUN_1000d634 at 1000d634
 * undefined __thiscall FUN_1000d634(void * this, LPWSTR param_1, int param_2)
 * Address ranges: 1000d634-1000d64f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000d634(void *this,LPWSTR param_1,int param_2)

{
  GetWindowTextW(*(HWND *)(*(int *)((int)this + 8) + 0x94),param_1,param_2);
  return;
}

