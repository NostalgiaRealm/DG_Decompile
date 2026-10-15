/*
 * FUN_100477cb at 100477cb
 * undefined __fastcall FUN_100477cb(int param_1)
 * Address ranges: 100477cb-100477f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100477cb(int param_1)

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
  FUN_1004a0b0(param_1 + 8);
  return;
}

