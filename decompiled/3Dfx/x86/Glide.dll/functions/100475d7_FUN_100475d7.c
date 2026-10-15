/*
 * FUN_100475d7 at 100475d7
 * uint __stdcall FUN_100475d7(uint * param_1, uint * param_2)
 * Address ranges: 100475d7-10047637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100475d7(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) &&
       ((uVar1 = param_1[3], uVar1 == param_2[3] && (uVar1 = param_1[4], uVar1 == param_2[4])))) &&
      ((uVar1 = param_1[5], uVar1 == param_2[5] &&
       ((uVar1 = param_1[6], uVar1 == param_2[6] && (uVar1 = param_1[7], uVar1 == param_2[7]))))))
     && ((uVar1 = param_1[8], uVar1 == param_2[8] && (uVar1 = param_1[9], uVar1 == param_2[9])))) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1;
}

