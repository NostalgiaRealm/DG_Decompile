/*
 * FUN_1003fed0 at 1003fed0
 * undefined FUN_1003fed0(void)
 * Address ranges: 1003fed0-1004023f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1003fed0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  code *pcVar7;
  char cVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined4 *extraout_w8;
  uint uVar11;
  int iVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar12 = *(int *)(param_1 + 4);
  iVar6 = *(int *)(iVar12 + 0x78);
  if ((iVar6 - 3U < 2) || (uVar13 = 0, iVar6 == 5)) {
    puVar1 = (uint *)(iVar12 + 0x50);
    uVar13 = *puVar1;
    if (iVar6 - 3U < 2) {
      uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      cVar8 = (*extraout_w11)(uVar9,param_2,uVar13);
      if (cVar8 == '\0') {
        puVar2 = (uint *)(iVar12 + 0x58);
        uVar14 = 0;
        if (*puVar2 != 0) {
          do {
            uVar9 = (*pcVar7)();
            cVar8 = (*extraout_w11_00)(uVar9,param_2,*extraout_w8);
            if (cVar8 != '\0') break;
            uVar14 = uVar14 + 1;
          } while (uVar14 < *puVar2);
        }
        if (uVar14 == *puVar2) {
          uVar9 = (*pcVar7)();
          auVar15 = (*extraout_w11_02)(uVar9,param_2,param_3);
          uVar14 = auVar15._0_4_;
          if (uVar14 != 0) {
            uVar13 = *(uint *)(iVar12 + 0x60);
            piVar3 = (int *)(iVar12 + 0x54);
            if ((int)uVar13 < 0) {
              uVar13 = *puVar1;
            }
            else {
              uVar13 = *(uint *)(*piVar3 + uVar13 * 4);
            }
            uVar10 = (ulonglong)uVar13;
            uVar9 = (*pcVar7)(*(undefined4 *)(iVar12 + 0x4c),auVar15._8_8_,uVar10);
            (*extraout_w11_03)(uVar9,auVar15._0_8_ & 0xffffffff,uVar10 & 0xffffffff);
            if (0xb < *puVar2) {
              uVar9 = (*pcVar7)();
              (*extraout_w11_04)(uVar9);
              puVar1 = (uint *)(iVar12 + 0x58);
              uVar13 = *puVar1;
              if (uVar13 != 0) {
                uVar11 = 1;
                if (1 < uVar13) {
                  do {
                    puVar5 = (undefined4 *)(*piVar3 + uVar11 * 4);
                    uVar11 = uVar11 + 1;
                    puVar5[-1] = *puVar5;
                    uVar13 = *puVar1;
                  } while (uVar11 < uVar13);
                }
                *puVar1 = uVar13 - 1;
              }
            }
            puVar1 = (uint *)(iVar12 + 0x58);
            puVar4 = (uint *)(iVar12 + 0x5c);
            *(uint *)(iVar12 + 0x60) = *puVar2;
            uVar13 = *puVar4;
            if (*puVar1 == uVar13) {
              uVar11 = uVar13 << 1;
              if (uVar13 == 0) {
                uVar11 = 0x10;
              }
              iVar12 = uVar11 * 4;
              if (uVar11 >> 0x1e != 0) {
                iVar12 = -1;
              }
              iVar12 = FUN_101322b0(iVar12);
              if (iVar12 == 0) {
                return uVar14;
              }
              FUN_101325a0(iVar12,*piVar3,((ulonglong)*puVar4 & 0x3fffffff) << 2);
              FUN_101322d0(*piVar3);
              *piVar3 = iVar12;
              *puVar4 = uVar11;
            }
            *(uint *)(*piVar3 + *puVar1 * 4) = uVar14;
            *puVar1 = *puVar1 + 1;
            uVar13 = uVar14;
          }
        }
        else {
          uVar13 = *(uint *)(*(int *)(iVar12 + 0x54) + uVar14 * 4);
          uVar11 = *(uint *)(iVar12 + 0x60);
          if ((int)uVar11 < 0) {
            uVar11 = *puVar1;
          }
          else {
            uVar11 = *(uint *)(*(int *)(iVar12 + 0x54) + uVar11 * 4);
          }
          uVar10 = (ulonglong)uVar11;
          if (uVar13 != uVar11) {
            uVar9 = (*pcVar7)();
            (*extraout_w11_01)(uVar9,uVar13,uVar10 & 0xffffffff);
          }
          *(uint *)(iVar12 + 0x60) = uVar14;
        }
      }
      else {
        FUN_100404a8((undefined4 *)(iVar12 + 0x4c));
      }
    }
  }
  return uVar13;
}

