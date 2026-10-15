/*
 * FUN_18013e460 at 18013e460
 * undefined FUN_18013e460(void)
 * Address ranges: 18013e460-18013e5cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18013e460(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 local_40 [2];
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  uVar6 = 1;
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((param_2 & 1) == 0) {
      if ((param_3 & 1) == 0) {
        uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11_00)(uVar3,*(undefined8 *)(param_1 + 0x20));
        uVar3 = (*(code *)puVar1)(0x180224000);
        iVar2 = (*extraout_x11_01)(uVar3,*(undefined8 *)(param_1 + 0x20),0,0,0);
        while (iVar2 == 1) {
          uVar3 = (*(code *)puVar1)();
          iVar2 = (*extraout_x11_02)(uVar3,*(undefined8 *)(param_1 + 0x20),0,0,0);
        }
      }
      uVar3 = (*(code *)puVar1)(0x180224000);
      uVar4 = 5;
      pcVar5 = extraout_x11_03;
    }
    else {
      uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar4 = 4;
      pcVar5 = extraout_x11;
    }
    iVar2 = (*pcVar5)(uVar3,*(undefined8 *)(param_1 + 0x18),0,uVar4,0,local_40);
    if (iVar2 == -0x7789fde4) {
      uVar6 = 2;
    }
    else if (-1 < iVar2) {
      uVar6 = 0;
      *param_4 = local_40[0];
    }
  }
  return uVar6;
}

