/*
 * FUN_1801a3840 at 1801a3840
 * undefined FUN_1801a3840(void)
 * Address ranges: 1801a3840-1801a3ac3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1801a3840(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  code *extraout_x11;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  uint local_d0;
  uint local_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_90;
  uint uStack_8c;
  
  lVar8 = *(longlong *)(param_1 + 0x1cf10);
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  thunk_FUN_1802236f8(lVar8 + 0x620);
  if (*(uint *)(lVar8 + 0x650) != 0) {
    uVar5 = 0;
    do {
      plVar6 = *(longlong **)(*(longlong *)(lVar8 + 0x648) + uVar5 * 8);
      if (*plVar6 == param_3) {
        uVar7 = *(uint *)((longlong)plVar6 + 0x24);
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1801a38bc);
          (*pcVar3)();
        }
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = *(uint *)((longlong)plVar6 + 0x1c) / uVar7;
        }
        uVar7 = *(uint *)(plVar6 + 4);
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1801a38d0);
          (*pcVar3)();
        }
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = *(uint *)(plVar6 + 3) / uVar7;
        }
        thunk_FUN_180223c20(&local_a0,0,0,uVar2,uVar1);
        if ((int)plVar6[6] - 1U < 2) {
          uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          (*extraout_x11)(uVar4,&local_90);
          thunk_FUN_180223c20(&local_c0,0,0,local_90,uStack_8c);
          local_cc = *(uint *)((longlong)plVar6 + 0x24);
          uVar7 = *(uint *)(plVar6 + 3);
          uVar1 = *(uint *)((longlong)plVar6 + 0x1c);
          local_d0 = *(uint *)(plVar6 + 4);
          uVar2 = *(uint *)((longlong)plVar6 + 0x2c);
          thunk_FUN_180223c20(&local_e0,0,0,local_90,uStack_8c);
          if ((uVar2 < 9) && ((0x10cU >> (ulonglong)(uVar2 & 0x1f) & 1) != 0)) {
LAB_1801a3a18:
            if (uVar7 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1801a3a24);
              (*pcVar3)();
            }
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = (local_90 * uVar1) / uVar7;
            }
            if (uStack_8c < uVar2) {
              if (uVar1 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1801a3a58);
                (*pcVar3)();
              }
              uVar2 = 0;
              if (uVar1 != 0) {
                uVar2 = (uVar7 * uStack_8c) / uVar1;
              }
              local_e0 = (int)(local_90 - uVar2) / 2;
              iStack_d8 = local_e0 + uVar2;
            }
            else {
              iStack_dc = (int)(uStack_8c - uVar2) / 2;
              iStack_d4 = iStack_dc + uVar2;
            }
          }
          else {
            if (uVar2 - 5 < 3) {
              if (local_d0 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1801a39e4);
                (*pcVar3)();
              }
              uVar2 = 0;
              if (local_d0 != 0) {
                uVar2 = uVar7 / local_d0;
              }
              if (uVar2 < 0x501) {
                if (local_cc == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1801a39fc);
                  (*pcVar3)();
                }
                uVar2 = 0;
                if (local_cc != 0) {
                  uVar2 = uVar1 / local_cc;
                }
                if (uVar2 < 0x401) {
                  uVar7 = (uVar1 << 2) / 3;
                }
              }
              goto LAB_1801a3a18;
            }
            if ((uVar2 != 0) && ((uVar2 == 1 || (uVar2 == 4)))) {
              local_e0 = (int)(local_90 - uVar7) / 2;
              iStack_d8 = uVar7 + local_e0;
              iStack_dc = (int)(uStack_8c - uVar1) / 2;
              iStack_d4 = iStack_dc + uVar1;
            }
          }
          uStack_a8 = CONCAT44(iStack_d4,iStack_d8);
          local_b0 = CONCAT44(iStack_dc,local_e0);
        }
        else {
          thunk_FUN_180223c20(&local_c0,0,0,(int)plVar6[3],*(undefined4 *)((longlong)plVar6 + 0x1c))
          ;
          local_b0 = local_c0;
          uStack_a8 = uStack_b8;
        }
        break;
      }
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(lVar8 + 0x650));
  }
  thunk_FUN_18022370c(lVar8 + 0x620);
  param_2[1] = uStack_b8;
  *param_2 = local_c0;
  param_2[3] = uStack_a8;
  param_2[2] = local_b0;
  return param_2;
}

