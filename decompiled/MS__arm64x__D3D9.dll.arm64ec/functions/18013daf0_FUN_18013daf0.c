/*
 * FUN_18013daf0 at 18013daf0
 * undefined FUN_18013daf0(void)
 * Address ranges: 18013daf0-18013dcc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18013daf0(longlong param_1,longlong param_2,int param_3,undefined8 *param_4,int param_5,
                 uint param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  undefined1 auVar7 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  param_6 = param_6 & 1;
  if (param_6 != 0) {
    FUN_180137af0(param_1,0,0,0);
  }
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  iVar2 = -0x7fffbffb;
  iVar3 = iVar2;
  if (param_3 == 9) {
    if (param_5 - 1U < 3) goto LAB_18013db8c;
    auVar7 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                       (0x180224000,*(undefined8 *)(*(longlong *)(param_1 + 0xf6d8) + 8),uVar5);
    iVar3 = (*extraout_x11_02)(auVar7._0_8_,auVar7._8_8_,&local_40);
  }
  else {
    if (param_3 != 0xb) {
      if (param_3 == 0xc) {
        if (6 < param_5 - 1U) {
          uVar6 = 0x10;
          puVar1 = &local_40;
          if (param_5 == 0) {
            uVar6 = 0;
            puVar1 = (undefined4 *)0x0;
          }
          (*(code *)__hybrid_os_arm64x_dispatch_icall)
                    (0x180224000,*(undefined8 *)(*(longlong *)(param_1 + 0xf6d8) + 8),uVar5,puVar1,
                     uVar6,param_6 ^ 1);
          iVar3 = (*extraout_x11_00)();
          if (iVar3 == 0) {
            if (param_4 == (undefined8 *)0x0) {
              return 0;
            }
            *param_4 = CONCAT44(uStack_3c,local_40);
            return 0;
          }
        }
      }
      else {
        auVar7 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        iVar3 = (*extraout_x11)(auVar7._0_8_,auVar7._8_8_,param_4,param_5);
        if (iVar3 == 0) {
          return 0;
        }
      }
      goto LAB_18013db8c;
    }
    if (param_5 - 1U < 3) goto LAB_18013db8c;
    uVar6 = 0x10;
    puVar1 = &local_40;
    if (param_5 == 0) {
      uVar6 = 0;
      puVar1 = (undefined4 *)0x0;
    }
    (*(code *)__hybrid_os_arm64x_dispatch_icall)
              (0x180224000,*(undefined8 *)(*(longlong *)(param_1 + 0xf6d8) + 8),uVar5,puVar1,uVar6,
               param_6 ^ 1);
    iVar3 = (*extraout_x11_01)();
    local_40 = local_38;
  }
  if (iVar3 == 0) {
    if (param_4 != (undefined8 *)0x0) {
      *(undefined4 *)param_4 = local_40;
    }
    return 0;
  }
LAB_18013db8c:
  iVar4 = 1;
  if (iVar3 != 1) {
    iVar4 = iVar2;
  }
  return iVar4;
}

