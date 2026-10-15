/*
 * FUN_1005d293 at 1005d293
 * undefined __fastcall FUN_1005d293(int * param_1)
 * Address ranges: 1005d293-1005d2bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1005d293(int *param_1)

{
  uint uVar1;
  
  FUN_100ada8e(param_1,0,0xb0);
  uVar1 = 0;
  do {
    *(undefined1 *)(param_1 + uVar1 * 2 + 5) = 0xff;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x11);
  param_1[1] = 3;
  return;
}

