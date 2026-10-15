/*
 * FUN_18005af80 at 18005af80
 * undefined8 __fastcall FUN_18005af80(undefined8 param_1, int * param_2, int * param_3, int * param_4, int * param_5)
 * Address ranges: 18005af80-18005b008
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18005af80(undefined8 param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  uint uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  
  if ((((*param_4 == *param_2) && (in_RAX = (ulonglong)(uint)param_2[1], param_4[1] == param_2[1]))
      && (in_RAX = (ulonglong)(uint)param_2[2], param_4[2] == param_2[2])) &&
     (((in_RAX = (ulonglong)(uint)param_2[3], param_4[3] == param_2[3] &&
       (in_RAX = (ulonglong)(uint)*param_3, *param_5 == *param_3)) &&
      ((in_RAX = (ulonglong)(uint)param_3[1], param_5[1] == param_3[1] &&
       (in_RAX = (ulonglong)(uint)param_3[2], param_5[2] == param_3[2])))))) {
    uVar1 = param_3[3];
    in_RAX = (ulonglong)uVar1;
    if (param_5[3] == uVar1) {
      lVar2 = (ulonglong)(uint3)(uVar1 >> 8) << 8;
      goto LAB_18005afd3;
    }
  }
  lVar2 = CONCAT71((int7)(in_RAX >> 8),1);
LAB_18005afd3:
  *param_2 = *param_4;
  param_2[1] = param_4[1];
  param_2[2] = param_4[2];
  param_2[3] = param_4[3];
  *param_3 = *param_5;
  param_3[1] = param_5[1];
  param_3[2] = param_5[2];
  param_3[3] = param_5[3];
  return lVar2;
}

