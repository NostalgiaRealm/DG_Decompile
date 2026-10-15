/*
 * FUN_10002685 at 10002685
 * undefined4 __fastcall FUN_10002685(int param_1)
 * Address ranges: 10002685-1000269e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10002685(int param_1)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_100d4a4c)[uVar1]) {
      uVar2 = 1;
      break;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 9);
  return CONCAT31((int3)(uVar1 >> 8),uVar2);
}

