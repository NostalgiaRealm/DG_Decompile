/*
 * FUN_10068210 at 10068210
 * undefined FUN_10068210(void)
 * Address ranges: 10068210-1006873f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10068210(int param_1)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  int iVar13;
  uint local_80 [4];
  undefined8 local_70;
  int local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  piVar1 = (int *)(param_1 + 0x29c);
  if ((*piVar1 == 0) && (piVar2 = (int *)(param_1 + 0x2b8), *piVar2 == 0)) {
    iVar7 = (*(code *)PTR_FUN_1009d094)(&DAT_100979a0);
    *piVar1 = iVar7;
    if (iVar7 == 0) {
      return 0;
    }
    iVar7 = (*(code *)PTR_FUN_1009d070)(iVar7,s_CreateDXGIFactory1_100979b0);
    *(int *)(param_1 + 0x2a8) = iVar7;
    if (iVar7 != 0) {
      iVar7 = (*(code *)PTR_FUN_1009d094)(*(undefined4 *)(*(int *)(param_1 + 0x4e8) + 8));
      *piVar2 = iVar7;
      if (iVar7 != 0) {
        iVar7 = (*(code *)PTR_FUN_1009d070)(iVar7,*(undefined4 *)(*(int *)(param_1 + 0x4e8) + 0xc));
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
            local_80[0] = 0;
            iVar7 = 0;
            local_80[3] = 0;
            uVar8 = (*(code *)PTR_FUN_1009d04c)();
            iVar9 = (*(code *)PTR_FUN_1009d074)(uVar8,local_80,local_80 + 3);
            if ((iVar9 != 0) && (local_80[0] != 0)) {
              do {
                uVar5 = local_80[0] & 1;
                local_80[0] = local_80[0] >> 1;
                if (uVar5 != 0) {
                  iVar7 = iVar7 + 1;
                }
              } while (local_80[0] != 0);
              local_80[0] = 0;
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
                iVar10 = (*(code *)PTR_FUN_1009d014)(0,0,0,0);
                *(int *)(iVar13 + param_1 + 0x2ec) = iVar10;
                if (iVar10 != 0) {
                  iVar10 = iVar13 + param_1;
                  iVar11 = (*(code *)PTR_FUN_1009d028)(0,0,FUN_1006da30,(int *)(iVar10 + 0x2dc),0,0)
                  ;
                  *(int *)(iVar10 + 0x2dc) = iVar11;
                  if (iVar11 == 0) {
                    iVar10 = *(int *)(iVar10 + 0x2ec);
                    pcVar4 = (code *)PTR_FUN_1009d00c;
                  }
                  else {
                    (*(code *)PTR_FUN_1009d0d0)(iVar11,0xfffffffe);
                    iVar10 = iVar10 + 0x2f0;
                    pcVar4 = (code *)PTR_FUN_1009d08c;
                  }
                  (*pcVar4)(iVar10);
                }
                iVar9 = iVar9 + 1;
                iVar13 = iVar13 + 0x38;
              } while (iVar9 < iVar7);
            }
          }
          iVar7 = (*(code *)PTR_FUN_1009d094)(s_winmm_dll_100979c8);
          *(int *)(param_1 + 0x2c8) = iVar7;
          if (iVar7 != 0) {
            piVar1 = (int *)(param_1 + 0x2cc);
            iVar7 = (*(code *)PTR_FUN_1009d070)(iVar7,s_timeBeginPeriod_100979d8);
            *piVar1 = iVar7;
            iVar7 = (*(code *)PTR_FUN_1009d070)(*(int *)(param_1 + 0x2c8),s_timeEndPeriod_100979e8);
            *(int *)(param_1 + 0x2d0) = iVar7;
            if ((*piVar1 == 0) || (iVar7 == 0)) {
              *piVar1 = 0;
              *(int *)(param_1 + 0x2d0) = 0;
            }
          }
          goto LAB_100684e0;
        }
        (*(code *)PTR_FUN_1009d044)(*piVar2);
        *piVar2 = 0;
      }
    }
    (*(code *)PTR_FUN_1009d044)(*piVar1);
    *piVar1 = 0;
  }
  else {
LAB_100684e0:
    local_64 = 0;
    uVar8 = **(undefined4 **)(param_1 + 0x4e8);
    local_70 = 0x30;
    local_68 = param_1;
    if (param_1 == -8) {
      local_68 = 0;
    }
    local_5c = (*(code *)PTR_FUN_1009d06c)(0);
    local_58 = 0;
    uStack_50 = 0;
    uStack_44 = 0;
    local_48 = uVar8;
    sVar6 = (*(code *)PTR_FUN_1009d1cc)(&local_70);
    *(short *)(param_1 + 0xc) = sVar6;
    *(undefined4 *)(param_1 + 0x10) = 0;
    pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (sVar6 != 0) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar7 = (*extraout_w11)(&DAT_10097a20,param_1 + 0x2c0);
      if ((-1 < iVar7) && (uVar12 = FUN_1006bc18(param_1), (uVar12 & 1) != 0)) {
        (*(code *)PTR_FUN_1009d08c)(param_1 + 0x4a0);
        *(undefined4 *)(param_1 + 0x49c) = 0;
        *(undefined1 *)(param_1 + 0x2d7) = 0;
        local_80[1] = 0;
        uVar8 = (*pcVar4)();
        iVar7 = (*extraout_w11_00)(uVar8,&DAT_100946b8,local_80 + 1);
        if (-1 < iVar7) {
          local_80[2] = 0;
          uVar8 = (*pcVar4)();
          iVar7 = (*extraout_w11_01)(uVar8,0,local_80 + 2,4);
          if (-1 < iVar7) {
            *(undefined1 *)(param_1 + 0x2d7) = local_80[2] == 1;
          }
          uVar8 = (*pcVar4)();
          (*extraout_w11_02)(uVar8);
        }
        plVar3 = (longlong *)(param_1 + 0x500);
        (*(code *)PTR_FUN_1009d0b4)(plVar3);
        *plVar3 = *plVar3 / 1000;
        *(undefined1 *)(param_1 + 0x2d8) = 0;
        *(undefined1 *)(param_1 + 0x2d4) = 1;
        return 1;
      }
      if (*(short *)(param_1 + 0xc) != 0) {
        uVar8 = (*(code *)PTR_FUN_1009d06c)(0);
        (*(code *)PTR_FUN_1009d20c)(*(short *)(param_1 + 0xc),uVar8);
        iVar7 = *(int *)(param_1 + 0x10);
        if (iVar7 != 0) {
          (*(code *)PTR_FUN_1009d044)(iVar7);
          *(int *)(param_1 + 0x10) = 0;
        }
      }
    }
    FUN_10068070(param_1);
  }
  return 0;
}

