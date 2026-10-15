/*
 * FUN_10024895 at 10024895
 * undefined4 * __fastcall FUN_10024895(int param_1, uint param_2, undefined4 * param_3, uint param_4, undefined4 * param_5, uint param_6)
 * Address ranges: 10024895-1002498d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_10024895(int param_1,uint param_2,undefined4 *param_3,uint param_4,undefined4 *param_5,
            uint param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((param_4 == param_2) && (param_4 == param_6)) {
    FUN_1005ca00(param_5,param_3,param_1 * param_2);
    param_5 = (undefined4 *)((int)param_5 + param_1 * param_2);
  }
  else if (param_1 != 0) {
    if (param_2 == 4) {
      do {
        uVar2 = *param_3;
        param_3 = (undefined4 *)((int)param_3 + param_4);
        *param_5 = uVar2;
        param_5 = (undefined4 *)((int)param_5 + param_6);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    else if (param_2 == 8) {
      do {
        *param_5 = *param_3;
        puVar1 = param_3 + 1;
        param_3 = (undefined4 *)((int)param_3 + param_4);
        param_5[1] = *puVar1;
        param_5 = (undefined4 *)((int)param_5 + param_6);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    else if (param_2 == 0xc) {
      do {
        *param_5 = *param_3;
        param_5[1] = param_3[1];
        puVar1 = param_3 + 2;
        param_3 = (undefined4 *)((int)param_3 + param_4);
        param_5[2] = *puVar1;
        param_5 = (undefined4 *)((int)param_5 + param_6);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    else if (param_2 == 0x10) {
      do {
        uVar2 = *param_3;
        uVar3 = param_3[1];
        uVar4 = param_3[2];
        uVar5 = param_3[3];
        param_3 = (undefined4 *)((int)param_3 + param_4);
        *param_5 = uVar2;
        param_5[1] = uVar3;
        param_5[2] = uVar4;
        param_5[3] = uVar5;
        param_5 = (undefined4 *)((int)param_5 + param_6);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    else {
      do {
        FUN_1005ca00(param_5,param_3,param_2);
        param_3 = (undefined4 *)((int)param_3 + param_4);
        param_5 = (undefined4 *)((int)param_5 + param_6);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  return param_5;
}

