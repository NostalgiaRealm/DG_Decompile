/*
 * FUN_18004ddfc at 18004ddfc
 * undefined8 * __fastcall FUN_18004ddfc(int param_1, uint param_2, undefined8 * param_3, uint param_4, undefined8 * param_5, uint param_6)
 * Address ranges: 18004ddfc-18004def2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18004ddfc(int param_1,uint param_2,undefined8 *param_3,uint param_4,undefined8 *param_5,
             uint param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((param_4 == param_2) && (param_4 == param_6)) {
    FUN_1800fbec0(param_5,param_3,(ulonglong)(param_1 * param_2));
    param_5 = (undefined8 *)((longlong)param_5 + (ulonglong)(param_1 * param_2));
  }
  else if (param_1 != 0) {
    uVar7 = (ulonglong)param_6;
    uVar6 = (ulonglong)param_4;
    if (param_2 == 4) {
      do {
        uVar3 = *(undefined4 *)param_3;
        param_3 = (undefined8 *)((longlong)param_3 + uVar6);
        *(undefined4 *)param_5 = uVar3;
        param_5 = (undefined8 *)((longlong)param_5 + uVar7);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    else if (param_2 == 8) {
      do {
        *(undefined4 *)param_5 = *(undefined4 *)param_3;
        puVar2 = (undefined4 *)((longlong)param_3 + 4);
        param_3 = (undefined8 *)((longlong)param_3 + uVar6);
        *(undefined4 *)((longlong)param_5 + 4) = *puVar2;
        param_5 = (undefined8 *)((longlong)param_5 + uVar7);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    else if (param_2 == 0xc) {
      do {
        *(undefined4 *)param_5 = *(undefined4 *)param_3;
        *(undefined4 *)((longlong)param_5 + 4) = *(undefined4 *)((longlong)param_3 + 4);
        puVar1 = param_3 + 1;
        param_3 = (undefined8 *)((longlong)param_3 + uVar6);
        *(undefined4 *)(param_5 + 1) = *(undefined4 *)puVar1;
        param_5 = (undefined8 *)((longlong)param_5 + uVar7);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    else if (param_2 == 0x10) {
      do {
        uVar4 = *param_3;
        uVar5 = param_3[1];
        param_3 = (undefined8 *)((longlong)param_3 + uVar6);
        *param_5 = uVar4;
        param_5[1] = uVar5;
        param_5 = (undefined8 *)((longlong)param_5 + uVar7);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    else {
      do {
        FUN_1800fbec0(param_5,param_3,(ulonglong)param_2);
        param_3 = (undefined8 *)((longlong)param_3 + uVar6);
        param_5 = (undefined8 *)((longlong)param_5 + uVar7);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  return param_5;
}

