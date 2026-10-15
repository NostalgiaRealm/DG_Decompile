/*
 * FUN_180088764 at 180088764
 * undefined __fastcall FUN_180088764(undefined1 * param_1)
 * Address ranges: 180088764-18008879b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180088764(undefined1 *param_1)

{
  longlong lVar1;
  
  FUN_1800fbea0(param_1,0,0x254);
  lVar1 = 0;
  do {
    param_1[lVar1 * 8 + 0x14] = 0xff;
    param_1[lVar1 * 8 + 0x19] = 0xff;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x40);
  *(undefined4 *)(param_1 + 4) = 4;
  return;
}

