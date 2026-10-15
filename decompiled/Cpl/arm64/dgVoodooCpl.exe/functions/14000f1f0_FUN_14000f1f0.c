/*
 * FUN_14000f1f0 at 14000f1f0
 * undefined8 * __cdecl FUN_14000f1f0(undefined8 * param_1, LPCWSTR param_2, ulonglong param_3)
 * Address ranges: 14000f1f0-14000f25f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_14000f1f0(undefined8 *param_1,LPCWSTR param_2,ulonglong param_3)

{
  HANDLE pvVar1;
  DWORD dwDesiredAccess;
  DWORD dwCreationDisposition;
  
  *param_1 = &PTR_FUN_140028808;
  *(undefined1 *)(param_1 + 2) = 1;
  if ((param_3 & 1) == 0) {
    dwCreationDisposition = 3;
    dwDesiredAccess = 0x80000000;
  }
  else {
    dwCreationDisposition = 2;
    dwDesiredAccess = 0x40000000;
  }
  pvVar1 = CreateFileW(param_2,dwDesiredAccess,1,(LPSECURITY_ATTRIBUTES)0x0,dwCreationDisposition,
                       0x80,(HANDLE)0x0);
  param_1[1] = pvVar1;
  return param_1;
}

