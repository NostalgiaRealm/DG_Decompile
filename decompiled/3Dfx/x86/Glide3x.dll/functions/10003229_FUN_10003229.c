/*
 * FUN_10003229 at 10003229
 * undefined __fastcall FUN_10003229(int param_1)
 * Address ranges: 10003229-10003286
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10003229(int param_1)

{
  if (DAT_1005b8a4 != (HANDLE)0x0) {
    if (*(char *)(param_1 + 0x758) != '\0') {
      PostThreadMessageW(*(DWORD *)(param_1 + 0x30c),0x12,0,0);
      WaitForSingleObject(DAT_1005b8a4,0xffffffff);
    }
    CloseHandle(DAT_1005b8a4);
    DAT_1005b8a4 = (HANDLE)0x0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  }
  return;
}

