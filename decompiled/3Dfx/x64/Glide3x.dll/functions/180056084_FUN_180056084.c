/*
 * FUN_180056084 at 180056084
 * longlong __fastcall FUN_180056084(undefined8 param_1, uint * param_2, uint * param_3)
 * Address ranges: 180056084-1800560e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180056084(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*param_3;
  if ((((((*param_2 == *param_3) && (uVar2 = (ulonglong)param_3[1], param_2[1] == param_3[1])) &&
        (uVar2 = (ulonglong)param_3[2], param_2[2] == param_3[2])) &&
       ((uVar2 = (ulonglong)param_3[3], param_2[3] == param_3[3] &&
        (uVar2 = (ulonglong)param_3[4], param_2[4] == param_3[4])))) &&
      ((uVar2 = (ulonglong)param_3[5], param_2[5] == param_3[5] &&
       ((uVar2 = (ulonglong)param_3[6], param_2[6] == param_3[6] &&
        (uVar2 = (ulonglong)param_3[7], param_2[7] == param_3[7])))))) &&
     (uVar2 = (ulonglong)param_3[8], param_2[8] == param_3[8])) {
    uVar1 = param_3[9];
    uVar2 = (ulonglong)uVar1;
    if (param_2[9] == uVar1) {
      return (ulonglong)(uint3)(uVar1 >> 8) << 8;
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}

