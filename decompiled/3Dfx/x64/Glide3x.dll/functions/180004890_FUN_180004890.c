/*
 * FUN_180004890 at 180004890
 * undefined __fastcall FUN_180004890(longlong param_1)
 * Address ranges: 180004890-180004912
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180004890(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x370);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (DAT_18006da70 != (HANDLE)0x0)) {
    if (*(char *)(param_1 + 0x7e8) != '\0') {
      PostThreadMessageW(*(DWORD *)(param_1 + 0x374),0x12,0,0);
      WaitForSingleObject(DAT_18006da70,0xffffffff);
    }
    CloseHandle(DAT_18006da70);
    DAT_18006da70 = (HANDLE)0x0;
    *(undefined8 *)(param_1 + 0x378) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x388));
  }
  return;
}

