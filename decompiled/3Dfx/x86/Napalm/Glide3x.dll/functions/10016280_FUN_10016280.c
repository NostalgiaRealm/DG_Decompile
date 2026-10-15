/*
 * FUN_10016280 at 10016280
 * undefined4 __fastcall FUN_10016280(int param_1)
 * Address ranges: 10016280-100162ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10016280(int param_1)

{
  switch(*(undefined4 *)(param_1 + 200)) {
  case 6:
  case 7:
  case 8:
    return 2;
  case 9:
  case 10:
  case 0xb:
    return 4;
  case 0xc:
  case 0xd:
  case 0xe:
    return 8;
  default:
    return 1;
  }
}

