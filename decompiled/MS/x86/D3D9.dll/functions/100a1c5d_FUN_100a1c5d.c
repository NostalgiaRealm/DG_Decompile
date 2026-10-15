/*
 * FUN_100a1c5d at 100a1c5d
 * uint __fastcall FUN_100a1c5d(uint * param_1, uint * param_2)
 * Address ranges: 100a1c5d-100a1c88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100a1c5d(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((((uVar1 <= *param_2) && (uVar1 = param_1[1], uVar1 <= param_2[1])) &&
      (uVar1 = param_1[2], uVar1 <= param_2[2])) &&
     ((uVar1 = param_1[3], uVar1 <= param_2[3] && (uVar1 = param_1[4], uVar1 <= param_2[4])))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

