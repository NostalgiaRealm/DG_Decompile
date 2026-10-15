/*
 * FUN_1000e360 at 1000e360
 * undefined FUN_1000e360(void)
 * Address ranges: 1000e360-1000e74f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000e360(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 extraout_x1;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  undefined1 auVar10 [16];
  int local_80 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar8 = DAT_100c2954;
  piVar1 = (int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = param_3;
  *piVar1 = param_2;
  iVar7 = FUN_1006c848(uVar8,&PTR_s_DGD3D11ROOT_100bb160,0);
  *(int *)(param_1 + 0xcf00) = iVar7;
  if (iVar7 != 0) {
    *piVar1 = param_2;
    *(int *)(param_1 + 0x10) = iVar7;
    *(undefined4 *)(param_1 + 8) = param_3;
    FUN_10030668(param_1,param_4);
    FUN_1006e8d0(*(undefined4 *)(param_1 + 0xcf00),extraout_x1,param_1);
    auVar10 = FUN_100674f0(param_2);
    piVar2 = (int *)(param_1 + 0x14);
    uVar9 = FUN_10070a50(*(undefined4 *)(param_1 + 0xcf00),*piVar2,auVar10._0_8_ & 0xffffffff,
                         auVar10._8_8_ & 0xffffffff,auVar10._0_8_ >> 0x20,
                         auVar10._8_8_ >> 0x20 & 0xff);
    uVar8 = DAT_100c2954;
    if ((uVar9 & 1) != 0) {
      iVar7 = *piVar2;
      iVar3 = *(int *)(param_1 + 0xcf00);
      *(int *)(param_1 + 0x18) = iVar3 + iVar7 * 0x28 + 0x18;
      *(int *)(param_1 + 0xcf04) = iVar3 + iVar7 * 0x1510 + 0x510;
      uVar9 = FUN_1006a330(iVar3,iVar7,uVar8,0x28,&DAT_100bb3f0,param_1 + 53000);
      if ((uVar9 & 1) != 0) {
        local_80[0] = param_1 + 0xcfac;
        auVar10 = FUN_1006a4f0(*(undefined4 *)(param_1 + 0xcf00),*piVar2,DAT_100c2954,1,
                               &DAT_100bb3e0,&DAT_100bb3d8,param_1 + 0xcfa8,local_80[0]);
        pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
        if ((auVar10._0_8_ & 1) != 0) {
          local_78 = 0xd0;
          uStack_70 = 4;
          local_68 = 0xd000000000;
          uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          auVar10 = (*extraout_w11)(uVar8,&local_78,0);
          if (-1 < auVar10._0_4_) {
            local_60 = 0x4000;
            uStack_58 = 1;
            local_50 = 0x4000000000;
            uVar8 = (*pcVar6)();
            iVar7 = (*extraout_w11_00)(uVar8,&local_60,0);
            if (-1 < iVar7) {
              uVar9 = FUN_10030c20(param_1);
              if ((uVar9 & 1) != 0) {
                FUN_10030e10(param_1);
                local_80[0] = 0;
                uVar8 = (*pcVar6)();
                (*extraout_w11_03)(uVar8,0x1e,local_80);
                iVar4 = *piVar2;
                iVar7 = *(int *)(param_1 + 0xcf00);
                iVar3 = *(int *)(param_1 + 0xcf04);
                *(int *)(param_1 + 0xd1f0) = iVar7;
                *(int *)(param_1 + 0xd1f4) = iVar4;
                *(int *)(param_1 + 0xd1f8) = iVar7 + iVar4 * 0x1510 + 0x510;
                *(int *)(param_1 + 0xcfc0) = iVar7;
                *(int *)(param_1 + 0xcfc4) = iVar4;
                cVar5 = *(char *)(*piVar1 + 0x1f8);
                *(int *)(param_1 + 0xcfd4) = iVar3;
                *(undefined1 *)(param_1 + 0xcfd8) = 0;
                if (((cVar5 == '\0') && (*(int *)(iVar3 + 0x14) == 0x1002)) &&
                   (iVar3 = *(int *)(iVar3 + 0x18),
                   (((iVar3 == 0x15dd || iVar3 == 0x15d8) || iVar3 == 0x1636) || iVar3 == 0x67df) ||
                   iVar3 == 0x1638)) {
                  *(undefined1 *)(param_1 + 0xcfd8) = 1;
                }
                uVar9 = FUN_100717f8(FUN_10071ad0);
                if ((uVar9 & 1) == 0) {
                  *(undefined8 *)(iVar7 + iVar4 * 0x28 + 0x38) = 0;
                }
                (*(code *)PTR_FUN_100ba0f0)(*(int *)(param_1 + 0xcf00) + 0x4a0);
                return 1;
              }
              FUN_1000b930(param_1);
              uVar8 = (*pcVar6)();
              (*extraout_w11_01)(uVar8);
              *(undefined4 *)(param_1 + 0xd1dc) = 0;
            }
            uVar8 = (*pcVar6)();
            auVar10 = (*extraout_w11_02)(uVar8);
            *(undefined4 *)(param_1 + 0xd1e0) = 0;
          }
          auVar10 = FUN_1006a688(auVar10._0_8_,auVar10._8_8_,1,param_1 + 0xcfa8,local_80[0]);
        }
        FUN_1006a470(auVar10._0_8_,auVar10._8_8_,0x28,param_1 + 53000);
      }
      FUN_10071158(*(undefined4 *)(param_1 + 0xcf00),*piVar2);
    }
    (*(code *)PTR_FUN_100ba0f0)(*(int *)(param_1 + 0xcf00) + 0x4a0);
    *(int *)(param_1 + 0x10) = 0;
    FUN_1006c900(*(undefined4 *)(param_1 + 0xcf00));
    *(undefined4 *)(param_1 + 0xcf00) = 0;
  }
  return 0;
}

