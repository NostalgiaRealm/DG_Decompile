/*
 * FUN_180004c68 at 180004c68
 * undefined __fastcall FUN_180004c68(longlong param_1)
 * Address ranges: 180004c68-180004cea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180004c68(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x370);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (DAT_18006c898 != (HANDLE)0x0)) {
    if (*(char *)(param_1 + 0x7e8) != '\0') {
      PostThreadMessageW(*(DWORD *)(param_1 + 0x374),0x12,0,0);
      WaitForSingleObject(DAT_18006c898,0xffffffff);
    }
    CloseHandle(DAT_18006c898);
    DAT_18006c898 = (HANDLE)0x0;
    *(undefined8 *)(param_1 + 0x378) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x388));
  }
  return;
}

