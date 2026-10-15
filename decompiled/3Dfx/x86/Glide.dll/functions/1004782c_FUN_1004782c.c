/*
 * FUN_1004782c at 1004782c
 * uint __stdcall FUN_1004782c(uint * param_1, uint * param_2)
 * Address ranges: 1004782c-100478a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1004782c(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
       (uVar1 = param_1[2], uVar1 == param_2[2])) &&
      (((uVar1 = param_1[3], uVar1 == param_2[3] && (uVar1 = param_1[5], uVar1 == param_2[5])) &&
       ((uVar1 = param_1[6], uVar1 == param_2[6] &&
        ((uVar1 = param_1[4], uVar1 == param_2[4] && (uVar1 = param_1[7], uVar1 == param_2[7])))))))
      ) && ((uVar1 = param_1[8], uVar1 == param_2[8] &&
            ((((uVar1 = param_1[9], uVar1 == param_2[9] &&
               (uVar1 = param_1[10], uVar1 == param_2[10])) &&
              (uVar1 = param_1[0xc], uVar1 == param_2[0xc])) &&
             (uVar1 = param_1[0xb], uVar1 == param_2[0xb])))))) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1;
}

