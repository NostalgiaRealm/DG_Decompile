/*
 * FUN_180044018 at 180044018
 * undefined FUN_180044018(void)
 * Address ranges: 180044018-180044167
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180044018(int param_1,uint param_2,undefined8 *param_3,uint param_4,undefined8 *param_5,
             uint param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (param_4 == param_2 && param_4 == param_6) {
    thunk_FUN_180001218(param_5,param_3,(ulonglong)(param_1 * param_2));
    param_5 = (undefined8 *)((longlong)param_5 + (ulonglong)(param_1 * param_2));
  }
  else if (param_2 == 4) {
    for (; param_1 != 0; param_1 = param_1 + -1) {
      uVar2 = *(undefined4 *)param_3;
      param_3 = (undefined8 *)((longlong)param_3 + (ulonglong)param_4);
      *(undefined4 *)param_5 = uVar2;
      param_5 = (undefined8 *)((longlong)param_5 + (ulonglong)param_6);
    }
  }
  else if (param_2 == 8) {
    for (; param_1 != 0; param_1 = param_1 + -1) {
      *(undefined4 *)param_5 = *(undefined4 *)param_3;
      puVar1 = (undefined4 *)((longlong)param_3 + 4);
      param_3 = (undefined8 *)((longlong)param_3 + (ulonglong)param_4);
      *(undefined4 *)((longlong)param_5 + 4) = *puVar1;
      param_5 = (undefined8 *)((longlong)param_5 + (ulonglong)param_6);
    }
  }
  else if (param_2 == 0xc) {
    for (; param_1 != 0; param_1 = param_1 + -1) {
      *(undefined4 *)param_5 = *(undefined4 *)param_3;
      *(undefined4 *)((longlong)param_5 + 4) = *(undefined4 *)((longlong)param_3 + 4);
      puVar3 = param_3 + 1;
      param_3 = (undefined8 *)((longlong)param_3 + (ulonglong)param_4);
      *(undefined4 *)(param_5 + 1) = *(undefined4 *)puVar3;
      param_5 = (undefined8 *)((longlong)param_5 + (ulonglong)param_6);
    }
  }
  else if (param_1 != 0) {
    if (param_2 == 0x10) {
      do {
        puVar3 = param_3 + 1;
        uVar4 = *param_3;
        param_1 = param_1 + -1;
        param_3 = (undefined8 *)((longlong)param_3 + (ulonglong)param_4);
        param_5[1] = *puVar3;
        *param_5 = uVar4;
        param_5 = (undefined8 *)((longlong)param_5 + (ulonglong)param_6);
      } while (param_1 != 0);
    }
    else {
      do {
        thunk_FUN_180001218(param_5,param_3,param_2);
        param_3 = (undefined8 *)((longlong)param_3 + (ulonglong)param_4);
        param_1 = param_1 + -1;
        param_5 = (undefined8 *)((longlong)param_5 + (ulonglong)param_6);
      } while (param_1 != 0);
    }
  }
  return param_5;
}

