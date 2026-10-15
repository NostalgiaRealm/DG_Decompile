/*
 * FUN_100ccc23 at 100ccc23
 * undefined __fastcall FUN_100ccc23(int param_1)
 * Address ranges: 100ccc23-100ccc80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100ccc23(int param_1)

{
  if (DAT_100e3a38 != (HANDLE)0x0) {
    if (*(char *)(param_1 + 0x758) != '\0') {
      PostThreadMessageW(*(DWORD *)(param_1 + 0x30c),0x12,0,0);
      WaitForSingleObject(DAT_100e3a38,0xffffffff);
    }
    CloseHandle(DAT_100e3a38);
    DAT_100e3a38 = (HANDLE)0x0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  }
  return;
}

