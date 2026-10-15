/*
 * FUN_100df3e0 at 100df3e0
 * undefined FUN_100df3e0(void)
 * Address ranges: 100df3e0-100df967
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100df3e0(int param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 local_70;
  uint local_6c;
  uint *local_68;
  int *local_64;
  uint *local_60;
  uint local_5c;
  undefined4 local_58;
  int iStack_54;
  undefined4 local_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar1 = (uint *)(param_1 + 0x10);
  if (*puVar1 < param_2) {
    return 0xffffffff;
  }
  uVar18 = param_1 + 0x1c;
  (*(code *)PTR_FUN_10134070)(uVar18);
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar2 = (uint *)(param_1 + 0x48);
  uVar16 = 0;
  piVar11 = (int *)0xffffffff;
  if (*puVar2 != 0) {
    local_64 = (int *)0xffffffff;
    local_6c = param_2;
    local_68 = puVar2;
    local_60 = puVar1;
    local_5c = uVar18;
    if (*puVar2 == 0) {
      iVar7 = 0;
      goto LAB_100df478;
    }
    do {
      iVar7 = *(int *)(param_1 + 0x44) + uVar16 * 0x10 + 8;
LAB_100df478:
      uVar6 = (*pcVar5)();
      uVar8 = (*extraout_w11)(uVar6);
      uVar18 = *(uint *)(iVar7 + 4);
      uVar12 = (ulonglong)uVar18;
      uVar13 = 0xffffffff;
      uVar17 = *(uint *)(uVar18 + 0xc);
      if (uVar17 != 0xffffffff) {
        do {
          uVar10 = (ulonglong)uVar17;
          piVar11 = (int *)(*(int *)uVar12 + uVar17 * 0x18);
          if (*piVar11 == -1) break;
          puVar1 = (uint *)(piVar11 + 4);
          if (uVar8 < *(ulonglong *)(piVar11 + 2)) {
            uVar17 = *puVar1;
            uVar13 = uVar10;
          }
          else {
            uVar9 = uVar17;
            param_1 = FUN_100df258(param_1,*piVar11,piVar11[1]);
            uVar17 = *puVar1;
            *piVar11 = -1;
            iVar7 = (int)uVar13;
            if (uVar17 != 0xffffffff) {
              piVar11 = (int *)uVar12;
              if (*(int *)(*piVar11 + uVar17 * 0x18) != -1) {
                if (iVar7 == -1) {
                  *(uint *)(uVar18 + 0xc) = uVar17;
                }
                else {
                  *(uint *)(*piVar11 + iVar7 * 0x18 + 0x10) = uVar17;
                }
                *puVar1 = *(uint *)(*piVar11 + *(int *)(uVar18 + 0x10) * 0x18 + 0x10);
                *(uint *)(*piVar11 + *(int *)(uVar18 + 0x10) * 0x18 + 0x10) = uVar9;
                goto LAB_100df5a8;
              }
            }
            if (iVar7 != -1) {
              *(int *)(uVar18 + 0x10) = iVar7;
            }
          }
LAB_100df5a8:
        } while (uVar17 != 0xffffffff);
      }
      uVar16 = uVar16 + 1;
      uVar18 = local_5c;
      piVar11 = local_64;
      param_2 = local_6c;
      puVar1 = local_60;
    } while (uVar16 < *local_68);
  }
  local_64 = (int *)(param_1 + 0x38);
  puVar2 = (uint *)(param_1 + 0x34);
  if (*local_64 < 1) {
LAB_100df730:
    local_70 = 0;
    local_50 = *(undefined4 *)(param_1 + 0xc);
    uStack_4c = *puVar1;
    local_48 = *(undefined4 *)(param_1 + 0x14);
    uStack_44 = 0;
    uVar6 = (*pcVar5)();
    iVar7 = (*extraout_w11_00)(uVar6,&local_50,&DAT_1012ea50,&local_70);
    if (iVar7 < 0) goto LAB_100df938;
    iVar7 = FUN_100fece0(*puVar1 >> 3);
    if (iVar7 == 0) {
LAB_100df910:
      uVar6 = (*pcVar5)();
      (*extraout_w11_01)(uVar6);
      goto LAB_100df938;
    }
    local_60 = (uint *)(param_1 + 0x38);
    local_58 = local_70;
    local_68 = (uint *)(param_1 + 0x3c);
    uVar16 = *local_68;
    iStack_54 = iVar7;
    if (*local_60 == uVar16) {
      local_5c = uVar16 << 1;
      if (uVar16 == 0) {
        local_5c = 0x10;
      }
      iVar15 = local_5c * 8;
      if (local_5c >> 0x1d != 0) {
        iVar15 = -1;
      }
      local_6c = FUN_100fece0(iVar15);
      if (local_6c == 0) {
        FUN_100fed00(iVar7);
        goto LAB_100df910;
      }
      FUN_100ff660(local_6c,*puVar2,((ulonglong)*local_68 & 0x1fffffff) << 3);
      FUN_100fed00(*puVar2);
      *puVar2 = local_6c;
      *local_68 = local_5c;
    }
    *(ulonglong *)(*puVar2 + *local_60 * 8) = CONCAT44(iStack_54,local_58);
    *local_60 = *local_60 + 1;
    FUN_100ff690(iVar7,0,*puVar1 >> 3);
    iVar7 = *local_64 + -1;
    if (iVar7 == -1) goto LAB_100df938;
    uVar16 = 0;
  }
  else {
    uVar16 = 0xffffffff;
    iVar7 = 0;
    do {
      if (uVar16 != 0xffffffff) goto LAB_100df728;
      uVar9 = *puVar1;
      uVar13 = 0;
      pbVar4 = *(byte **)(*puVar2 + iVar7 * 8 + 4);
      uVar17 = -(uint)((*pbVar4 & 1) != 0);
      uVar16 = 0xffffffff;
      if (uVar9 != 0) {
        do {
          if (uVar17 == 0xffffffff) {
            uVar16 = -1 << (ulonglong)((uint)uVar13 & 0x1f);
            uVar17 = (uint)uVar13 & 0xffffffe0;
            for (puVar3 = (uint *)(pbVar4 + (int)(uVar13 >> 5) * 4); puVar3 < pbVar4 + (uVar9 >> 3);
                puVar3 = puVar3 + 1) {
              uVar16 = uVar16 & (*puVar3 ^ 0xffffffff);
              uVar16 = (uVar16 & 0xaaaaaaaa) >> 1 | (uVar16 & 0x55555555) << 1;
              uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
              uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
              if ((1 - (uVar16 >> 5) & 0xff) != 0) {
                uVar17 = uVar16 + uVar17;
                break;
              }
              uVar17 = uVar17 + 0x20;
              uVar16 = 0xffffffff;
            }
          }
          else {
            uVar16 = -1 << (ulonglong)(uVar17 & 0x1f);
            uVar14 = uVar17 & 0xffffffe0;
            for (puVar3 = (uint *)(pbVar4 + (uVar17 >> 5) * 4); puVar3 < pbVar4 + (uVar9 >> 3);
                puVar3 = puVar3 + 1) {
              uVar16 = (uVar16 & *puVar3 & 0xaaaaaaaa) >> 1 | (uVar16 & *puVar3 & 0x55555555) << 1;
              uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
              uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
              if ((1 - (uVar16 >> 5) & 0xff) != 0) {
                uVar14 = uVar16 + uVar14;
                break;
              }
              uVar14 = uVar14 + 0x20;
              if (uVar9 < uVar14 - uVar17) break;
              uVar16 = 0xffffffff;
            }
            uVar16 = uVar17;
            if (param_2 <= uVar14 - uVar17) break;
            uVar13 = (ulonglong)uVar14;
            uVar17 = 0xffffffff;
          }
          uVar16 = 0xffffffff;
        } while ((uint)uVar13 < uVar9);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *local_64);
    if (uVar16 == 0xffffffff) goto LAB_100df730;
LAB_100df728:
    iVar7 = iVar7 + -1;
  }
  param_2 = uVar16 + param_2;
  if (uVar16 < param_2) {
    iVar15 = *(int *)(*puVar2 + iVar7 * 8 + 4);
    uVar17 = uVar16;
    do {
      uVar9 = -1 << (ulonglong)(uVar17 & 0x1f);
      uVar14 = uVar17 >> 5;
      uVar17 = (uVar17 & 0xffffffe0) + 0x20;
      puVar1 = (uint *)(iVar15 + uVar14 * 4);
      if (param_2 < uVar17) {
        uVar9 = uVar9 & 0xffffffffU >> (ulonglong)(0x20 - param_2 & 0x1f);
      }
      *puVar1 = uVar9 | *puVar1;
    } while (uVar17 < param_2);
  }
  piVar11 = (int *)(uVar16 | iVar7 << 0x10);
LAB_100df938:
  (*(code *)PTR_FUN_101340bc)(uVar18);
  return (uint)piVar11;
}

