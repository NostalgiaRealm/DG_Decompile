/*
 * FUN_18019aa40 at 18019aa40
 * undefined FUN_18019aa40(void)
 * Address ranges: 18019aa40-18019ac77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_18019aa40(longlong param_1,ulonglong param_2,int param_3,ulonglong param_4,uint param_5,
             undefined8 *param_6,undefined4 *param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined4 uVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  uint uVar7;
  uint uVar8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  
  FUN_180202728(*(undefined8 *)(param_1 + -0x90),param_2,param_1 + -0xe0);
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  uVar6 = 2;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar4 = (*extraout_x11)(param_1 + -0xe0);
  if (lVar4 != 0) {
    if (*(longlong *)(param_1 + -0x28) == 0) {
      FUN_1801bad48(&local_58,*(undefined4 *)(param_1 + -0xb4));
      FUN_180198608(param_1 + -0x40,*(undefined4 *)(param_1 + -0xbc),
                    *(undefined4 *)(param_1 + -0xb8),*(undefined4 *)(param_1 + -0xb0),
                    *(undefined4 *)(param_1 + -0xac),1,local_58,0,0,0,3,0,0x30000,0,0,0,0);
      if (*(int *)(param_1 + -0xac) != 0) {
        uVar8 = 0;
        do {
          uVar7 = 0;
          if (*(int *)(param_1 + -0xb0) != 0) {
            do {
              FUN_1801bb190(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xb8),uVar7);
              uVar2 = FUN_1801bb148(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc));
              thunk_FUN_180223c20(*(longlong *)(param_1 + -0x50) +
                                  (ulonglong)(uVar7 + *(int *)(param_1 + -0xa4) * uVar8) * 0x28 +
                                  0x18,0,0,uVar2);
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(param_1 + -0xb0));
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_1 + -0xac));
      }
    }
    if (*(longlong *)(param_1 + -0x28) != 0) {
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)(param_1 + -0xe0,param_2 & 0xffffffff,param_3);
      uVar6 = 3;
      if ((param_5 & 1) != 0) {
        if ((param_4 & 1) == 0) {
          uVar6 = 2;
          if ((param_4 & 2) == 0) {
            uVar6 = 3;
          }
        }
        else {
          uVar6 = 1;
        }
      }
      uVar5 = (*(code *)puVar1)(0x180224000,*(undefined8 *)(*(longlong *)(param_1 + -0x88) + 8),
                                extraout_x1,(int)param_2 + *(int *)(param_1 + -0xa4) * param_3,uVar6
                               );
      iVar3 = (*extraout_x11_01)(uVar5,*(undefined8 *)(param_1 + -0x28));
      if (iVar3 < 0) {
        uVar6 = 1;
        if (iVar3 != -0x7785fff6) {
          uVar6 = 2;
        }
      }
      else {
        uVar6 = 0;
        *param_6 = CONCAT44(uStack_54,local_58);
        *param_7 = local_50;
      }
    }
  }
  thunk_FUN_18022370c(*(longlong *)(param_1 + -0x90) + 0x620);
  return uVar6;
}

