/*
 * FUN_180022260 at 180022260
 * undefined __cdecl FUN_180022260(longlong * param_1)
 * Address ranges: 180022260-18002228f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180022260(longlong *param_1)

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

