/*
 * FUN_10014ae6 at 10014ae6
 * undefined4 __stdcall FUN_10014ae6(uint param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 10014ae6-10014b18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10014ae6(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = FUN_10014ab8(param_2);
  if ((((uVar1 < 9) && (uVar1 = FUN_10014ab8(param_1), uVar1 < 9)) && (param_4 < 0x10)) &&
     (param_3 < 7)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

