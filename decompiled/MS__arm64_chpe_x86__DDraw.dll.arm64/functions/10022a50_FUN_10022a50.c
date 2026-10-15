/*
 * FUN_10022a50 at 10022a50
 * undefined FUN_10022a50(void)
 * Address ranges: 10022a50-10022b13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10022a50(undefined8 param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_5 != 0) {
    iVar1 = param_4[1];
    iVar3 = param_5 + iVar1 * param_6 + *param_4 * param_7;
    param_7 = (param_4[2] - *param_4) * param_7;
    if (param_3 == param_6 && param_7 == param_3) {
      FUN_100917a0(iVar3,param_2,(param_4[3] - iVar1) * param_3);
    }
    else {
      iVar2 = param_4[3];
      for (; iVar1 < iVar2; iVar1 = iVar1 + 1) {
        FUN_100917a0(iVar3,param_2,param_7);
        param_2 = param_2 + param_3;
        iVar3 = iVar3 + param_6;
      }
    }
  }
  return;
}

