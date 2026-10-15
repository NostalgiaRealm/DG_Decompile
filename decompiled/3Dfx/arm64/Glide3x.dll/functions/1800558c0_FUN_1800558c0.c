/*
 * FUN_1800558c0 at 1800558c0
 * undefined __cdecl FUN_1800558c0(undefined8 param_1, longlong param_2, LPRECT param_3, int * param_4)
 * Address ranges: 1800558c0-180055af7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800558c0(undefined8 param_1,longlong param_2,LPRECT param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  tagRECT local_a0;
  int local_90;
  uint uStack_8c;
  
  uVar5 = *(uint *)(param_2 + 0x24);
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800558f4);
    (*pcVar4)();
  }
  uVar6 = 0;
  if (uVar5 != 0) {
    uVar6 = *(uint *)(param_2 + 0x1c) / uVar5;
  }
  uVar5 = *(uint *)(param_2 + 0x20);
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180055908);
    (*pcVar4)();
  }
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = *(uint *)(param_2 + 0x18) / uVar5;
  }
  SetRect(param_3 + 2,0,0,uVar3,uVar6);
  if (1 < *(int *)(param_2 + 0x30) - 1U) {
    SetRect(param_3,0,0,*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c));
    uVar8._0_4_ = param_3->right;
    uVar8._4_4_ = param_3->bottom;
    uVar7._0_4_ = param_3->left;
    uVar7._4_4_ = param_3->top;
    goto LAB_180055adc;
  }
  (**(code **)(**(longlong **)(param_2 + 8) + 0x60))(*(longlong **)(param_2 + 8),&local_90);
  SetRect(param_3,0,0,local_90,uStack_8c);
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
  SetRect(&local_a0,0,0,local_90,uStack_8c);
  if ((uVar2 < 9) && ((0x10cU >> (ulonglong)(uVar2 & 0x1f) & 1) != 0)) {
LAB_180055a58:
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180055a64);
      (*pcVar4)();
    }
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = (uVar6 * local_90) / uVar5;
    }
    if (uStack_8c < uVar3) {
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180055a98);
        (*pcVar4)();
      }
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = (uVar5 * uStack_8c) / uVar6;
      }
      local_a0.left = (int)(local_90 - uVar3) / 2;
      local_a0.right = local_a0.left + uVar3;
    }
    else {
      local_a0.top = (int)(uStack_8c - uVar3) / 2;
      local_a0.bottom = local_a0.top + uVar3;
    }
  }
  else {
    if (uVar2 - 5 < 3) {
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180055a28);
        (*pcVar4)();
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = uVar5 / uVar3;
      }
      if (uVar2 < 0x501) {
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180055a3c);
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
      goto LAB_180055a58;
    }
    if ((uVar2 != 0) && ((uVar2 == 1 || (uVar2 == 4)))) {
      local_a0.left = (int)(local_90 - uVar5) / 2;
      local_a0.right = uVar5 + local_a0.left;
      local_a0.top = (int)(uStack_8c - uVar6) / 2;
      local_a0.bottom = local_a0.top + uVar6;
    }
  }
  uVar8 = CONCAT44(local_a0.bottom,local_a0.right);
  uVar7 = CONCAT44(local_a0.top,local_a0.left);
LAB_180055adc:
  param_3[1].right = (int)uVar8;
  param_3[1].bottom = (int)((ulonglong)uVar8 >> 0x20);
  param_3[1].left = (int)uVar7;
  param_3[1].top = (int)((ulonglong)uVar7 >> 0x20);
  return;
}

