/*
 * FUN_18001e5dc at 18001e5dc
 * undefined __fastcall FUN_18001e5dc(longlong * param_1)
 * Address ranges: 18001e5dc-18001e60f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e5dc(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x2c44) = *(undefined4 *)(lVar1 + 0x2c14);
  *(undefined4 *)(lVar1 + 0x2c40) = *(undefined4 *)(lVar1 + 0x2c10);
  *(undefined4 *)(lVar1 + 0x2c48) = *(undefined4 *)(lVar1 + 0x2c18);
  *(undefined4 *)(lVar1 + 0x2c68) = *(undefined4 *)(lVar1 + 0x2c38);
  return;
}

