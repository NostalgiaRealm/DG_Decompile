/*
 * FUN_10046b60 at 10046b60
 * undefined FUN_10046b60(void)
 * Address ranges: 10046b60-10046d53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_10046b60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
            undefined8 *param_5,int param_6,int param_7,undefined1 param_8,undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined8 uVar8;
  undefined8 uVar9;
  int local_70;
  int local_6c;
  int local_68;
  int *local_64;
  undefined1 *local_60;
  undefined1 auStack_58 [24];
  
  uVar8 = *param_2;
  local_64 = (int *)((int)param_1 + 0x3c);
  puVar1 = param_1 + 2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  uVar8 = *param_3;
  puVar2 = param_1 + 4;
  param_1[3] = param_3[1];
  *puVar1 = uVar8;
  uVar9 = param_5[1];
  uVar8 = *param_5;
  piVar3 = (int *)(param_1 + 6);
  *(undefined1 *)(param_1 + 8) = param_8;
  piVar4 = (int *)(param_1 + 7);
  piVar3[0] = 0;
  piVar3[1] = 0;
  piVar4[0] = 0;
  piVar4[1] = 0;
  param_1[5] = uVar9;
  *puVar2 = uVar8;
  *(undefined1 *)((int)param_1 + 0x41) = param_9;
  local_60 = (undefined1 *)((int)param_1 + 0x42);
  *local_60 = 0;
  if (param_4 != 0) {
    local_6c = -param_7;
    local_70 = 0;
    local_68 = -param_6;
    (*(code *)PTR_FUN_100ba26c)(puVar1,local_68,local_6c);
    (*(code *)PTR_FUN_100ba26c)(puVar2,local_68,local_6c);
    *piVar4 = param_6;
    *local_64 = param_7;
    pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar6 = (*extraout_w11)(param_4,puVar1,*piVar3,&local_70);
    if ((iVar6 == 0) && (local_70 != 0)) {
      puVar7 = (undefined4 *)FUN_100914b0(local_70);
      *piVar3 = (int)puVar7;
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0x20;
        *(undefined4 *)(*piVar3 + 4) = 1;
        *(uint *)(*piVar3 + 8) = local_70 - 0x20U >> 4;
        (*pcVar5)();
        iVar6 = (*extraout_w11_00)(param_4,puVar1,*piVar3,&local_70);
        if (iVar6 == 0) {
          iVar6 = (*(code *)PTR_FUN_100ba244)(auStack_58,puVar2,*piVar3 + 0x10);
          *local_60 = iVar6 == 0;
        }
        else {
          FUN_100914d0(*piVar3);
          *piVar3 = 0;
        }
      }
    }
  }
  return param_1;
}

