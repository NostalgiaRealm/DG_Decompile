/*
 * FUN_180008810 at 180008810
 * undefined8 __cdecl FUN_180008810(longlong param_1, DWORD param_2, LPVOID param_3, DWORD * param_4)
 * Address ranges: 180008810-1800088af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180008810(longlong param_1,DWORD param_2,LPVOID param_3,DWORD *param_4)

{
  BOOL BVar1;
  DWORD local_20 [4];
  
  local_20[0] = 0;
  if (((longlong)*(HANDLE *)(param_1 + 8) - 1U < 0xfffffffffffffffe) &&
     (BVar1 = ReadFile(*(HANDLE *)(param_1 + 8),param_3,param_2,local_20,(LPOVERLAPPED)0x0),
     BVar1 == 1)) {
    if (param_4 != (DWORD *)0x0) {
      *param_4 = local_20[0];
      return 0;
    }
    if (local_20[0] == param_2) {
      return 0;
    }
  }
  return 1;
}

