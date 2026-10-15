/*
 * FUN_1000650e at 1000650e
 * undefined __fastcall FUN_1000650e(int param_1)
 * Address ranges: 1000650e-10006532
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000650e(int param_1)

{
  HANDLE hObject;
  
  hObject = *(HANDLE *)(param_1 + 0xc4);
  if ((hObject != (HANDLE)0xffffffff) && (hObject != (HANDLE)0x0)) {
    CloseHandle(hObject);
  }
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  return;
}

