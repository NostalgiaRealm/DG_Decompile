/*
 * FUN_180007f70 at 180007f70
 * undefined __cdecl FUN_180007f70(longlong param_1)
 * Address ranges: 180007f70-180008007
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180007f70(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x370) + -1;
  *(int *)(param_1 + 0x370) = iVar1;
  if ((iVar1 == 0) && (DAT_18006c8e0 != (HANDLE)0x0)) {
    if (*(char *)(param_1 + 0x7e8) != '\0') {
      PostThreadMessageW(*(DWORD *)(param_1 + 0x374),0x12,0,0);
      WaitForSingleObject(DAT_18006c8e0,0xffffffff);
    }
    CloseHandle(DAT_18006c8e0);
    DAT_18006c8e0 = (HANDLE)0x0;
    *(undefined8 *)(param_1 + 0x378) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x388));
  }
  return;
}

