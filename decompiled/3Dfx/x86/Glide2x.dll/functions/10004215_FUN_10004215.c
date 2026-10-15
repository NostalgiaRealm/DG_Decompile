/*
 * FUN_10004215 at 10004215
 * undefined1 __stdcall FUN_10004215(int param_1, int param_2, int param_3)
 * Address ranges: 10004215-1000423c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10004215(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (((param_1 == 0x402) && (param_2 == 0x44454745)) && (param_3 == 0x45474544)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

