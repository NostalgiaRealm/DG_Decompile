/*
 * FUN_10043170 at 10043170
 * undefined FUN_10043170(void)
 * Address ranges: 10043170-100434c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10043170(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined1 auVar11 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  iVar1 = param_1 + 0x13c;
  FUN_1007a7b0(iVar1,0,0x30c);
  piVar2 = (int *)(param_1 + 0x138);
  uVar10 = 0;
  do {
    uVar3 = uVar10 + 1;
    *(undefined4 *)(param_1 + 0x1e0 + uVar10 * 0x104) = *(undefined4 *)(*piVar2 + 0x3180);
    *(int *)(param_1 + 0x1e4 + uVar10 * 0x104) =
         *(int *)(*piVar2 + 0x3180) + *(int *)(*piVar2 + 0x3184) * 0x1510 + 0x510;
    *(undefined4 *)(iVar1 + uVar10 * 0x104) = *(undefined4 *)(*piVar2 + 0x3184);
    uVar10 = uVar3;
  } while (uVar3 < 3);
  uVar9 = FUN_10049970(iVar1,param_2,0);
  if ((uVar9 & 1) != 0) {
    uVar9 = FUN_10049970(param_1 + 0x240,param_2,0);
    if ((uVar9 & 1) != 0) {
      bVar6 = *(int *)(*piVar2 + 0xcc) == 2;
      if (!bVar6) {
        param_3 = param_2;
      }
      uVar9 = FUN_10049970(param_1 + 0x344,param_3,bVar6);
      if ((uVar9 & 1) != 0) {
        iVar4 = param_1 + 0x448;
        uVar9 = FUN_10066430(*(undefined4 *)(*piVar2 + 0x3180),*(undefined4 *)(*piVar2 + 0x3184),
                             DAT_1009f7ac,0x17,&DAT_1009f4c0,iVar4);
        if ((uVar9 & 1) != 0) {
          auVar11 = FUN_100665f0(*(undefined4 *)(*piVar2 + 0x3180),*(undefined4 *)(*piVar2 + 0x3184)
                                 ,DAT_1009f7ac,3,0x1009f528,&DAT_1009f510,param_1 + 0x4a4,
                                 param_1 + 0x4b0);
          pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
          if ((auVar11._0_8_ & 1) == 0) {
            FUN_10066570(auVar11._0_8_,auVar11._8_8_,0x17,iVar4);
          }
          else {
            local_58 = 0;
            uStack_50 = 0;
            local_48 = 0;
            local_78 = 0x300000015;
            uStack_70 = 0x300000003;
            local_68 = 0x100000000;
            uStack_60 = 8;
            uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            (*extraout_w11)(uVar7,&local_78,(undefined4 *)(param_1 + 0x4c0));
            local_90 = 0x200000040;
            uStack_88 = 0x1000000000001;
            local_80 = 0x1000000000;
            uVar9 = (ulonglong)(param_1 + 0x4bc);
            uVar7 = (*pcVar5)();
            iVar8 = (*extraout_w11_00)(uVar7,&local_90,0,uVar9 & 0xffffffff);
            if (-1 < iVar8) {
              FUN_100678c8(*(undefined4 *)(*piVar2 + 0x3180),*(undefined4 *)(*piVar2 + 0x3184),1);
              DAT_1009f7c4 = param_1;
              return 1;
            }
            uVar7 = (*pcVar5)();
            auVar11 = (*extraout_w11_01)(uVar7);
            *(undefined4 *)(param_1 + 0x4c0) = 0;
            auVar11 = FUN_10066570(auVar11._0_8_,auVar11._8_8_,0x17,iVar4);
            FUN_10066788(auVar11._0_8_,auVar11._8_8_,3,param_1 + 0x4a4,param_1 + 0x4b0);
          }
        }
        FUN_1004a228(param_1 + 0x344);
      }
      FUN_1004a228(param_1 + 0x240);
    }
    FUN_1004a228(iVar1);
  }
  return 0;
}

