/*
 * FUN_10051266 at 10051266
 * uint __stdcall FUN_10051266(uint * param_1, uint * param_2)
 * Address ranges: 10051266-100512e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10051266(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  
  uVar1 = *param_1;
  if ((((uVar1 == *param_2) && (uVar1 = param_1[2], uVar1 == param_2[2])) &&
      (uVar1 = param_1[3], uVar1 == param_2[3])) &&
     (((uVar1 = param_1[4], uVar1 == param_2[4] && (uVar1 = param_1[5], uVar1 == param_2[5])) &&
      (uVar1 = param_1[6], uVar1 == param_2[6])))) {
    uVar2 = (undefined2)(uVar1 >> 0x10);
    uVar1 = CONCAT22(uVar2,(short)param_1[7]);
    if ((((short)param_1[7] == (short)param_2[7]) &&
        (uVar1 = CONCAT22(uVar2,*(short *)((int)param_1 + 0x1e)),
        *(short *)((int)param_1 + 0x1e) == *(short *)((int)param_2 + 0x1e))) &&
       (((uVar1 = param_1[8], uVar1 == param_2[8] &&
         (((uVar1 = param_1[9], uVar1 == param_2[9] && (uVar1 = param_1[10], uVar1 == param_2[10]))
          && (uVar1 = param_1[0xb], uVar1 == param_2[0xb])))) &&
        (uVar1 = param_1[0xc], uVar1 == param_2[0xc])))) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}

