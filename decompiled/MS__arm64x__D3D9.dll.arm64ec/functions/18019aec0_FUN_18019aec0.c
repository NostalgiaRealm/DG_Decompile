/*
 * FUN_18019aec0 at 18019aec0
 * undefined FUN_18019aec0(void)
 * Address ranges: 18019aec0-18019b16f;18019b18c-18019b1e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_18019aec0(longlong param_1,ulonglong param_2,int param_3,longlong param_4,int param_5,
             int *param_6)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  ulonglong extraout_x11_03;
  code *extraout_x11_04;
  uint extraout_w12;
  uint uVar10;
  uint uVar11;
  undefined4 local_88;
  undefined4 uStack_84;
  int local_80;
  undefined1 auStack_70 [48];
  
  uVar5 = 0;
  FUN_180202728(*(undefined8 *)(param_1 + -0x90),param_2,param_1 + -0xe0);
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar8 = (*extraout_x11)(param_1 + -0xe0);
  if (lVar8 != 0) {
    if (*(longlong *)(param_1 + -0x28) == 0) {
      FUN_1801bad48(&local_88,*(undefined4 *)(param_1 + -0xb4));
      FUN_180198608(param_1 + -0x40,*(undefined4 *)(param_1 + -0xbc),
                    *(undefined4 *)(param_1 + -0xb8),*(undefined4 *)(param_1 + -0xb0),
                    *(undefined4 *)(param_1 + -0xac),1,local_88,0,0,0,3,0,0x30000,0,0,0,0);
      if (*(int *)(param_1 + -0xac) != 0) {
        uVar11 = 0;
        do {
          uVar10 = 0;
          if (*(int *)(param_1 + -0xb0) != 0) {
            do {
              FUN_1801bb190(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xb8),uVar10);
              uVar5 = FUN_1801bb148(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc));
              thunk_FUN_180223c20(*(longlong *)(param_1 + -0x50) +
                                  (ulonglong)(uVar10 + *(int *)(param_1 + -0xa4) * uVar11) * 0x28 +
                                  0x18,0,0,uVar5);
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(uint *)(param_1 + -0xb0));
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(param_1 + -0xac));
      }
    }
    uVar5 = 0;
    if (*(longlong *)(param_1 + -0x28) != 0) {
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_00)(param_1 + -0xe0,param_2 & 0xffffffff,param_3);
      uVar9 = (*(code *)puVar3)(0x180224000,*(undefined8 *)(*(longlong *)(param_1 + -0x88) + 8),
                                extraout_x1,(int)param_2 + *(int *)(param_1 + -0xa4) * param_3);
      iVar6 = (*extraout_x11_01)(uVar9,*(undefined8 *)(param_1 + -0x28));
      if (-1 < iVar6) {
        uVar9 = (*(code *)puVar3)(0x180224000);
        (*extraout_x11_02)(uVar9,auStack_70);
        uVar11 = *(uint *)(&DAT_18022e050 + (ulonglong)*(uint *)(param_1 + -0xb4) * 4);
        if (uVar11 == 0x18) {
          uVar11 = 0x20;
        }
        uVar10 = uVar11 >> 3;
        if (uVar11 < 8) {
          uVar10 = *(uint *)(&DAT_18022db60 + (ulonglong)*(uint *)(param_1 + -0xb4) * 4);
        }
        uVar7 = FUN_1801bb148(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc),param_2 & 0xffffffff)
        ;
        uVar11 = uVar7;
        if (extraout_w12 < 8) {
          bVar1 = (&DAT_18022dc08)[extraout_x11_03 & 0xffffffff];
          if (bVar1 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18019b0fc);
            (*pcVar4)();
          }
          uVar11 = 0;
          if (bVar1 != 0) {
            uVar11 = uVar7 / bVar1;
          }
        }
        uVar7 = param_6[1];
        if (uVar7 <= (uint)param_6[3]) {
          if (uVar7 == param_6[3]) {
            uVar11 = param_6[2];
          }
          uVar2 = *param_6 * uVar10;
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48((ulonglong)(uVar7 * param_5) + (ulonglong)uVar2 + param_4,
                              (ulonglong)(uVar7 * local_80) + (ulonglong)uVar2 +
                              CONCAT44(uStack_84,local_88),(uVar11 - *param_6) * uVar10);
        }
        uVar9 = (*(code *)puVar3)(0x180224000,*(undefined8 *)(*(longlong *)(param_1 + -0x88) + 8),
                                  uVar7,(int)param_2 + *(int *)(param_1 + -0xa4) * param_3);
        (*extraout_x11_04)(uVar9,*(undefined8 *)(param_1 + -0x28));
        uVar5 = 1;
      }
    }
  }
  thunk_FUN_18022370c(*(longlong *)(param_1 + -0x90) + 0x620);
  return uVar5;
}

