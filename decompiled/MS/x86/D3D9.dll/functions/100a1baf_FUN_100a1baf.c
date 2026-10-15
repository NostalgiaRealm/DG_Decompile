/*
 * FUN_100a1baf at 100a1baf
 * undefined4 __fastcall FUN_100a1baf(uint param_1)
 * Address ranges: 100a1baf-100a1bd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100a1baf(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xff0000;
  if ((((uVar1 != 0) && (uVar1 != 0x550000)) && (uVar1 != 0xaa0000)) && (uVar1 != 0xff0000)) {
    return 0xff0000;
  }
  return 0xff0001;
}

