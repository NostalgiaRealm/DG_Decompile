/*
 * FUN_100700b0 at 100700b0
 * undefined FUN_100700b0(void)
 * Address ranges: 100700b0-100708f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_100700b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  code *pcVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  int iVar13;
  uint uVar14;
  int local_1b0;
  int local_1ac;
  uint local_1a8;
  uint local_1a4 [3];
  undefined8 local_198;
  int local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined1 auStack_168 [284];
  int iStack_4c;
  int iStack_48;
  
  piVar1 = (int *)(param_1 + 0x29c);
  if ((*piVar1 == 0) && (piVar2 = (int *)(param_1 + 0x2b8), *piVar2 == 0)) {
    iVar7 = (*(code *)PTR_FUN_100a1048)(&DAT_1009e9e0);
    *piVar1 = iVar7;
    if (iVar7 == 0) {
      return 0;
    }
    iVar7 = (*(code *)PTR_FUN_100a102c)(iVar7,s_CreateDXGIFactory1_1009e9f0);
    *(int *)(param_1 + 0x2a8) = iVar7;
    if (iVar7 != 0) {
      iVar7 = (*(code *)PTR_FUN_100a1048)(*(undefined4 *)(*(int *)(param_1 + 0x4e8) + 8));
      *piVar2 = iVar7;
      if (iVar7 != 0) {
        iVar7 = (*(code *)PTR_FUN_100a102c)(iVar7,*(undefined4 *)(*(int *)(param_1 + 0x4e8) + 0xc));
        *(int *)(param_1 + 700) = iVar7;
        if (iVar7 != 0) {
          *(undefined8 *)(param_1 + 0x2ac) = 0;
          *(undefined4 *)(param_1 + 0x2b4) = 0;
          *(int *)(param_1 + 0x2a4) = 0;
          *(undefined8 *)(param_1 + 0x2e4) = 0;
          *(undefined8 *)(param_1 + 0x2dc) = 0;
          *(undefined8 *)(param_1 + 0x2f4) = 0;
          *(undefined8 *)(param_1 + 0x2ec) = 0;
          *(undefined8 *)(param_1 + 0x304) = 0;
          *(undefined8 *)(param_1 + 0x2fc) = 0;
          *(undefined8 *)(param_1 + 0x314) = 0;
          *(undefined8 *)(param_1 + 0x30c) = 0;
          *(undefined8 *)(param_1 + 0x324) = 0;
          *(undefined8 *)(param_1 + 0x31c) = 0;
          *(undefined8 *)(param_1 + 0x334) = 0;
          *(undefined8 *)(param_1 + 0x32c) = 0;
          *(undefined8 *)(param_1 + 0x344) = 0;
          *(undefined8 *)(param_1 + 0x33c) = 0;
          *(undefined8 *)(param_1 + 0x354) = 0;
          *(undefined8 *)(param_1 + 0x34c) = 0;
          *(undefined8 *)(param_1 + 0x364) = 0;
          *(undefined8 *)(param_1 + 0x35c) = 0;
          *(undefined8 *)(param_1 + 0x374) = 0;
          *(undefined8 *)(param_1 + 0x36c) = 0;
          *(undefined8 *)(param_1 + 900) = 0;
          *(undefined8 *)(param_1 + 0x37c) = 0;
          *(undefined8 *)(param_1 + 0x394) = 0;
          *(undefined8 *)(param_1 + 0x38c) = 0;
          *(undefined8 *)(param_1 + 0x3a4) = 0;
          *(undefined8 *)(param_1 + 0x39c) = 0;
          *(undefined8 *)(param_1 + 0x3b4) = 0;
          *(undefined8 *)(param_1 + 0x3ac) = 0;
          *(undefined8 *)(param_1 + 0x3c4) = 0;
          *(undefined8 *)(param_1 + 0x3bc) = 0;
          *(undefined8 *)(param_1 + 0x3d4) = 0;
          *(undefined8 *)(param_1 + 0x3cc) = 0;
          *(undefined8 *)(param_1 + 0x3e4) = 0;
          *(undefined8 *)(param_1 + 0x3dc) = 0;
          *(undefined8 *)(param_1 + 0x3f4) = 0;
          *(undefined8 *)(param_1 + 0x3ec) = 0;
          *(undefined8 *)(param_1 + 0x404) = 0;
          *(undefined8 *)(param_1 + 0x3fc) = 0;
          *(undefined8 *)(param_1 + 0x414) = 0;
          *(undefined8 *)(param_1 + 0x40c) = 0;
          *(undefined8 *)(param_1 + 0x424) = 0;
          *(undefined8 *)(param_1 + 0x41c) = 0;
          *(undefined8 *)(param_1 + 0x434) = 0;
          *(undefined8 *)(param_1 + 0x42c) = 0;
          *(undefined8 *)(param_1 + 0x444) = 0;
          *(undefined8 *)(param_1 + 0x43c) = 0;
          *(undefined8 *)(param_1 + 0x454) = 0;
          *(undefined8 *)(param_1 + 0x44c) = 0;
          *(undefined8 *)(param_1 + 0x464) = 0;
          *(undefined8 *)(param_1 + 0x45c) = 0;
          *(undefined8 *)(param_1 + 0x474) = 0;
          *(undefined8 *)(param_1 + 0x46c) = 0;
          *(undefined8 *)(param_1 + 0x484) = 0;
          *(undefined8 *)(param_1 + 0x47c) = 0;
          *(undefined8 *)(param_1 + 0x494) = 0;
          *(undefined8 *)(param_1 + 0x48c) = 0;
          if (*(int *)(param_1 + 0x2a4) != 0) {
            local_1a8 = 0;
            local_1a4[0] = 0;
            iVar7 = 0;
            uVar8 = (*(code *)PTR_FUN_100a1020)();
            iVar9 = (*(code *)PTR_FUN_100a1030)(uVar8,local_1a4,&local_1a8);
            if ((iVar9 != 0) && (local_1a4[0] != 0)) {
              do {
                uVar14 = local_1a4[0] & 1;
                local_1a4[0] = local_1a4[0] >> 1;
                if (uVar14 != 0) {
                  iVar7 = iVar7 + 1;
                }
              } while (local_1a4[0] != 0);
              local_1a4[0] = 0;
            }
            *(bool *)(param_1 + 0x2d5) = 1 < iVar7;
            if (1 < iVar7) {
              iVar7 = iVar7 + -3;
            }
            if (8 < iVar7) {
              iVar7 = 8;
            }
            if ((iVar7 != 0) && (iVar9 = 0, 0 < iVar7)) {
              iVar13 = 0;
              do {
                iVar10 = (*(code *)PTR_FUN_100a1004)(0,0,0,0);
                *(int *)(param_1 + 0x2ec + iVar13) = iVar10;
                if (iVar10 != 0) {
                  iVar10 = iVar13 + param_1;
                  iVar11 = (*(code *)PTR_FUN_100a1008)(0,0,FUN_10079550,(int *)(iVar10 + 0x2dc),0,0)
                  ;
                  *(int *)(iVar10 + 0x2dc) = iVar11;
                  if (iVar11 == 0) {
                    iVar10 = *(int *)(iVar10 + 0x2ec);
                    pcVar5 = (code *)__hybrid_CompilerIAT;
                  }
                  else {
                    (*(code *)PTR_FUN_100a1068)(iVar11,0xfffffffe);
                    iVar10 = iVar10 + 0x2f0;
                    pcVar5 = (code *)PTR_FUN_100a1040;
                  }
                  (*pcVar5)(iVar10);
                }
                iVar9 = iVar9 + 1;
                iVar13 = iVar13 + 0x38;
              } while (iVar9 < iVar7);
            }
          }
          iVar7 = (*(code *)PTR_FUN_100a1048)(s_winmm_dll_1009ea08);
          *(int *)(param_1 + 0x2c8) = iVar7;
          if (iVar7 != 0) {
            piVar1 = (int *)(param_1 + 0x2cc);
            iVar7 = (*(code *)PTR_FUN_100a102c)(iVar7,s_timeBeginPeriod_1009ea18);
            *piVar1 = iVar7;
            iVar7 = (*(code *)PTR_FUN_100a102c)(*(int *)(param_1 + 0x2c8),s_timeEndPeriod_1009ea28);
            *(int *)(param_1 + 0x2d0) = iVar7;
            if ((*piVar1 == 0) || (iVar7 == 0)) {
              *piVar1 = 0;
              *(int *)(param_1 + 0x2d0) = 0;
            }
          }
          goto LAB_10070380;
        }
        (*(code *)PTR_FUN_100a101c)(*piVar2);
        *piVar2 = 0;
      }
    }
    (*(code *)PTR_FUN_100a101c)(*piVar1);
    *piVar1 = 0;
  }
  else {
LAB_10070380:
    local_18c = 0;
    uVar8 = **(undefined4 **)(param_1 + 0x4e8);
    local_198 = 0x30;
    local_190 = param_1;
    if (param_1 == -8) {
      local_190 = 0;
    }
    local_184 = (*(code *)PTR_FUN_100a1028)(0);
    local_180 = 0;
    uStack_178 = 0;
    uStack_16c = 0;
    local_170 = uVar8;
    sVar6 = (*(code *)PTR_FUN_100a1090)(&local_198);
    *(short *)(param_1 + 0xc) = sVar6;
    *(undefined4 *)(param_1 + 0x10) = 0;
    pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (sVar6 != 0) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar7 = (*extraout_w11)(&DAT_1009ea38,param_1 + 0x2c0U);
      if (-1 < iVar7) {
        piVar1 = (int *)(param_1 + 0x4ec);
        local_1ac = 0;
        if (*piVar1 != 0) {
          uVar8 = (*pcVar5)();
          iVar7 = (*extraout_w11_00)(uVar8);
          if (iVar7 != 0) goto LAB_10070768;
        }
        (*pcVar5)();
        iVar7 = (*extraout_w11_01)(&DAT_1009ea38,&local_1ac);
        if (-1 < iVar7) {
          if (*piVar1 != 0) {
            uVar8 = (*pcVar5)();
            (*extraout_w11_02)(uVar8);
          }
          *piVar1 = local_1ac;
        }
        local_1ac = *piVar1;
        if (local_1ac != 0) {
          piVar1 = (int *)(param_1 + 0x4f0);
          FUN_10081dc0(*piVar1);
          *(undefined4 *)(param_1 + 0x4f8) = 0;
          piVar1[0] = 0;
          piVar1[1] = 0;
          local_1b0 = 0;
          iVar7 = 0;
          uVar8 = (*pcVar5)();
          iVar9 = (*extraout_w11_03)(uVar8,0,&local_1b0);
          while (-1 < iVar9) {
            uVar8 = (*pcVar5)();
            iVar9 = (*extraout_w11_04)(uVar8,auStack_168);
            if (-1 < iVar9) {
              uVar12 = 0xffffffff;
              uVar14 = 0;
              do {
                if (((*(int *)(param_1 + 0x1c + uVar14 * 0x28) == iStack_4c) &&
                    (*(int *)(param_1 + uVar14 * 0x28 + 0x20) == iStack_48)) &&
                   ((iStack_4c != 0 || (iStack_48 != 0)))) {
                  uVar8 = (*pcVar5)();
                  (*extraout_w11_05)(uVar8);
                  local_1b0 = 0;
                  uVar12 = uVar14;
                  break;
                }
                iVar9 = uVar14 * 0x28;
                uVar4 = uVar12;
                if (uVar12 == 0xffffffff) {
                  uVar4 = uVar14;
                }
                uVar14 = uVar14 + 1;
                if (*(int *)(param_1 + iVar9 + 0x18) == 0) {
                  uVar12 = uVar4;
                }
              } while (uVar14 < 0x10);
              if (local_1b0 == 0) {
                if (uVar12 != 0xffffffff) goto LAB_10070680;
              }
              else if (uVar12 == 0xffffffff) {
                uVar8 = (*pcVar5)();
                (*extraout_w11_06)(uVar8);
              }
              else {
                iVar9 = param_1 + uVar12 * 0x28;
                *(int *)(iVar9 + 0x18) = local_1b0;
                *(ulonglong *)(iVar9 + 0x1c) = CONCAT44(iStack_48,iStack_4c);
                *(undefined1 *)(iVar9 + 0x28) = 1;
LAB_10070680:
                local_1a8 = uVar12;
                FUN_100059f0(piVar1,&local_1a8);
              }
            }
            iVar7 = iVar7 + 1;
            uVar8 = (*pcVar5)();
            iVar9 = (*extraout_w11_07)(uVar8,iVar7,&local_1b0);
          }
          uVar14 = 0;
          local_1a8 = param_1 + 0x2c0U;
          do {
            if (*(char *)(param_1 + 0x28 + uVar14 * 0x28) != '\0') {
              if (*(uint *)(param_1 + 0x4f4) != 0) {
                uVar12 = 0;
                do {
                  if (*(uint *)(*piVar1 + uVar12 * 4) == uVar14) {
                    if (uVar12 != 0xffffffff) goto LAB_10070758;
                    break;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < *(uint *)(param_1 + 0x4f4));
              }
              uVar8 = (*pcVar5)();
              (*extraout_w11_08)(uVar8);
              *(undefined1 *)(param_1 + uVar14 * 0x28 + 0x28) = 0;
            }
LAB_10070758:
            uVar14 = uVar14 + 1;
          } while (uVar14 < 0x10);
LAB_10070768:
          (*(code *)PTR_FUN_100a1040)(param_1 + 0x4a0);
          *(undefined4 *)(param_1 + 0x49c) = 0;
          *(undefined1 *)(param_1 + 0x2d7) = 0;
          local_1a4[1] = 0;
          uVar8 = (*pcVar5)();
          iVar7 = (*extraout_w11_09)(uVar8,&DAT_1009c5c0,local_1a4 + 1);
          if (-1 < iVar7) {
            local_1a4[2] = 0;
            uVar8 = (*pcVar5)();
            iVar7 = (*extraout_w11_10)(uVar8,0,local_1a4 + 2,4);
            if (-1 < iVar7) {
              *(undefined1 *)(param_1 + 0x2d7) = local_1a4[2] == 1;
            }
            uVar8 = (*pcVar5)();
            (*extraout_w11_11)(uVar8);
          }
          plVar3 = (longlong *)(param_1 + 0x500);
          (*(code *)PTR_FUN_100a105c)(plVar3);
          *plVar3 = *plVar3 / 1000;
          *(undefined1 *)(param_1 + 0x2d8) = 0;
          *(undefined1 *)(param_1 + 0x2d4) = 1;
          return 1;
        }
      }
      if (*(short *)(param_1 + 0xc) != 0) {
        uVar8 = (*(code *)PTR_FUN_100a1028)(0);
        (*(code *)PTR_FUN_100a109c)(*(short *)(param_1 + 0xc),uVar8);
        iVar7 = *(int *)(param_1 + 0x10);
        if (iVar7 != 0) {
          (*(code *)PTR_FUN_100a101c)(iVar7);
          *(int *)(param_1 + 0x10) = 0;
        }
      }
    }
    FUN_1006ff10(param_1);
  }
  return 0;
}

