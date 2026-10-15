/*
 * FUN_1001cf58 at 1001cf58
 * undefined FUN_1001cf58(void)
 * Address ranges: 1001cf58-1001d09f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1001cf58(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [48];
  
  iVar1 = param_2 + 0x1430;
  piVar2 = (int *)(param_2 + 0x1304);
  puVar3 = (undefined8 *)FUN_10072db8(*piVar2,auStack_70,iVar1,param_3,param_4);
  uVar7 = *puVar3;
  uVar6 = puVar3[3];
  uVar5 = puVar3[2];
  uVar4 = puVar3[4];
  *(undefined8 *)(param_5 + 2) = puVar3[1];
  *(undefined8 *)param_5 = uVar7;
  *(undefined8 *)(param_5 + 6) = uVar6;
  *(undefined8 *)(param_5 + 4) = uVar5;
  *(undefined8 *)(param_5 + 8) = uVar4;
  if (param_5[1] == 0) {
    FUN_100816d8(param_2 + 0x11c0);
    FUN_10076718(*(undefined4 *)(param_2 + 0x1300),*(undefined8 *)(*piVar2 + 0x940));
    puVar3 = (undefined8 *)FUN_10072db8(*piVar2,auStack_70,iVar1,param_3,param_4);
    uVar7 = *puVar3;
    uVar6 = puVar3[3];
    uVar5 = puVar3[2];
    uVar4 = puVar3[4];
    *(undefined8 *)(param_5 + 2) = puVar3[1];
    *(undefined8 *)param_5 = uVar7;
    *(undefined8 *)(param_5 + 6) = uVar6;
    *(undefined8 *)(param_5 + 4) = uVar5;
    *(undefined8 *)(param_5 + 8) = uVar4;
    if (param_5[1] == 0) {
      uVar4 = *(undefined8 *)(*piVar2 + 0x938);
      FUN_10071e00(*piVar2 + 4,0);
      FUN_10076718(*(undefined4 *)(param_2 + 0x1300),uVar4);
      puVar3 = (undefined8 *)FUN_10072db8(*piVar2,auStack_70,iVar1,param_3,param_4);
      uVar7 = *puVar3;
      uVar6 = puVar3[3];
      uVar5 = puVar3[2];
      uVar4 = puVar3[4];
      *(undefined8 *)(param_5 + 2) = puVar3[1];
      *(undefined8 *)param_5 = uVar7;
      *(undefined8 *)(param_5 + 6) = uVar6;
      *(undefined8 *)(param_5 + 4) = uVar5;
      *(undefined8 *)(param_5 + 8) = uVar4;
    }
  }
  return *param_5 != 0;
}

