/*
 * FUN_180092b58 at 180092b58
 * undefined FUN_180092b58(void)
 * Address ranges: 180092b58-180092c07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180092b58(undefined8 param_1,longlong param_2,uint param_3,int *param_4,longlong param_5,
                  uint param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_5 != 0) {
    iVar3 = param_4[1];
    param_5 = (ulonglong)(uint)(*param_4 * param_7) + (ulonglong)(iVar3 * param_6) + param_5;
    uVar2 = (param_4[2] - *param_4) * param_7;
    if (param_3 == param_6 && uVar2 == param_3) {
      thunk_FUN_180001218(param_5,param_2,(param_4[3] - iVar3) * param_3);
    }
    else {
      iVar1 = param_4[3];
      for (; iVar3 < iVar1; iVar3 = iVar3 + 1) {
        thunk_FUN_180001218(param_5,param_2,uVar2);
        param_2 = param_2 + (ulonglong)param_3;
        param_5 = param_5 + (ulonglong)param_6;
      }
    }
  }
  return;
}

