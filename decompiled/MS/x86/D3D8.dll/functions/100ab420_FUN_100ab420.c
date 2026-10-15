/*
 * FUN_100ab420 at 100ab420
 * undefined1 __stdcall FUN_100ab420(int param_1, int param_2, int param_3)
 * Address ranges: 100ab420-100ab447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100ab420(int param_1,int param_2,int param_3)

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

