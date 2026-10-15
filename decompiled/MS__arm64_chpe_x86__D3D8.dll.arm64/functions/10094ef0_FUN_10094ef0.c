/*
 * FUN_10094ef0 at 10094ef0
 * undefined FUN_10094ef0(void)
 * Address ranges: 10094ef0-1009547b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10094ef0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

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
  
  uVar10 = DAT_1013d010;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  iVar9 = FUN_100daef8(uVar10,&PTR_s_DGD3D12ROOT_10135170,0);
  piVar1 = (int *)(param_1 + 0x1cf00);
  *piVar1 = iVar9;
  if (iVar9 == 0) goto LAB_1009544c;
  *(int *)(param_1 + 0x10) = iVar9;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  FUN_100aa918(param_1,param_4);
  FUN_100dcf80(*piVar1,extraout_x1,param_1);
  if ((*param_2 == 5) || (uVar13 = 0xc000, *param_2 != 6)) {
    uVar13 = 0xb000;
  }
  piVar2 = (int *)(param_1 + 0x14);
  uVar12 = FUN_100f2c00(*piVar1,*piVar2,uVar13);
  uVar10 = DAT_1013d010;
  if ((uVar12 & 1) != 0) {
    *(int *)(param_1 + 0x18) = *piVar1 + *piVar2 * 0x28 + 0x18;
    piVar3 = (int *)(param_1 + 0x1cf04);
    *piVar3 = *piVar1 + *piVar2 * 0x16c0 + 0x6c0;
    uVar12 = FUN_100e6cd0(uVar12,uVar10,1,&DAT_10136c74,param_1 + 0x1d024);
    if ((uVar12 & 1) != 0) {
      uVar12 = FUN_100e6cd0(uVar12,DAT_1013d010,0x28,&DAT_10136bc0,param_1 + 0x1cf84);
      pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      if ((uVar12 & 1) != 0) {
        if ((DAT_1013d2a0 & 1) == 0) {
          DAT_1013d2a0 = DAT_1013d2a0 | 1;
          lRam1013cf38 = (ulonglong)uStack_54 << 0x20;
          _DAT_1013cf30 = 2;
          lRam1013cf4c = (ulonglong)uStack_54 << 0x20;
          DAT_1013cf40 = 0;
          _DAT_1013cf44 = 3;
          DAT_1013cf54 = 5;
          lRam1013cf60 = (ulonglong)uStack_54 << 0x20;
          _DAT_1013cf58 = 0x100000003;
          DAT_1013cf68 = 5;
          lRam1013cf74 = (ulonglong)uStack_54 << 0x20;
          _DAT_1013cf6c = 0x200000003;
          DAT_1013cf7c = 5;
          lRam1013cf88 = (ulonglong)uStack_54 << 0x20;
          _DAT_1013cf80 = 0x300000003;
          DAT_1013cf90 = 5;
          lRam1013cf9c = (ulonglong)uStack_54 << 0x20;
          _DAT_1013cf94 = 0x400000003;
          DAT_1013cfa4 = 5;
          uRam1013cfb0 = CONCAT44(uStack_54,&DAT_10136c10);
          _DAT_1013cfa8 = 0x100000000;
          DAT_1013cfb8 = 5;
          DAT_1013cfbc = 0x100000001;
          DAT_1013cfc4 = 0x200000000;
          DAT_1013cfcc = 5;
        }
        uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        uVar12 = (*extraout_w11)(uVar10,*piVar2,1,&DAT_10136c60,0);
        *(int *)(param_1 + 0x1cf0c) = (int)uVar12;
        if ((int)uVar12 != 0) {
          *(undefined4 *)(param_1 + 0x1cf2c) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x1cf3c) = 0x300000000;
          *(undefined8 *)(param_1 + 0x1cf74) = 1;
          puVar11 = (undefined4 *)FUN_100febf0(8);
          *(int *)(param_1 + 0x1d028) = (int)puVar11;
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = &PTR_s_POSITION_10136c28;
            *(undefined4 *)(*(int *)(param_1 + 0x1d028) + 4) = 2;
            iVar9 = FUN_100e0218(*piVar1 + 0x520,*piVar2,0x40000,0,1);
            piVar4 = (int *)(param_1 + 0x1cf08);
            *piVar4 = iVar9;
            if (iVar9 != 0) {
              cVar8 = FUN_100aaf18(param_1);
              if (cVar8 == '\0') {
                FUN_100fec90(*piVar4,4);
                piVar14 = piVar4;
              }
              else {
                FUN_100e1588(*(undefined4 *)(*piVar3 + 0x130c),*piVar4,0,1,0);
                FUN_100e1060(*(int *)(*piVar3 + 0x130c) + 4,0);
                iVar9 = 0;
                if (*piVar1 != 0) {
                  iVar9 = *piVar1 + 0x520;
                }
                iVar9 = FUN_100e92b8(iVar9,*piVar2,*piVar3 + 0x1310,0xc0,0);
                piVar14 = (int *)(param_1 + 0x1cf80);
                *piVar14 = iVar9;
                if (iVar9 == 0) goto LAB_100953c4;
                iVar6 = *piVar1;
                iVar9 = 0;
                if (iVar6 != 0) {
                  iVar9 = iVar6 + 0x508;
                }
                iVar5 = 0;
                if (iVar6 != 0) {
                  iVar5 = iVar6 + 0x520;
                }
                iVar9 = FUN_100e92b8(iVar5,*piVar2,*piVar3 + 0x1370,0x4000,iVar9);
                *(int *)(param_1 + 0x1cf7c) = iVar9;
                if (iVar9 != 0) {
                  FUN_100ab108(param_1);
                  *(int *)(param_1 + 0x1d03c) = *piVar1;
                  *(int *)(param_1 + 0x1d040) = *piVar2;
                  *(undefined4 *)(param_1 + 0x1d05c) = 0;
                  uVar10 = (*(code *)PTR_FUN_10134048)(0,0,0,0);
                  iVar9 = *piVar2;
                  iVar6 = *piVar1;
                  *(undefined4 *)(param_1 + 0x1d060) = uVar10;
                  uVar12 = FUN_100f00a0(FUN_100f0370);
                  if ((uVar12 & 1) == 0) {
                    *(undefined8 *)(iVar6 + iVar9 * 0x28 + 0x38) = 0;
                  }
                  (*(code *)PTR_FUN_101340bc)(*piVar1 + 0x4a0);
                  return 1;
                }
                if (*piVar14 != 0) {
                  FUN_10046cd0(*piVar14,1);
                }
              }
              *piVar14 = 0;
            }
LAB_100953c4:
            FUN_100fec90(*piVar4,4);
            *piVar4 = 0;
          }
          uVar10 = (*pcVar7)();
          uVar12 = (*extraout_w11_00)(uVar10);
          *(int *)(param_1 + 0x1cf0c) = 0;
        }
      }
      uVar13 = FUN_100e6df8(uVar12,1,param_1 + 0x1d024);
      FUN_100e6df8(uVar13,0x28,param_1 + 0x1cf84);
    }
    FUN_100f4148(*piVar1,*piVar2);
  }
  (*(code *)PTR_FUN_101340bc)(*piVar1 + 0x4a0);
LAB_1009544c:
  *(int *)(param_1 + 0x10) = 0;
  FUN_100dafb0(*(undefined4 *)(param_1 + 0x1cf00));
  *piVar1 = 0;
  return 0;
}

