/*
 * FUN_1003c306 at 1003c306
 * undefined __fastcall FUN_1003c306(int * param_1)
 * Address ranges: 1003c306-1003c32e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003c306(int *param_1)

{
  uint uVar1;
  
  FUN_1005c9cc(param_1,0,0xb0);
  uVar1 = 0;
  do {
    *(undefined1 *)(param_1 + uVar1 * 2 + 5) = 0xff;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x11);
  param_1[1] = 3;
  return;
}

