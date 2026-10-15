/*
 * FUN_18021b3b0 at 18021b3b0
 * undefined FUN_18021b3b0(void)
 * Address ranges: 18021b3b0-18021b5e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_18021b3b0(undefined8 param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  code *extraout_x11;
  uint uVar7;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  uint uStack_8c;
  
  uVar2 = *(uint *)(param_3 + 0x20);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18021b3e4);
    (*pcVar3)();
  }
  uVar7 = 0;
  if (uVar2 != 0) {
    uVar7 = *(uint *)(param_3 + 0x18) / uVar2;
  }
  *param_2 = uVar7;
  uVar2 = *(uint *)(param_3 + 0x24);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18021b3fc);
    (*pcVar3)();
  }
  uVar7 = 0;
  if (uVar2 != 0) {
    uVar7 = *(uint *)(param_3 + 0x1c) / uVar2;
  }
  param_2[1] = uVar7;
  uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar4,&local_90);
  uVar2 = *(uint *)(param_3 + 0x20);
  uVar1 = *(uint *)(param_3 + 0x24);
  uVar7 = *(uint *)(param_3 + 0x18);
  uVar5 = *(uint *)(param_3 + 0x1c);
  uVar6 = *(uint *)(param_3 + 0x2c);
  thunk_FUN_180223c20(&local_a0,0,0,local_90,uStack_8c);
  if ((uVar6 < 9) && ((0x10cU >> (ulonglong)(uVar6 & 0x1f) & 1) != 0)) {
LAB_18021b4f8:
    if (uVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18021b504);
      (*pcVar3)();
    }
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = (uVar5 * local_90) / uVar7;
    }
    if (uStack_8c < uVar2) {
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18021b538);
        (*pcVar3)();
      }
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = (uVar7 * uStack_8c) / uVar5;
      }
      local_a0 = (int)(local_90 - uVar2) / 2;
      local_98 = uVar2 + local_a0;
    }
    else {
      local_9c = (int)(uStack_8c - uVar2) / 2;
      local_94 = uVar2 + local_9c;
    }
  }
  else {
    if (uVar6 - 5 < 3) {
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18021b4c4);
        (*pcVar3)();
      }
      uVar6 = 0;
      if (uVar2 != 0) {
        uVar6 = uVar7 / uVar2;
      }
      if (uVar6 < 0x501) {
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18021b4dc);
          (*pcVar3)();
        }
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar5 / uVar1;
        }
        if (uVar2 < 0x401) {
          uVar7 = (uVar5 << 2) / 3;
        }
      }
      goto LAB_18021b4f8;
    }
    if ((uVar6 != 0) && ((uVar6 == 1 || (uVar6 == 4)))) {
      local_a0 = (int)(local_90 - uVar7) / 2;
      local_98 = uVar7 + local_a0;
      local_9c = (int)(uStack_8c - uVar5) / 2;
      local_94 = uVar5 + local_9c;
    }
  }
  uVar7 = local_98 - local_a0;
  uVar1 = local_94 - local_9c;
  param_2[2] = uVar7;
  param_2[3] = uVar1;
  param_2[4] = *(uint *)(&DAT_1802389d0 + (longlong)*(int *)(param_3 + 0x34) * 4);
  uVar2 = *(uint *)(param_3 + 0x20);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18021b588);
    (*pcVar3)();
  }
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = *(uint *)(param_3 + 0x18) / uVar2;
  }
  if (uVar7 <= uVar5) {
    uVar2 = *(uint *)(param_3 + 0x24);
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18021b5a4);
      (*pcVar3)();
    }
    uVar6 = 0;
    if (uVar2 != 0) {
      uVar6 = *(uint *)(param_3 + 0x1c) / uVar2;
    }
    if (uVar1 <= uVar6) {
      uVar6 = uVar6 << 1;
      uVar5 = uVar5 << 1;
      goto LAB_18021b5c8;
    }
  }
  uVar6 = uVar1 * 2 - 1;
  uVar5 = uVar7 * 2 - 1;
LAB_18021b5c8:
  param_2[5] = uVar5;
  param_2[6] = uVar6;
  return param_2;
}

