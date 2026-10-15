/*
 * FUN_1001a12c at 1001a12c
 * undefined __thiscall FUN_1001a12c(void * this, LPWSTR param_1, int param_2)
 * Address ranges: 1001a12c-1001a147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001a12c(void *this,LPWSTR param_1,int param_2)

{
  GetWindowTextW(*(HWND *)(*(int *)((int)this + 8) + 0x94),param_1,param_2);
  return;
}

