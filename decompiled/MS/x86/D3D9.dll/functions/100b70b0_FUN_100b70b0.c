/*
 * FUN_100b70b0 at 100b70b0
 * undefined __fastcall FUN_100b70b0(int param_1)
 * Address ranges: 100b70b0-100b70de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100b70b0(int param_1)

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
  FUN_100b9973(param_1 + 8);
  return;
}

