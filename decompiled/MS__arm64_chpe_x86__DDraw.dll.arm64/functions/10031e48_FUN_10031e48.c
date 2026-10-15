/*
 * FUN_10031e48 at 10031e48
 * undefined FUN_10031e48(void)
 * Address ranges: 10031e48-10031edb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10031e48(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                  int *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_3;
  if (param_1 <= param_3) {
    iVar2 = (int)param_1;
  }
  iVar1 = (int)param_4;
  if (param_2 <= param_4) {
    iVar1 = (int)param_2;
  }
  *param_6 = iVar2;
  param_6[1] = iVar1;
  iVar2 = (int)param_1;
  if (param_1 <= param_3) {
    iVar2 = (int)param_3;
  }
  param_6[2] = iVar2;
  iVar2 = (int)param_2;
  if (param_2 <= param_4) {
    iVar2 = (int)param_4;
  }
  param_6[3] = iVar2;
  (*(code *)PTR_FUN_100ba240)(param_6,2,2);
  return param_6;
}

