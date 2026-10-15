/*
 * FUN_1000342b at 1000342b
 * undefined __fastcall FUN_1000342b(int param_1)
 * Address ranges: 1000342b-10003488
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000342b(int param_1)

{
  if (DAT_1005fa84 != (HANDLE)0x0) {
    if (*(char *)(param_1 + 0x758) != '\0') {
      PostThreadMessageW(*(DWORD *)(param_1 + 0x30c),0x12,0,0);
      WaitForSingleObject(DAT_1005fa84,0xffffffff);
    }
    CloseHandle(DAT_1005fa84);
    DAT_1005fa84 = (HANDLE)0x0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x318));
  }
  return;
}

