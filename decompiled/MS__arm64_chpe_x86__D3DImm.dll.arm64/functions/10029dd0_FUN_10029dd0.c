/*
 * FUN_10029dd0 at 10029dd0
 * undefined FUN_10029dd0(void)
 * Address ranges: 10029dd0-10029f5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_10029dd0(uint param_1,int param_2,undefined8 *param_3,int param_4,undefined8 *param_5,
            int param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  if (param_4 == param_2 && param_4 == param_6) {
    FUN_10081ee0(param_5,param_3,param_1 * param_2);
    param_5 = (undefined8 *)(param_1 * param_2 + (int)param_5);
  }
  else {
    switch(param_2) {
    case 4:
      uVar6 = 0;
      if (param_1 != 0) {
        do {
          uVar5 = *(undefined4 *)param_3;
          uVar6 = uVar6 + 1;
          param_3 = (undefined8 *)((int)param_3 + param_4);
          *(undefined4 *)param_5 = uVar5;
          param_5 = (undefined8 *)((int)param_5 + param_6);
        } while (uVar6 < param_1);
      }
      break;
    default:
      uVar6 = 0;
      if (param_1 != 0) {
        do {
          FUN_10081ee0(param_5,param_3,param_2);
          uVar6 = uVar6 + 1;
          param_3 = (undefined8 *)((int)param_3 + param_4);
          param_5 = (undefined8 *)((int)param_5 + param_6);
        } while (uVar6 < param_1);
      }
      break;
    case 8:
      uVar6 = 0;
      if (param_1 != 0) {
        do {
          puVar1 = (undefined4 *)((int)param_5 + 4);
          uVar6 = uVar6 + 1;
          *(undefined4 *)param_5 = *(undefined4 *)param_3;
          puVar2 = (undefined4 *)((int)param_3 + 4);
          param_3 = (undefined8 *)((int)param_3 + param_4);
          param_5 = (undefined8 *)((int)param_5 + param_6);
          *puVar1 = *puVar2;
        } while (uVar6 < param_1);
      }
      break;
    case 0xc:
      uVar6 = 0;
      if (param_1 != 0) {
        do {
          uVar6 = uVar6 + 1;
          *(undefined4 *)param_5 = *(undefined4 *)param_3;
          *(undefined4 *)((int)param_5 + 4) = *(undefined4 *)((int)param_3 + 4);
          puVar3 = param_3 + 1;
          puVar4 = param_5 + 1;
          param_3 = (undefined8 *)((int)param_3 + param_4);
          param_5 = (undefined8 *)((int)param_5 + param_6);
          *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
        } while (uVar6 < param_1);
      }
      break;
    case 0x10:
      uVar6 = 0;
      if (param_1 != 0) {
        do {
          puVar3 = param_3 + 1;
          uVar7 = *param_3;
          uVar6 = uVar6 + 1;
          param_3 = (undefined8 *)((int)param_3 + param_4);
          param_5[1] = *puVar3;
          *param_5 = uVar7;
          param_5 = (undefined8 *)((int)param_5 + param_6);
        } while (uVar6 < param_1);
      }
    }
  }
  return param_5;
}

