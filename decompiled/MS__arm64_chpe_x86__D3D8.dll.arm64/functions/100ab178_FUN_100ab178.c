/*
 * FUN_100ab178 at 100ab178
 * undefined FUN_100ab178(void)
 * Address ranges: 100ab178-100ab4c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ab178(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  code *extraout_w11;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [4];
  int local_8c;
  int iStack_88;
  undefined4 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  int iStack_74;
  int local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  
  uVar7 = param_2[2] - *param_2;
  uVar8 = param_2[3] - param_2[1];
  if ((uVar7 != *(uint *)(param_1 + 0x90)) || (uVar8 != *(uint *)(param_1 + 0x94))) {
    *(uint *)(param_1 + 0x94) = uVar8;
    *(uint *)(param_1 + 0x90) = uVar7;
    if (uVar7 < 0x321 && uVar8 < 0x259) {
      piVar1 = &DAT_10138350;
      puVar2 = &DAT_10138358;
      puVar3 = &DAT_10138354;
      piVar4 = &DAT_1013835c;
      piVar5 = &DAT_10138360;
      iVar10 = DAT_10138350;
      uVar6 = DAT_1012baa8;
    }
    else {
      puVar2 = (undefined4 *)0x1013836c;
      piVar1 = &DAT_10138364;
      puVar3 = (undefined4 *)0x10138368;
      piVar4 = (int *)0x10138370;
      piVar5 = (int *)0x10138374;
      iVar10 = DAT_10138364;
      uVar6 = DAT_1012baaa;
    }
    if (((iVar10 == 0) &&
        (iVar10 = (*(code *)PTR_FUN_10134224)(DAT_1013d010,uVar6,0,0,0,0x2000), iVar10 != 0)) &&
       (iVar11 = (*(code *)PTR_FUN_10134024)(iVar10,0x18,auStack_90), iVar11 != 0)) {
      iVar11 = (*(code *)PTR_FUN_10134004)(0);
      if (iVar11 != 0) {
        iVar12 = (*(code *)PTR_FUN_10134004)(0);
        if (iVar12 != 0) {
          local_64 = 0;
          local_5c = 0;
          local_54 = 0;
          local_70 = iStack_88;
          local_6c = 0x200001;
          local_78 = 0x28;
          iStack_74 = local_8c;
          iVar13 = (*(code *)PTR_FUN_1013400c)(0,&local_78,0,auStack_98,0,0);
          *piVar1 = iVar13;
          if (iVar13 != 0) {
            uVar14 = (*(code *)PTR_FUN_10134034)(iVar11,iVar13);
            uVar15 = (*(code *)PTR_FUN_10134034)(iVar12,iVar10);
            (*(code *)__hybrid_CompilerIAT)(iVar11,0,0,local_8c,iStack_88,iVar12,0,0,0xcc0020);
            (*(code *)PTR_FUN_10134034)(iVar11,uVar14);
            (*(code *)PTR_FUN_10134034)(iVar12,uVar15);
          }
          (*(code *)PTR_FUN_10134014)(iVar12);
        }
        (*(code *)PTR_FUN_10134014)(iVar11);
      }
      if (*piVar1 != 0) {
        iVar10 = (*(code *)PTR_FUN_10134024)(*piVar1,0x18,auStack_90);
        if (iVar10 == 0) {
          (*(code *)PTR_FUN_10134018)(*piVar1);
          *piVar1 = 0;
        }
        else {
          *puVar3 = local_7c;
          *puVar2 = local_84;
          *piVar4 = local_8c;
          *piVar5 = iStack_88;
        }
      }
    }
    if (*piVar1 != 0) {
      piVar1 = (int *)(param_1 + 0x88);
      iVar10 = *piVar4;
      iVar11 = *piVar5;
      piVar4 = (int *)(param_1 + 0x8c);
      if ((*piVar1 != iVar10) || (*piVar4 != iVar11)) {
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        cVar9 = (*extraout_w11)(param_1,iVar10,iVar11,*puVar3,*puVar2);
        if (cVar9 == '\0') {
          *piVar4 = 0;
          *piVar1 = 0;
        }
        else {
          *piVar1 = iVar10;
          *piVar4 = iVar11;
        }
      }
    }
  }
  return;
}

