/*
 * FUN_100b5010 at 100b5010
 * undefined FUN_100b5010(void)
 * Address ranges: 100b5010-100b559b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100b5010(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined8 extraout_x1;
  undefined8 uVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  int *piVar14;
  uint uStack_54;
  
  uVar10 = DAT_10175b50;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  iVar9 = FUN_1010d638(uVar10,&PTR_s_DGD3D12ROOT_1016d170,0);
  piVar1 = (int *)(param_1 + 0x1cf00);
  *piVar1 = iVar9;
  if (iVar9 == 0) goto LAB_100b556c;
  *(int *)(param_1 + 0x10) = iVar9;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  FUN_100cb0e8(param_1,param_4);
  FUN_1010f6c0(*piVar1,extraout_x1,param_1);
  if ((*param_2 == 5) || (uVar13 = 0xc000, *param_2 != 6)) {
    uVar13 = 0xb000;
  }
  piVar2 = (int *)(param_1 + 0x14);
  uVar12 = FUN_101261d0(*piVar1,*piVar2,uVar13);
  uVar10 = DAT_10175b50;
  if ((uVar12 & 1) != 0) {
    *(int *)(param_1 + 0x18) = *piVar1 + *piVar2 * 0x28 + 0x18;
    piVar3 = (int *)(param_1 + 0x1cf04);
    *piVar3 = *piVar1 + *piVar2 * 0x16c0 + 0x6c0;
    uVar12 = FUN_10119520(uVar12,uVar10,1,&DAT_1016efc4,param_1 + 0x1d024);
    if ((uVar12 & 1) != 0) {
      uVar12 = FUN_10119520(uVar12,DAT_10175b50,0x28,&DAT_1016ef10,param_1 + 0x1cf84);
      pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      if ((uVar12 & 1) != 0) {
        if ((DAT_10175c70 & 1) == 0) {
          DAT_10175c70 = DAT_10175c70 | 1;
          lRam10175a98 = (ulonglong)uStack_54 << 0x20;
          _DAT_10175a90 = 2;
          lRam10175aac = (ulonglong)uStack_54 << 0x20;
          DAT_10175aa0 = 0;
          _DAT_10175aa4 = 3;
          DAT_10175ab4 = 5;
          lRam10175ac0 = (ulonglong)uStack_54 << 0x20;
          _DAT_10175ab8 = 0x100000003;
          DAT_10175ac8 = 5;
          lRam10175ad4 = (ulonglong)uStack_54 << 0x20;
          _DAT_10175acc = 0x200000003;
          DAT_10175adc = 5;
          lRam10175ae8 = (ulonglong)uStack_54 << 0x20;
          _DAT_10175ae0 = 0x300000003;
          DAT_10175af0 = 5;
          lRam10175afc = (ulonglong)uStack_54 << 0x20;
          _DAT_10175af4 = 0x400000003;
          DAT_10175b04 = 5;
          uRam10175b10 = CONCAT44(uStack_54,&DAT_1016ef60);
          _DAT_10175b08 = 0x100000000;
          DAT_10175b18 = 5;
          DAT_10175b1c = 0x100000001;
          DAT_10175b24 = 0x200000000;
          DAT_10175b2c = 5;
        }
        uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        uVar12 = (*extraout_w11)(uVar10,*piVar2,1,&DAT_1016efb0,0);
        *(int *)(param_1 + 0x1cf0c) = (int)uVar12;
        if ((int)uVar12 != 0) {
          *(undefined4 *)(param_1 + 0x1cf2c) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x1cf3c) = 0x300000000;
          *(undefined8 *)(param_1 + 0x1cf74) = 1;
          puVar11 = (undefined4 *)FUN_101321c0(8);
          *(int *)(param_1 + 0x1d028) = (int)puVar11;
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = &PTR_s_POSITION_1016ef78;
            *(undefined4 *)(*(int *)(param_1 + 0x1d028) + 4) = 2;
            iVar9 = FUN_10112a68(*piVar1 + 0x520,*piVar2,0x40000,0,1);
            piVar4 = (int *)(param_1 + 0x1cf08);
            *piVar4 = iVar9;
            if (iVar9 != 0) {
              cVar8 = FUN_100cb6d8(param_1);
              if (cVar8 == '\0') {
                FUN_10132260(*piVar4,4);
                piVar14 = piVar4;
              }
              else {
                FUN_10113dd8(*(undefined4 *)(*piVar3 + 0x130c),*piVar4,0,1,0);
                FUN_101138b0(*(int *)(*piVar3 + 0x130c) + 4,0);
                iVar9 = 0;
                if (*piVar1 != 0) {
                  iVar9 = *piVar1 + 0x520;
                }
                iVar9 = FUN_1011bb08(iVar9,*piVar2,*piVar3 + 0x1310,0xc0,0);
                piVar14 = (int *)(param_1 + 0x1cf80);
                *piVar14 = iVar9;
                if (iVar9 == 0) goto LAB_100b54e4;
                iVar6 = *piVar1;
                iVar9 = 0;
                if (iVar6 != 0) {
                  iVar9 = iVar6 + 0x508;
                }
                iVar5 = 0;
                if (iVar6 != 0) {
                  iVar5 = iVar6 + 0x520;
                }
                iVar9 = FUN_1011bb08(iVar5,*piVar2,*piVar3 + 0x1370,0x4000,iVar9);
                *(int *)(param_1 + 0x1cf7c) = iVar9;
                if (iVar9 != 0) {
                  FUN_100cb8c8(param_1);
                  *(int *)(param_1 + 0x1d03c) = *piVar1;
                  *(int *)(param_1 + 0x1d040) = *piVar2;
                  *(undefined4 *)(param_1 + 0x1d05c) = 0;
                  uVar10 = (*(code *)PTR_FUN_1016c04c)(0,0,0,0);
                  iVar9 = *piVar2;
                  iVar6 = *piVar1;
                  *(undefined4 *)(param_1 + 0x1d060) = uVar10;
                  uVar12 = switchD_10123638::caseD_10123670(FUN_10123940);
                  if ((uVar12 & 1) == 0) {
                    *(undefined8 *)(iVar6 + iVar9 * 0x28 + 0x38) = 0;
                  }
                  (*(code *)PTR_FUN_1016c0c0)(*piVar1 + 0x4a0);
                  return 1;
                }
                if (*piVar14 != 0) {
                  FUN_100557b0(*piVar14,1);
                }
              }
              *piVar14 = 0;
            }
LAB_100b54e4:
            FUN_10132260(*piVar4,4);
            *piVar4 = 0;
          }
          uVar10 = (*pcVar7)();
          uVar12 = (*extraout_w11_00)(uVar10);
          *(int *)(param_1 + 0x1cf0c) = 0;
        }
      }
      uVar13 = FUN_10119648(uVar12,1,param_1 + 0x1d024);
      FUN_10119648(uVar13,0x28,param_1 + 0x1cf84);
    }
    FUN_10127718(*piVar1,*piVar2);
  }
  (*(code *)PTR_FUN_1016c0c0)(*piVar1 + 0x4a0);
LAB_100b556c:
  *(int *)(param_1 + 0x10) = 0;
  FUN_1010d6f0(*(undefined4 *)(param_1 + 0x1cf00));
  *piVar1 = 0;
  return 0;
}

