/*
 * FUN_1800a3360 at 1800a3360
 * undefined FUN_1800a3360(void)
 * Address ranges: 1800a3360-1800a3497
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800a3360(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_240;
  undefined1 auStack_238 [520];
  
  iVar1 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
  if (iVar1 == 0) {
    FUN_180003398();
  }
  if (DAT_18024e328 == '\0') {
    lVar2 = FUN_1800ff988();
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + 0x880) != '\0') {
        local_240 = 0;
        (*__imp_SHELL32_dll_SHGetKnownFolderPath)(&DAT_1802296a8,0,0,&local_240);
        if (local_240 != 0) {
          func_0x000180223210(auStack_238);
          (*__imp_SHLWAPI_dll_PathAppendW)(auStack_238,u_D3D9_DLL_180235e68);
          DAT_180258780 = (*__imp_KERNEL32_dll_LoadLibraryW)(auStack_238);
          (*__imp_ole32_dll_CoTaskMemFree)(local_240);
        }
      }
      if (DAT_180258a20 == '\0') {
        DAT_180258a20 = '\x01';
      }
      FUN_180100178(lVar2);
    }
    DAT_18024e328 = '\x01';
  }
  uVar3 = 0;
  if (DAT_180258780 != 0) {
    uVar3 = (*__imp_KERNEL32_dll_GetProcAddress)(DAT_180258780,param_1);
  }
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  return uVar3;
}

