/*
 * FUN_1800088b0 at 1800088b0
 * undefined8 __cdecl FUN_1800088b0(longlong param_1, DWORD param_2, LPCVOID param_3, DWORD * param_4)
 * Address ranges: 1800088b0-18000894f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800088b0(longlong param_1,DWORD param_2,LPCVOID param_3,DWORD *param_4)

{
  BOOL BVar1;
  DWORD local_20 [4];
  
  local_20[0] = 0;
  if (((longlong)*(HANDLE *)(param_1 + 8) - 1U < 0xfffffffffffffffe) &&
     (BVar1 = WriteFile(*(HANDLE *)(param_1 + 8),param_3,param_2,local_20,(LPOVERLAPPED)0x0),
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

