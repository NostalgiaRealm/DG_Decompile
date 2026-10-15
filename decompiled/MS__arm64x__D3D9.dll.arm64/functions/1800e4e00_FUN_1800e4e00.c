/*
 * FUN_1800e4e00 at 1800e4e00
 * undefined FUN_1800e4e00(void)
 * Address ranges: 1800e4e00-1800e5037
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e4e00(undefined8 param_1,longlong param_2,undefined8 *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  uint uStack_8c;
  
  uVar5 = *(uint *)(param_2 + 0x24);
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800e4e34);
    (*pcVar4)();
  }
  uVar6 = 0;
  if (uVar5 != 0) {
    uVar6 = *(uint *)(param_2 + 0x1c) / uVar5;
  }
  uVar5 = *(uint *)(param_2 + 0x20);
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800e4e48);
    (*pcVar4)();
  }
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = *(uint *)(param_2 + 0x18) / uVar5;
  }
  (*__imp_USER32_dll_SetRect)(param_3 + 4,0,0,uVar3,uVar6);
  if (1 < *(int *)(param_2 + 0x30) - 1U) {
    (*__imp_USER32_dll_SetRect)
              (param_3,0,0,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c));
    uVar8 = param_3[1];
    uVar7 = *param_3;
    goto LAB_1800e501c;
  }
  (**(code **)(**(longlong **)(param_2 + 8) + 0x60))(*(longlong **)(param_2 + 8),&local_90);
  (*__imp_USER32_dll_SetRect)(param_3,0,0,local_90,uStack_8c);
  if (param_4 == (int *)0x0) {
    uVar5 = *(uint *)(param_2 + 0x18);
    uVar6 = *(uint *)(param_2 + 0x1c);
  }
  else {
    uVar6 = param_4[3] - param_4[1];
    uVar5 = param_4[2] - *param_4;
  }
  uVar3 = *(uint *)(param_2 + 0x20);
  uVar1 = *(uint *)(param_2 + 0x24);
  uVar2 = *(uint *)(param_2 + 0x2c);
  (*__imp_USER32_dll_SetRect)(&local_a0,0,0,local_90,uStack_8c);
  if ((uVar2 < 9) && ((0x10cU >> (ulonglong)(uVar2 & 0x1f) & 1) != 0)) {
LAB_1800e4f98:
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800e4fa4);
      (*pcVar4)();
    }
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = (uVar6 * local_90) / uVar5;
    }
    if (uStack_8c < uVar3) {
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800e4fd8);
        (*pcVar4)();
      }
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = (uVar5 * uStack_8c) / uVar6;
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
        pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800e4f68);
        (*pcVar4)();
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = uVar5 / uVar3;
      }
      if (uVar2 < 0x501) {
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800e4f7c);
          (*pcVar4)();
        }
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar6 / uVar1;
        }
        if (uVar3 < 0x401) {
          uVar5 = (uVar6 << 2) / 3;
        }
      }
      goto LAB_1800e4f98;
    }
    if ((uVar2 != 0) && ((uVar2 == 1 || (uVar2 == 4)))) {
      local_a0 = (int)(local_90 - uVar5) / 2;
      iStack_98 = uVar5 + local_a0;
      iStack_9c = (int)(uStack_8c - uVar6) / 2;
      iStack_94 = iStack_9c + uVar6;
    }
  }
  uVar8 = CONCAT44(iStack_94,iStack_98);
  uVar7 = CONCAT44(iStack_9c,local_a0);
LAB_1800e501c:
  param_3[3] = uVar8;
  param_3[2] = uVar7;
  return;
}

