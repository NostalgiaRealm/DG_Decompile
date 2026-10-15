/*
 * FUN_1001a9d0 at 1001a9d0
 * undefined FUN_1001a9d0(void)
 * Address ranges: 1001a9d0-1001af27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001a9d0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 extraout_x1;
  undefined8 uVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uStack_54;
  
  *(undefined4 *)(param_1 + 8) = param_3;
  uVar8 = DAT_100c2954;
  *(undefined4 *)(param_1 + 4) = param_2;
  iVar7 = FUN_1006c848(uVar8,&PTR_s_DGD3D12ROOT_100bb170,0);
  piVar2 = (int *)(param_1 + 0xcf00);
  *piVar2 = iVar7;
  if (iVar7 != 0) {
    *(int *)(param_1 + 0x10) = iVar7;
    *(undefined4 *)(param_1 + 8) = param_3;
    *(undefined4 *)(param_1 + 4) = param_2;
    FUN_10030668(param_1,param_4);
    FUN_1006e8d0(*piVar2,extraout_x1,param_1);
    if ((*param_2 == 5) || (uVar11 = 0xc000, *param_2 != 6)) {
      uVar11 = 0xb000;
    }
    piVar1 = (int *)(param_1 + 0x14);
    uVar10 = FUN_10079d50(*piVar2,*piVar1,uVar11);
    if ((uVar10 & 1) != 0) {
      *(int *)(param_1 + 0x18) = *piVar2 + *piVar1 * 0x28 + 0x18;
      *(int *)(param_1 + 0xcf04) = *piVar2 + *piVar1 * 0x16c0 + 0x6c0;
      uVar10 = FUN_100726c0(uVar10,DAT_100c2954,1,&DAT_100bb534,param_1 + 0xd024);
      if ((uVar10 & 1) != 0) {
        uVar10 = FUN_100726c0(uVar10,DAT_100c2954,0x28,&DAT_100bb480,param_1 + 0xcf84);
        pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
        if ((uVar10 & 1) != 0) {
          if ((DAT_100c2a88 & 1) == 0) {
            DAT_100c2a88 = DAT_100c2a88 | 1;
            lRam100c2878 = (ulonglong)uStack_54 << 0x20;
            _DAT_100c2870 = 2;
            lRam100c288c = (ulonglong)uStack_54 << 0x20;
            DAT_100c2880 = 0;
            _DAT_100c2884 = 3;
            DAT_100c2894 = 5;
            lRam100c28a0 = (ulonglong)uStack_54 << 0x20;
            _DAT_100c2898 = 0x100000003;
            DAT_100c28a8 = 5;
            lRam100c28b4 = (ulonglong)uStack_54 << 0x20;
            _DAT_100c28ac = 0x200000003;
            DAT_100c28bc = 5;
            lRam100c28c8 = (ulonglong)uStack_54 << 0x20;
            _DAT_100c28c0 = 0x300000003;
            DAT_100c28d0 = 5;
            lRam100c28dc = (ulonglong)uStack_54 << 0x20;
            _DAT_100c28d4 = 0x400000003;
            DAT_100c28e4 = 5;
            uRam100c28f0 = CONCAT44(uStack_54,&DAT_100bb4d0);
            _DAT_100c28e8 = 0x100000000;
            DAT_100c28f8 = 5;
            DAT_100c28fc = 0x100000001;
            DAT_100c2904 = 0x200000000;
            DAT_100c290c = 5;
          }
          uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          uVar10 = (*extraout_w11)(uVar8,*piVar1,1,&DAT_100bb520,0);
          *(int *)(param_1 + 0xcf0c) = (int)uVar10;
          if ((int)uVar10 != 0) {
            *(undefined4 *)(param_1 + 0xcf2c) = 0xffffffff;
            *(undefined8 *)(param_1 + 0xcf3c) = 0x300000000;
            *(undefined8 *)(param_1 + 0xcf74) = 1;
            puVar9 = (undefined4 *)FUN_100913c0(8);
            *(undefined4 **)(param_1 + 0xd028) = puVar9;
            if (puVar9 != (undefined4 *)0x0) {
              *puVar9 = &PTR_s_POSITION_100bb4e8;
              *(undefined4 *)(*(int *)(param_1 + 0xd028) + 4) = 2;
              iVar7 = FUN_10072ae8(*piVar2 + 0x520,*piVar1,0x40000,0,1);
              *(int *)(param_1 + 53000) = iVar7;
              if (iVar7 != 0) {
                cVar6 = FUN_10030c20(param_1);
                if (cVar6 == '\0') {
                  FUN_10091460(*(undefined4 *)(param_1 + 53000),4);
                  *(undefined4 *)(param_1 + 53000) = 0;
                }
                else {
                  FUN_1007d820(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x130c),
                               *(undefined4 *)(param_1 + 53000),0,1,0);
                  FUN_1007cfb0(*(int *)(*(int *)(param_1 + 0xcf04) + 0x130c) + 4,0);
                  iVar7 = 0;
                  if (*piVar2 != 0) {
                    iVar7 = *piVar2 + 0x520;
                  }
                  iVar7 = FUN_10077278(iVar7,*piVar1,*(int *)(param_1 + 0xcf04) + 0x1310,0xc0,0);
                  *(int *)(param_1 + 0xcf80) = iVar7;
                  if (iVar7 != 0) {
                    iVar4 = *piVar2;
                    iVar7 = 0;
                    if (iVar4 != 0) {
                      iVar7 = iVar4 + 0x508;
                    }
                    iVar3 = 0;
                    if (iVar4 != 0) {
                      iVar3 = iVar4 + 0x520;
                    }
                    iVar7 = FUN_10077278(iVar3,*piVar1,*(int *)(param_1 + 0xcf04) + 0x1370,0x4000,
                                         iVar7);
                    *(int *)(param_1 + 0xcf7c) = iVar7;
                    if (iVar7 != 0) {
                      FUN_10030e10(param_1);
                      uVar8 = *(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x15d8);
                      *(int *)(param_1 + 0xd070) = *piVar2;
                      *(int *)(param_1 + 0xd074) = *piVar1;
                      *(int *)(param_1 + 0xd03c) = *piVar2;
                      *(int *)(param_1 + 0xd040) = *piVar1;
                      *(undefined4 *)(param_1 + 0xd078) = uVar8;
                      *(undefined4 *)(param_1 + 0xd05c) = 0;
                      uVar8 = (*(code *)PTR_FUN_100ba070)(0,0,0,0);
                      iVar7 = *piVar2;
                      *(undefined4 *)(param_1 + 0xd060) = uVar8;
                      iVar4 = *piVar1;
                      uVar10 = FUN_100717f8(FUN_10071ad0);
                      if ((uVar10 & 1) == 0) {
                        *(undefined8 *)(iVar7 + iVar4 * 0x28 + 0x38) = 0;
                      }
                      (*(code *)PTR_FUN_100ba0f0)(*piVar2 + 0x4a0);
                      return 1;
                    }
                    iVar7 = *(int *)(param_1 + 0xcf80);
                    if (iVar7 != 0) {
                      FUN_100770d0(iVar7);
                      FUN_10091460(iVar7,0x78);
                    }
                    *(undefined4 *)(param_1 + 0xcf80) = 0;
                  }
                }
              }
              FUN_10091460(*(undefined4 *)(param_1 + 53000),4);
              *(undefined4 *)(param_1 + 53000) = 0;
            }
            uVar8 = (*pcVar5)();
            uVar10 = (*extraout_w11_00)(uVar8);
            *(undefined4 *)(param_1 + 0xcf0c) = 0;
          }
        }
        uVar11 = FUN_100727e8(uVar10,1,param_1 + 0xd024);
        FUN_100727e8(uVar11,0x28,param_1 + 0xcf84);
      }
      FUN_1007b288(*piVar2,*piVar1);
    }
    (*(code *)PTR_FUN_100ba0f0)(*piVar2 + 0x4a0);
  }
  *(int *)(param_1 + 0x10) = 0;
  FUN_1006c900(*(undefined4 *)(param_1 + 0xcf00));
  *piVar2 = 0;
  return 0;
}

