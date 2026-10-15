/*
 * FUN_18001e4ac at 18001e4ac
 * undefined __fastcall FUN_18001e4ac(longlong * param_1)
 * Address ranges: 18001e4ac-18001e4ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e4ac(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x2c4c) = *(undefined4 *)(lVar1 + 0x2c1c);
  *(undefined4 *)(lVar1 + 0x2c50) = *(undefined4 *)(lVar1 + 0x2c20);
  *(undefined8 *)(lVar1 + 0x2c58) = *(undefined8 *)(lVar1 + 0x2c28);
  *(undefined4 *)(lVar1 + 0x2c60) = *(undefined4 *)(lVar1 + 0x2c30);
  *(undefined4 *)(lVar1 + 0x2c64) = *(undefined4 *)(lVar1 + 0x2c34);
  return;
}

