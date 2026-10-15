/*
 * FUN_180059190 at 180059190
 * undefined __cdecl FUN_180059190(undefined8 param_1, longlong param_2, uint * param_3)
 * Address ranges: 180059190-1800593af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180059190(undefined8 param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  tagRECT local_b0;
  int local_a0;
  uint uStack_9c;
  
  uVar2 = *(uint *)(param_2 + 0x20);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800591c4);
    (*pcVar3)();
  }
  uVar6 = 0;
  if (uVar2 != 0) {
    uVar6 = *(uint *)(param_2 + 0x18) / uVar2;
  }
  *param_3 = uVar6;
  uVar2 = *(uint *)(param_2 + 0x24);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800591dc);
    (*pcVar3)();
  }
  uVar6 = 0;
  if (uVar2 != 0) {
    uVar6 = *(uint *)(param_2 + 0x1c) / uVar2;
  }
  param_3[1] = uVar6;
  (**(code **)(**(longlong **)(param_2 + 8) + 0x60))(*(longlong **)(param_2 + 8),&local_a0);
  uVar2 = *(uint *)(param_2 + 0x20);
  uVar1 = *(uint *)(param_2 + 0x24);
  uVar6 = *(uint *)(param_2 + 0x18);
  uVar4 = *(uint *)(param_2 + 0x1c);
  uVar5 = *(uint *)(param_2 + 0x2c);
  SetRect(&local_b0,0,0,local_a0,uStack_9c);
  if ((uVar5 < 9) && ((0x10cU >> (ulonglong)(uVar5 & 0x1f) & 1) != 0)) {
LAB_1800592c4:
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800592d0);
      (*pcVar3)();
    }
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = (uVar4 * local_a0) / uVar6;
    }
    if (uStack_9c < uVar2) {
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180059304);
        (*pcVar3)();
      }
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = (uVar6 * uStack_9c) / uVar4;
      }
      local_b0.left = (int)(local_a0 - uVar2) / 2;
      local_b0.right = uVar2 + local_b0.left;
    }
    else {
      local_b0.top = (int)(uStack_9c - uVar2) / 2;
      local_b0.bottom = uVar2 + local_b0.top;
    }
  }
  else {
    if (uVar5 - 5 < 3) {
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180059294);
        (*pcVar3)();
      }
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = uVar6 / uVar2;
      }
      if (uVar5 < 0x501) {
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800592a8);
          (*pcVar3)();
        }
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar4 / uVar1;
        }
        if (uVar2 < 0x401) {
          uVar6 = (uVar4 << 2) / 3;
        }
      }
      goto LAB_1800592c4;
    }
    if ((uVar5 != 0) && ((uVar5 == 1 || (uVar5 == 4)))) {
      local_b0.left = (int)(local_a0 - uVar6) / 2;
      local_b0.right = uVar6 + local_b0.left;
      local_b0.top = (int)(uStack_9c - uVar4) / 2;
      local_b0.bottom = uVar4 + local_b0.top;
    }
  }
  uVar6 = local_b0.right - local_b0.left;
  uVar1 = local_b0.bottom - local_b0.top;
  param_3[2] = uVar6;
  param_3[3] = uVar1;
  param_3[4] = *(uint *)(&DAT_180062198 + (longlong)*(int *)(param_2 + 0x34) * 4);
  uVar2 = *(uint *)(param_2 + 0x20);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180059350);
    (*pcVar3)();
  }
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar4 = *(uint *)(param_2 + 0x18) / uVar2;
  }
  if (uVar6 <= uVar4) {
    uVar2 = *(uint *)(param_2 + 0x24);
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18005936c);
      (*pcVar3)();
    }
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = *(uint *)(param_2 + 0x1c) / uVar2;
    }
    if (uVar1 <= uVar5) {
      uVar5 = uVar5 << 1;
      uVar4 = uVar4 << 1;
      goto LAB_180059390;
    }
  }
  uVar5 = uVar1 * 2 - 1;
  uVar4 = uVar6 * 2 - 1;
LAB_180059390:
  param_3[5] = uVar4;
  param_3[6] = uVar5;
  return;
}

