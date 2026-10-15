/*
 * FUN_1800937e8 at 1800937e8
 * undefined __fastcall FUN_1800937e8(longlong param_1)
 * Address ranges: 1800937e8-180093829
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800937e8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1800e05b4(*(longlong **)(param_1 + 0x50),*(longlong *)(param_1 + 0x110),0);
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  FUN_18008e2ec((longlong *)(param_1 + 0x60),1,1);
  return;
}

