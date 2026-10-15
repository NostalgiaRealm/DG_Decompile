/*
 * FUN_10072f49 at 10072f49
 * undefined __fastcall FUN_10072f49(int * param_1)
 * Address ranges: 10072f49-10072f76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10072f49(int *param_1)

{
  uint uVar1;
  
  FUN_100cfed0(param_1,0,0x254);
  uVar1 = 0;
  do {
    *(undefined1 *)(param_1 + uVar1 * 2 + 5) = 0xff;
    *(undefined1 *)((int)param_1 + uVar1 * 8 + 0x19) = 0xff;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x40);
  param_1[1] = 4;
  return;
}

