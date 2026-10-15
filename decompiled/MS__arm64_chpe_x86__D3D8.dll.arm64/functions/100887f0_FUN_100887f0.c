/*
 * FUN_100887f0 at 100887f0
 * undefined FUN_100887f0(void)
 * Address ranges: 100887f0-10088c37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100887f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  code *pcVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 extraout_x1;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  undefined1 auVar12 [16];
  undefined4 *local_90;
  undefined4 *local_8c;
  int local_88;
  int iStack_84;
  int local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar10 = DAT_1013d010;
  piVar1 = (int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = param_3;
  *piVar1 = param_2;
  iVar9 = FUN_100daef8(uVar10,&PTR_s_DGD3D11ROOT_10135160,0);
  piVar2 = (int *)(param_1 + 0x1cf00);
  *piVar2 = iVar9;
  if (iVar9 != 0) {
    *piVar1 = param_2;
    *(int *)(param_1 + 0x10) = iVar9;
    *(undefined4 *)(param_1 + 8) = param_3;
    FUN_100aa918(param_1,param_4);
    FUN_100dcf80(*piVar2,extraout_x1,param_1);
    auVar12 = FUN_100d4110(param_2);
    piVar3 = (int *)(param_1 + 0x14);
    uVar11 = FUN_100d8e20(*piVar2,*piVar3,auVar12._0_8_ & 0xffffffff,auVar12._8_8_ & 0xffffffff,
                          auVar12._0_8_ >> 0x20,auVar12._8_8_ >> 0x20 & 0xff);
    uVar10 = DAT_1013d010;
    if ((uVar11 & 1) != 0) {
      iVar9 = *piVar3;
      iVar5 = *piVar2;
      *(int *)(param_1 + 0x18) = iVar5 + iVar9 * 0x28 + 0x18;
      *(int *)(param_1 + 0x1cf04) = iVar5 + iVar9 * 0x1510 + 0x510;
      local_80 = param_1 + 0x1cf08;
      uVar11 = FUN_100d6f70(iVar5,iVar9,uVar10,0x28,&DAT_10136b30,local_80);
      if ((uVar11 & 1) != 0) {
        local_88 = param_1 + 0x1cfac;
        iStack_84 = param_1 + 0x1cfa8;
        auVar12 = FUN_100d7130(*piVar2,*piVar3,DAT_1013d010,1,&DAT_10136b20,&DAT_10136b18,iStack_84,
                               local_88);
        pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
        if ((auVar12._0_8_ & 1) != 0) {
          local_78 = 0xd0;
          uStack_70 = 4;
          local_68 = 0xd000000000;
          local_8c = (undefined4 *)(param_1 + 0x1d1e0);
          uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          auVar12 = (*extraout_w11)(uVar10,&local_78,0,(undefined4 *)(param_1 + 0x1d1e0));
          if (-1 < auVar12._0_4_) {
            local_60 = 0x4000;
            uStack_58 = 1;
            local_50 = 0x4000000000;
            puVar4 = (undefined4 *)(param_1 + 0x1d1dc);
            local_90 = puVar4;
            uVar10 = (*pcVar8)();
            iVar9 = (*extraout_w11_00)(uVar10,&local_60,0,puVar4);
            if (-1 < iVar9) {
              uVar11 = FUN_100aaf18(param_1);
              if ((uVar11 & 1) != 0) {
                FUN_100ab108(param_1);
                local_90 = (undefined4 *)0x0;
                uVar10 = (*pcVar8)();
                (*extraout_w11_03)(uVar10,0x1e,&local_90);
                iVar9 = *piVar2;
                iVar5 = *piVar3;
                iVar6 = *(int *)(param_1 + 0x1cf04);
                *(int *)(param_1 + 0x1d1f0) = iVar9;
                *(int *)(param_1 + 0x1d1f4) = iVar5;
                *(int *)(param_1 + 0x1d1f8) = iVar9 + iVar5 * 0x1510 + 0x510;
                *(int *)(param_1 + 0x1cfc0) = iVar9;
                *(int *)(param_1 + 0x1cfc4) = iVar5;
                cVar7 = *(char *)(*piVar1 + 0x1f8);
                *(int *)(param_1 + 0x1cfd4) = iVar6;
                *(undefined1 *)(param_1 + 0x1cfd8) = 0;
                if (((cVar7 == '\0') && (*(int *)(iVar6 + 0x14) == 0x1002)) &&
                   (iVar6 = *(int *)(iVar6 + 0x18),
                   (((iVar6 == 0x15dd || iVar6 == 0x15d8) || iVar6 == 0x1636) || iVar6 == 0x67df) ||
                   iVar6 == 0x1638)) {
                  *(undefined1 *)(param_1 + 0x1cfd8) = 1;
                }
                uVar11 = FUN_100f00a0(FUN_100f0370);
                if ((uVar11 & 1) == 0) {
                  *(undefined8 *)(iVar9 + iVar5 * 0x28 + 0x38) = 0;
                }
                (*(code *)PTR_FUN_101340bc)(*piVar2 + 0x4a0);
                return 1;
              }
              FUN_10085fc0(param_1);
              uVar10 = (*pcVar8)();
              (*extraout_w11_01)(uVar10);
              *puVar4 = 0;
            }
            puVar4 = local_8c;
            uVar10 = (*pcVar8)();
            auVar12 = (*extraout_w11_02)(uVar10);
            *puVar4 = 0;
          }
          auVar12 = FUN_100d72c8(auVar12._0_8_,auVar12._8_8_,1,iStack_84,local_88);
        }
        FUN_100d70b0(auVar12._0_8_,auVar12._8_8_,0x28,local_80);
      }
      FUN_100d9528(*piVar2,*piVar3);
    }
    (*(code *)PTR_FUN_101340bc)(*piVar2 + 0x4a0);
    *(int *)(param_1 + 0x10) = 0;
    FUN_100dafb0(*piVar2);
    *piVar2 = 0;
  }
  return 0;
}

