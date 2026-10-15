/*
 * FUN_180201ff8 at 180201ff8
 * undefined FUN_180201ff8(void)
 * Address ranges: 180201ff8-18020222b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180201ff8(undefined8 param_1,longlong param_2,undefined8 *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *extraout_x11;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  uint uStack_8c;
  
  uVar6 = *(uint *)(param_2 + 0x24);
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18020202c);
    (*pcVar4)();
  }
  uVar7 = 0;
  if (uVar6 != 0) {
    uVar7 = *(uint *)(param_2 + 0x1c) / uVar6;
  }
  uVar6 = *(uint *)(param_2 + 0x20);
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180202040);
    (*pcVar4)();
  }
  uVar3 = 0;
  if (uVar6 != 0) {
    uVar3 = *(uint *)(param_2 + 0x18) / uVar6;
  }
  thunk_FUN_180223c20(param_3 + 4,0,0,uVar3,uVar7);
  if (1 < *(int *)(param_2 + 0x30) - 1U) {
    thunk_FUN_180223c20(param_3,0,0,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c))
    ;
    uVar8 = param_3[1];
    uVar5 = *param_3;
    goto LAB_180202210;
  }
  uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar5,&local_90);
  thunk_FUN_180223c20(param_3,0,0,local_90,uStack_8c);
  if (param_4 == (int *)0x0) {
    uVar6 = *(uint *)(param_2 + 0x18);
    uVar7 = *(uint *)(param_2 + 0x1c);
  }
  else {
    uVar7 = param_4[3] - param_4[1];
    uVar6 = param_4[2] - *param_4;
  }
  uVar3 = *(uint *)(param_2 + 0x20);
  uVar1 = *(uint *)(param_2 + 0x24);
  uVar2 = *(uint *)(param_2 + 0x2c);
  thunk_FUN_180223c20(&local_a0,0,0,local_90,uStack_8c);
  if ((uVar2 < 9) && ((0x10cU >> (ulonglong)(uVar2 & 0x1f) & 1) != 0)) {
LAB_180202194:
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1802021a0);
      (*pcVar4)();
    }
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = (uVar7 * local_90) / uVar6;
    }
    if (uStack_8c < uVar3) {
      if (uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1802021d4);
        (*pcVar4)();
      }
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar3 = (uVar6 * uStack_8c) / uVar7;
      }
      local_a0 = (int)(local_90 - uVar3) / 2;
      iStack_98 = local_a0 + uVar3;
    }
    else {
      iStack_9c = (int)(uStack_8c - uVar3) / 2;
      iStack_94 = iStack_9c + uVar3;
    }
  }
  else {
    if (uVar2 - 5 < 3) {
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180202160);
        (*pcVar4)();
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = uVar6 / uVar3;
      }
      if (uVar2 < 0x501) {
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180202178);
          (*pcVar4)();
        }
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar7 / uVar1;
        }
        if (uVar3 < 0x401) {
          uVar6 = (uVar7 << 2) / 3;
        }
      }
      goto LAB_180202194;
    }
    if ((uVar2 != 0) && ((uVar2 == 1 || (uVar2 == 4)))) {
      local_a0 = (int)(local_90 - uVar6) / 2;
      iStack_98 = uVar6 + local_a0;
      iStack_9c = (int)(uStack_8c - uVar7) / 2;
      iStack_94 = iStack_9c + uVar7;
    }
  }
  uVar8 = CONCAT44(iStack_94,iStack_98);
  uVar5 = CONCAT44(iStack_9c,local_a0);
LAB_180202210:
  param_3[3] = uVar8;
  param_3[2] = uVar5;
  return;
}

