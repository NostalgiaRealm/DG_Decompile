/*
 * FUN_1800fc0c8 at 1800fc0c8
 * undefined FUN_1800fc0c8(void)
 * Address ranges: 1800fc0c8-1800fc2eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1800fc0c8(undefined8 param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  uint uStack_9c;
  
  uVar2 = *(uint *)(param_3 + 0x20);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800fc0fc);
    (*pcVar3)();
  }
  uVar6 = 0;
  if (uVar2 != 0) {
    uVar6 = *(uint *)(param_3 + 0x18) / uVar2;
  }
  *param_2 = uVar6;
  uVar2 = *(uint *)(param_3 + 0x24);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800fc114);
    (*pcVar3)();
  }
  uVar6 = 0;
  if (uVar2 != 0) {
    uVar6 = *(uint *)(param_3 + 0x1c) / uVar2;
  }
  param_2[1] = uVar6;
  (**(code **)(**(longlong **)(param_3 + 8) + 0x60))(*(longlong **)(param_3 + 8),&local_a0);
  uVar2 = *(uint *)(param_3 + 0x20);
  uVar1 = *(uint *)(param_3 + 0x24);
  uVar6 = *(uint *)(param_3 + 0x18);
  uVar4 = *(uint *)(param_3 + 0x1c);
  uVar5 = *(uint *)(param_3 + 0x2c);
  (*__imp_USER32_dll_SetRect)(&local_b0,0,0,local_a0,uStack_9c);
  if ((uVar5 < 9) && ((0x10cU >> (ulonglong)(uVar5 & 0x1f) & 1) != 0)) {
LAB_1800fc1fc:
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800fc208);
      (*pcVar3)();
    }
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = (uVar4 * local_a0) / uVar6;
    }
    if (uStack_9c < uVar2) {
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800fc23c);
        (*pcVar3)();
      }
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = (uVar6 * uStack_9c) / uVar4;
      }
      local_b0 = (int)(local_a0 - uVar2) / 2;
      local_a8 = uVar2 + local_b0;
    }
    else {
      local_ac = (int)(uStack_9c - uVar2) / 2;
      local_a4 = uVar2 + local_ac;
    }
  }
  else {
    if (uVar5 - 5 < 3) {
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800fc1cc);
        (*pcVar3)();
      }
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = uVar6 / uVar2;
      }
      if (uVar5 < 0x501) {
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800fc1e0);
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
      goto LAB_1800fc1fc;
    }
    if ((uVar5 != 0) && ((uVar5 == 1 || (uVar5 == 4)))) {
      local_b0 = (int)(local_a0 - uVar6) / 2;
      local_a8 = uVar6 + local_b0;
      local_ac = (int)(uStack_9c - uVar4) / 2;
      local_a4 = uVar4 + local_ac;
    }
  }
  uVar6 = local_a8 - local_b0;
  uVar1 = local_a4 - local_ac;
  param_2[2] = uVar6;
  param_2[3] = uVar1;
  param_2[4] = *(uint *)(&DAT_180232ee0 + (longlong)*(int *)(param_3 + 0x34) * 4);
  uVar2 = *(uint *)(param_3 + 0x20);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800fc288);
    (*pcVar3)();
  }
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar4 = *(uint *)(param_3 + 0x18) / uVar2;
  }
  if (uVar6 <= uVar4) {
    uVar2 = *(uint *)(param_3 + 0x24);
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800fc2a4);
      (*pcVar3)();
    }
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = *(uint *)(param_3 + 0x1c) / uVar2;
    }
    if (uVar1 <= uVar5) {
      uVar5 = uVar5 << 1;
      uVar4 = uVar4 << 1;
      goto LAB_1800fc2c8;
    }
  }
  uVar5 = uVar1 * 2 - 1;
  uVar4 = uVar6 * 2 - 1;
LAB_1800fc2c8:
  param_2[5] = uVar4;
  param_2[6] = uVar5;
  return param_2;
}

