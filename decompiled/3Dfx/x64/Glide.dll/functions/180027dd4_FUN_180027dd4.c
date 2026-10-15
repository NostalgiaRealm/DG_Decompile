/*
 * FUN_180027dd4 at 180027dd4
 * undefined __fastcall FUN_180027dd4(longlong param_1, LPCVOID param_2)
 * Address ranges: 180027dd4-180027e1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180027dd4(longlong param_1,LPCVOID param_2)

{
  CloseHandle(*(HANDLE *)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  UnmapViewOfFile(param_2);
                    /* WARNING: Could not recover jumptable at 0x000180027e15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UnmapViewOfFile(*(LPCVOID *)(param_1 + 0x58));
  return;
}

