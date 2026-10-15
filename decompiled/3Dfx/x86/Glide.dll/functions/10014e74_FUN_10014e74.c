/*
 * FUN_10014e74 at 10014e74
 * undefined4 __stdcall FUN_10014e74(uint param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 10014e74-10014ea6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10014e74(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = FUN_10014e46(param_2);
  if ((((uVar1 < 9) && (uVar1 = FUN_10014e46(param_1), uVar1 < 9)) && (param_4 < 0x10)) &&
     (param_3 < 7)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

