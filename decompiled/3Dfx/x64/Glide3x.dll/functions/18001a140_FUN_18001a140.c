/*
 * FUN_18001a140 at 18001a140
 * undefined __fastcall FUN_18001a140(longlong param_1, LPCVOID param_2)
 * Address ranges: 18001a140-18001a187
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001a140(longlong param_1,LPCVOID param_2)

{
  CloseHandle(*(HANDLE *)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  UnmapViewOfFile(param_2);
                    /* WARNING: Could not recover jumptable at 0x00018001a181. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UnmapViewOfFile(*(LPCVOID *)(param_1 + 0x58));
  return;
}

