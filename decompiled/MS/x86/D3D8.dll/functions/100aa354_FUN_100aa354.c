/*
 * FUN_100aa354 at 100aa354
 * undefined __fastcall FUN_100aa354(int param_1)
 * Address ranges: 100aa354-100aa3b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100aa354(int param_1)

{
  if (DAT_100bee94 != (HANDLE)0x0) {
    if (*(char *)(param_1 + 0x758) != '\0') {
      PostThreadMessageW(*(DWORD *)(param_1 + 0x30c),0x12,0,0);
      WaitForSingleObject(DAT_100bee94,0xffffffff);
    }
    CloseHandle(DAT_100bee94);
    DAT_100bee94 = (HANDLE)0x0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  }
  return;
}

