/*
 * FUN_180217510 at 180217510
 * undefined FUN_180217510(void)
 * Address ranges: 180217510-18021779f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180217510(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  uint uVar5;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint uStack_ac;
  undefined4 local_a8;
  int local_a4;
  int iStack_a0;
  code *local_98;
  int local_90;
  uint uStack_8c;
  
  if (*(int *)(param_1 + 0x6c8) == 0) {
    return;
  }
  uVar5 = *(uint *)(param_2 + 0x20);
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180217548);
    (*pcVar3)();
  }
  local_b8 = 0;
  if (uVar5 != 0) {
    local_b8 = *(uint *)(param_2 + 0x18) / uVar5;
  }
  uVar5 = *(uint *)(param_2 + 0x24);
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180217560);
    (*pcVar3)();
  }
  local_b4 = 0;
  if (uVar5 != 0) {
    local_b4 = *(uint *)(param_2 + 0x1c) / uVar5;
  }
  local_98 = (code *)__hybrid_os_arm64x_dispatch_icall;
  uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar4,&local_90);
  local_bc = *(uint *)(param_2 + 0x24);
  uVar5 = *(uint *)(param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x1c);
  uVar2 = *(uint *)(param_2 + 0x2c);
  local_c0 = *(uint *)(param_2 + 0x20);
  thunk_FUN_180223c20(&local_d0,0,0,local_90,uStack_8c);
  pcVar3 = local_98;
  if ((uVar2 < 9) && ((0x10cU >> (ulonglong)(uVar2 & 0x1f) & 1) != 0)) {
LAB_18021766c:
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180217678);
      (*pcVar3)();
    }
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = (uVar1 * local_90) / uVar5;
    }
    if (uStack_8c < uVar2) {
      if (uVar1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1802176ac);
        (*pcVar3)();
      }
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = (uVar5 * uStack_8c) / uVar1;
      }
      local_d0 = (int)(local_90 - uVar2) / 2;
      local_c8 = uVar2 + local_d0;
    }
    else {
      local_cc = (int)(uStack_8c - uVar2) / 2;
      local_c4 = uVar2 + local_cc;
    }
  }
  else {
    if (uVar2 - 5 < 3) {
      if (local_c0 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180217638);
        (*pcVar3)();
      }
      uVar2 = 0;
      if (local_c0 != 0) {
        uVar2 = uVar5 / local_c0;
      }
      if (uVar2 < 0x501) {
        if (local_bc == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180217650);
          (*pcVar3)();
        }
        uVar2 = 0;
        if (local_bc != 0) {
          uVar2 = uVar1 / local_bc;
        }
        if (uVar2 < 0x401) {
          uVar5 = (uVar1 << 2) / 3;
        }
      }
      goto LAB_18021766c;
    }
    if ((uVar2 != 0) && ((uVar2 == 1 || (uVar2 == 4)))) {
      local_d0 = (int)(local_90 - uVar5) / 2;
      local_c8 = uVar5 + local_d0;
      local_cc = (int)(uStack_8c - uVar1) / 2;
      local_c4 = uVar1 + local_cc;
    }
  }
  local_b0 = local_c8 - local_d0;
  uStack_ac = local_c4 - local_cc;
  local_a8 = *(undefined4 *)(&DAT_1802389d0 + (longlong)*(int *)(param_2 + 0x34) * 4);
  uVar5 = *(uint *)(param_2 + 0x20);
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1802176f8);
    (*pcVar3)();
  }
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = *(uint *)(param_2 + 0x18) / uVar5;
  }
  if (local_b0 <= uVar1) {
    uVar5 = *(uint *)(param_2 + 0x24);
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180217714);
      (*pcVar3)();
    }
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = *(uint *)(param_2 + 0x1c) / uVar5;
    }
    if (uStack_ac <= uVar2) {
      local_a4 = uVar1 << 1;
      iStack_a0 = uVar2 << 1;
      goto LAB_180217738;
    }
  }
  local_a4 = local_b0 * 2 + -1;
  iStack_a0 = uStack_ac * 2 + -1;
LAB_180217738:
  uVar5 = 0;
  if (*(int *)(param_1 + 0x6c8) != 0) {
    do {
      uVar4 = (*pcVar3)();
      (*extraout_x11_00)(uVar4,*(undefined4 *)(param_2 + 0x10),param_2,&local_b8);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x6c8));
  }
  return;
}

