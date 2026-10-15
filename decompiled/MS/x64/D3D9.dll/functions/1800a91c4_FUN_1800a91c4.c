/*
 * FUN_1800a91c4 at 1800a91c4
 * undefined1 __fastcall FUN_1800a91c4(uint param_1)
 * Address ranges: 1800a91c4-1800a9210
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800a91c4(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xf;
  if ((((uVar1 != 0) && (uVar1 != 1)) && (uVar1 != 2)) && ((uVar1 != 3 && (uVar1 != 4)))) {
    if (uVar1 != 5) {
      return 1;
    }
    if (((param_1 & 0xc00) == 0) && (((byte)(param_1 >> 7) & 1) == ((byte)(param_1 >> 8) & 1))) {
      return 1;
    }
  }
  return 0;
}

