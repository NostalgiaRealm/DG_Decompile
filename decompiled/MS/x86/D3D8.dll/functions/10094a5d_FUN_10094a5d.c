/*
 * FUN_10094a5d at 10094a5d
 * undefined __fastcall FUN_10094a5d(int param_1)
 * Address ranges: 10094a5d-10094a8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10094a5d(int param_1)

{
  HANDLE hThread;
  uint uVar1;
  
  uVar1 = 0;
  do {
    hThread = *(HANDLE *)(param_1 + 0x2dc + uVar1 * 0x38);
    if (hThread != (HANDLE)0x0) {
      TerminateThread(hThread,0);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  FUN_10097342(param_1 + 8);
  return;
}

