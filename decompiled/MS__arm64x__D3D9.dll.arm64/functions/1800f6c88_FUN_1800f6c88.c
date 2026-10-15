/*
 * FUN_1800f6c88 at 1800f6c88
 * undefined FUN_1800f6c88(void)
 * Address ranges: 1800f6c88-1800f6eeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f6c88(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint uStack_b4;
  undefined4 local_b0;
  int local_ac;
  int iStack_a8;
  int local_a0;
  uint uStack_9c;
  
  if (*(int *)(param_1 + 0x6c8) == 0) {
    return;
  }
  uVar3 = *(uint *)(param_2 + 0x20);
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800f6cc4);
    (*pcVar5)();
  }
  local_c0 = 0;
  if (uVar3 != 0) {
    local_c0 = *(uint *)(param_2 + 0x18) / uVar3;
  }
  uVar3 = *(uint *)(param_2 + 0x24);
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800f6cdc);
    (*pcVar5)();
  }
  local_bc = 0;
  if (uVar3 != 0) {
    local_bc = *(uint *)(param_2 + 0x1c) / uVar3;
  }
  (**(code **)(**(longlong **)(param_2 + 8) + 0x60))(*(longlong **)(param_2 + 8),&local_a0);
  uVar3 = *(uint *)(param_2 + 0x20);
  uVar1 = *(uint *)(param_2 + 0x24);
  uVar8 = *(uint *)(param_2 + 0x18);
  uVar2 = *(uint *)(param_2 + 0x1c);
  uVar4 = *(uint *)(param_2 + 0x2c);
  (*__imp_USER32_dll_SetRect)(&local_d0,0,0,local_a0,uStack_9c);
  if ((uVar4 < 9) && ((0x10cU >> (ulonglong)(uVar4 & 0x1f) & 1) != 0)) {
LAB_1800f6dc4:
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800f6dd0);
      (*pcVar5)();
    }
    uVar3 = 0;
    if (uVar8 != 0) {
      uVar3 = (uVar2 * local_a0) / uVar8;
    }
    if (uStack_9c < uVar3) {
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800f6e04);
        (*pcVar5)();
      }
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = (uVar8 * uStack_9c) / uVar2;
      }
      local_d0 = (int)(local_a0 - uVar3) / 2;
      local_c8 = uVar3 + local_d0;
    }
    else {
      local_cc = (int)(uStack_9c - uVar3) / 2;
      local_c4 = uVar3 + local_cc;
    }
  }
  else {
    if (uVar4 - 5 < 3) {
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800f6d94);
        (*pcVar5)();
      }
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar8 / uVar3;
      }
      if (uVar4 < 0x501) {
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800f6da8);
          (*pcVar5)();
        }
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar2 / uVar1;
        }
        if (uVar3 < 0x401) {
          uVar8 = (uVar2 << 2) / 3;
        }
      }
      goto LAB_1800f6dc4;
    }
    if ((uVar4 != 0) && ((uVar4 == 1 || (uVar4 == 4)))) {
      local_d0 = (int)(local_a0 - uVar8) / 2;
      local_c8 = uVar8 + local_d0;
      local_cc = (int)(uStack_9c - uVar2) / 2;
      local_c4 = uVar2 + local_cc;
    }
  }
  local_b8 = local_c8 - local_d0;
  uStack_b4 = local_c4 - local_cc;
  local_b0 = *(undefined4 *)(&DAT_180232ee0 + (longlong)*(int *)(param_2 + 0x34) * 4);
  uVar3 = *(uint *)(param_2 + 0x20);
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800f6e50);
    (*pcVar5)();
  }
  uVar8 = 0;
  if (uVar3 != 0) {
    uVar8 = *(uint *)(param_2 + 0x18) / uVar3;
  }
  if (local_b8 <= uVar8) {
    uVar3 = *(uint *)(param_2 + 0x24);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800f6e6c);
      (*pcVar5)();
    }
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = *(uint *)(param_2 + 0x1c) / uVar3;
    }
    if (uStack_b4 <= uVar1) {
      local_ac = uVar8 << 1;
      iStack_a8 = uVar1 << 1;
      goto LAB_1800f6e90;
    }
  }
  local_ac = local_b8 * 2 + -1;
  iStack_a8 = uStack_b4 * 2 + -1;
LAB_1800f6e90:
  uVar7 = 0;
  if (*(int *)(param_1 + 0x6c8) != 0) {
    do {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + uVar7 * 8);
      (**(code **)(*plVar6 + 0x30))(plVar6,*(undefined4 *)(param_2 + 0x10),param_2,&local_c0);
      uVar3 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0x6c8));
  }
  return;
}

