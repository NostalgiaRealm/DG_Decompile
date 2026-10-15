/*
 * FUN_18008d0f8 at 18008d0f8
 * undefined FUN_18008d0f8(void)
 * Address ranges: 18008d0f8-18008d38b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18008d0f8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  int local_a0;
  uint uStack_9c;
  
  lVar9 = *(longlong *)(param_1 + 0x1cf10);
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar9 + 0x620);
  if (*(uint *)(lVar9 + 0x650) != 0) {
    uVar6 = 0;
    do {
      plVar7 = *(longlong **)(*(longlong *)(lVar9 + 0x648) + uVar6 * 8);
      if (*plVar7 == param_3) {
        uVar8 = *(uint *)((longlong)plVar7 + 0x24);
        if (uVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18008d180);
          (*pcVar5)();
        }
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = *(uint *)((longlong)plVar7 + 0x1c) / uVar8;
        }
        uVar8 = *(uint *)(plVar7 + 4);
        if (uVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18008d194);
          (*pcVar5)();
        }
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = *(uint *)(plVar7 + 3) / uVar8;
        }
        (*__imp_USER32_dll_SetRect)(&local_b0,0,0,uVar4,uVar3);
        if ((int)plVar7[6] - 1U < 2) {
          (**(code **)(*(longlong *)plVar7[1] + 0x60))((longlong *)plVar7[1],&local_a0);
          (*__imp_USER32_dll_SetRect)(&local_d0,0,0,local_a0,uStack_9c);
          uVar8 = *(uint *)(plVar7 + 3);
          uVar4 = *(uint *)((longlong)plVar7 + 0x1c);
          uVar3 = *(uint *)(plVar7 + 4);
          uVar1 = *(uint *)((longlong)plVar7 + 0x24);
          uVar2 = *(uint *)((longlong)plVar7 + 0x2c);
          (*__imp_USER32_dll_SetRect)(&local_e0,0,0,local_a0,uStack_9c);
          if ((uVar2 < 9) && ((0x10cU >> (ulonglong)(uVar2 & 0x1f) & 1) != 0)) {
LAB_18008d2cc:
            if (uVar8 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18008d2d8);
              (*pcVar5)();
            }
            uVar3 = 0;
            if (uVar8 != 0) {
              uVar3 = (local_a0 * uVar4) / uVar8;
            }
            if (uStack_9c < uVar3) {
              if (uVar4 == 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18008d30c);
                (*pcVar5)();
              }
              uVar3 = 0;
              if (uVar4 != 0) {
                uVar3 = (uVar8 * uStack_9c) / uVar4;
              }
              local_e0 = (int)(local_a0 - uVar3) / 2;
              iStack_d8 = local_e0 + uVar3;
            }
            else {
              iStack_dc = (int)(uStack_9c - uVar3) / 2;
              iStack_d4 = iStack_dc + uVar3;
            }
          }
          else {
            if (uVar2 - 5 < 3) {
              if (uVar3 == 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18008d29c);
                (*pcVar5)();
              }
              uVar2 = 0;
              if (uVar3 != 0) {
                uVar2 = uVar8 / uVar3;
              }
              if (uVar2 < 0x501) {
                if (uVar1 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18008d2b0);
                  (*pcVar5)();
                }
                uVar3 = 0;
                if (uVar1 != 0) {
                  uVar3 = uVar4 / uVar1;
                }
                if (uVar3 < 0x401) {
                  uVar8 = (uVar4 << 2) / 3;
                }
              }
              goto LAB_18008d2cc;
            }
            if ((uVar2 != 0) && ((uVar2 == 1 || (uVar2 == 4)))) {
              local_e0 = (int)(local_a0 - uVar8) / 2;
              iStack_d8 = uVar8 + local_e0;
              iStack_dc = (int)(uStack_9c - uVar4) / 2;
              iStack_d4 = iStack_dc + uVar4;
            }
          }
          uStack_b8 = CONCAT44(iStack_d4,iStack_d8);
          local_c0 = CONCAT44(iStack_dc,local_e0);
        }
        else {
          (*__imp_USER32_dll_SetRect)
                    (&local_d0,0,0,(int)plVar7[3],*(undefined4 *)((longlong)plVar7 + 0x1c));
          local_c0 = local_d0;
          uStack_b8 = uStack_c8;
        }
        break;
      }
      uVar8 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar8;
    } while (uVar8 < *(uint *)(lVar9 + 0x650));
  }
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar9 + 0x620);
  param_2[1] = uStack_c8;
  *param_2 = local_d0;
  param_2[3] = uStack_b8;
  param_2[2] = local_c0;
  return param_2;
}

