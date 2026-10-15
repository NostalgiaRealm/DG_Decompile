/*
 * FUN_1000269f at 1000269f
 * undefined4 __fastcall FUN_1000269f(int param_1)
 * Address ranges: 1000269f-100026b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1000269f(int param_1)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_100d4a2c)[uVar1]) {
      uVar2 = 0;
      break;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  return CONCAT31((int3)(uVar1 >> 8),uVar2);
}

