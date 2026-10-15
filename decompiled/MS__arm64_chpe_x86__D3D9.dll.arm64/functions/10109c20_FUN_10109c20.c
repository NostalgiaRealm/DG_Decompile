/*
 * FUN_10109c20 at 10109c20
 * undefined FUN_10109c20(void)
 * Address ranges: 10109c20-1010a4c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10109c20(int param_1,int param_2,int *param_3,int *param_4,int param_5,uint param_6)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  ulonglong uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint *local_60;
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  param_1 = param_1 + param_2 * 0x1510;
  if ((param_6 & 1) == 0) {
    piVar14 = (int *)(param_1 + 0x834);
    local_60 = (uint *)(param_1 + 0x83c);
    uVar15 = 0;
    uVar16 = *local_60;
    uVar17 = 0x20;
    if (param_3[0x1a] == 0) {
      uVar17 = 0;
    }
    uVar13 = 0x10;
    if (param_3[0x12] == 0) {
      uVar13 = 0;
    }
    uVar3 = 8;
    if (param_3[10] == 0) {
      uVar3 = 0;
    }
    uVar4 = 4;
    if (param_3[2] == 0) {
      uVar4 = 0;
    }
    uVar5 = 2;
    if (param_3[1] == 0) {
      uVar5 = 0;
    }
    uVar17 = (ulonglong)
             (param_3[3] & 0x1fU |
             (param_3[4] & 0x1fU |
             (param_3[5] & 7U | (param_3[6] & 0x1fU | (param_3[7] & 0x1fU) << 5) << 3) << 5) << 5)
             << 6 | ((ulonglong)(uint)param_3[8] & 7 |
                    ((ulonglong)*(byte *)(param_3 + 9) & 0xffffffffffff000f |
                    ((ulonglong)*(byte *)(param_3 + 0x11) & 0xfffffffffffff00f |
                    ((ulonglong)*(byte *)(param_3 + 0x19) & 0xffffffffffffff0f |
                    ((ulonglong)*(byte *)(param_3 + 0x21) & 0xf) << 4) << 4) << 4) << 5) << 0x1d |
             uVar17 | uVar13 | uVar3 | uVar4 | uVar5 | (ulonglong)(*param_3 != 0);
    if (uVar16 != 0) {
      uVar12 = 0;
      uVar11 = uVar16;
      do {
        uVar15 = uVar11 + uVar12 >> 1;
        uVar13 = *(ulonglong *)(*piVar14 + uVar15 * 0x118);
        uVar7 = uVar15;
        if (uVar13 <= uVar17) {
          if (uVar17 <= uVar13) break;
          uVar12 = uVar15 + 1;
          uVar15 = uVar12;
          uVar7 = uVar11;
        }
        uVar11 = uVar7;
      } while (uVar11 != uVar12);
      if ((uVar15 != uVar16) && (iVar9 = uVar15 * 0x118, *(ulonglong *)(iVar9 + *piVar14) == uVar17)
         ) goto LAB_1010a390;
    }
    puVar1 = (uint *)(param_1 + 0x838);
    if (uVar16 == *puVar1) {
      uVar13 = (ulonglong)(*puVar1 << 1) * 0x118;
      uVar10 = (undefined4)uVar13;
      if (uVar13 >> 0x20 != 0) {
        uVar10 = 0xffffffff;
      }
      iVar9 = FUN_101322b0(uVar10);
      if (iVar9 != 0) {
        if (*puVar1 != 0) {
          uVar16 = 0;
          do {
            FUN_101325a0(iVar9 + uVar16 * 0x118,*piVar14 + uVar16 * 0x118,0x118);
            uVar16 = uVar16 + 1;
          } while (uVar16 < *puVar1);
        }
        FUN_101322d0(*piVar14);
        *piVar14 = iVar9;
        *puVar1 = *puVar1 << 1;
      }
    }
    for (uVar16 = *local_60; uVar15 < uVar16; uVar16 = uVar16 - 1) {
      iVar9 = *piVar14 + uVar16 * 0x118;
      FUN_101325a0(iVar9,iVar9 + -0x118,0x118);
    }
    iVar9 = uVar15 * 0x118;
    *(ulonglong *)(iVar9 + *piVar14) = uVar17;
    FUN_101325a0(iVar9 + *piVar14 + 8,param_3,0x108);
    uVar10 = FUN_10109b60(*(undefined4 *)(param_1 + 0x840),*(undefined4 *)(param_1 + 0x844),param_3)
    ;
  }
  else {
    piVar14 = (int *)(param_1 + 0x848);
    uVar16 = 0;
    uVar17 = 2;
    if (param_3[1] == 0) {
      uVar17 = 0;
    }
    uVar13 = 4;
    if (param_3[2] == 0) {
      uVar13 = 0;
    }
    uVar3 = 8;
    if (param_3[10] == 0) {
      uVar3 = 0;
    }
    uVar4 = 0x10;
    if (param_3[0x12] == 0) {
      uVar4 = 0;
    }
    uVar5 = 0x20;
    if (param_3[0x1a] == 0) {
      uVar5 = 0;
    }
    uVar17 = ((ulonglong)
              (param_3[0x14] & 0x1fU |
              (param_3[0x15] & 7U |
              (param_3[0x16] & 0x1fU | (param_3[0x17] & 0x1fU | (param_3[0x18] & 7U) << 5) << 5) <<
              3) << 5) << 5 |
              ((ulonglong)(uint)param_3[0x1b] & 0x1f |
              ((ulonglong)(uint)param_3[0x1c] & 0x1f |
              ((ulonglong)(uint)param_3[0x1d] & 7 |
              ((ulonglong)(uint)param_3[0x1e] & 0x1f |
              ((ulonglong)(uint)param_3[0x1f] & 0x1f | ((ulonglong)(uint)param_3[0x20] & 7) << 5) <<
              5) << 3) << 5) << 5) << 0x20 | (ulonglong)(uint)param_3[0x13] & 0x1f) +
             ((ulonglong)
              (param_3[4] & 0x1fU |
              (param_3[5] & 7U |
              (param_3[6] & 0x1fU | (param_3[7] & 0x1fU | (param_3[8] & 7U) << 5) << 5) << 3) << 5)
              << 5 | ((ulonglong)(uint)param_3[0xb] & 0x1f |
                     ((ulonglong)(uint)param_3[0xc] & 0x1f |
                     ((ulonglong)(uint)param_3[0xd] & 7 |
                     ((ulonglong)(uint)param_3[0xe] & 0x1f |
                     ((ulonglong)(uint)param_3[0xf] & 0x1f |
                     ((ulonglong)(uint)param_3[0x10] & 7) << 5) << 5) << 3) << 5) << 5) << 0x20 |
             (ulonglong)(uint)param_3[3] & 0x1f) +
             ((ulonglong)(*param_3 != 0) |
              ((ulonglong)*(byte *)(param_3 + 9) & 0xffffffffffff000f |
              ((ulonglong)*(byte *)(param_3 + 0x11) & 0xfffffffffffff00f |
              ((ulonglong)*(byte *)(param_3 + 0x19) & 0xffffffffffffff0f |
              ((ulonglong)*(byte *)(param_3 + 0x21) & 0xf) << 4) << 4) << 4) << 0x22 | uVar17 |
              uVar13 | uVar3 | uVar4 | uVar5);
    local_60 = (uint *)(param_1 + 0x850);
    uVar15 = *local_60;
    if (uVar15 != 0) {
      uVar12 = 0;
      uVar11 = uVar15;
      do {
        uVar16 = uVar11 + uVar12 >> 1;
        uVar13 = *(ulonglong *)(*piVar14 + uVar16 * 0x118);
        uVar7 = uVar16;
        if (uVar13 <= uVar17) {
          if (uVar17 <= uVar13) break;
          uVar12 = uVar16 + 1;
          uVar16 = uVar12;
          uVar7 = uVar11;
        }
        uVar11 = uVar7;
      } while (uVar11 != uVar12);
      if (uVar16 != uVar15) {
        iVar9 = uVar16 * 0x118;
        puVar2 = (ulonglong *)(iVar9 + *piVar14);
        if (*puVar2 == uVar17) {
          if ((((*param_3 != (int)puVar2[1]) || (param_3[1] != *(int *)((int)puVar2 + 0xc))) ||
              (iVar8 = FUN_10132550(param_3 + 2,puVar2 + 2,0x20), iVar8 != 0)) ||
             (((iVar8 = FUN_10132550(param_3 + 10,puVar2 + 6,0x20), iVar8 != 0 ||
               (iVar8 = FUN_10132550(param_3 + 0x12,puVar2 + 10,0x20), iVar8 != 0)) ||
              (iVar8 = FUN_10132550(param_3 + 0x1a,puVar2 + 0xe,0x20), iVar8 != 0)))) {
            uVar10 = (*pcVar6)();
            (*extraout_w11)(uVar10);
            *(ulonglong *)(iVar9 + *piVar14) = uVar17;
            FUN_101325a0(iVar9 + *piVar14 + 8,param_3,0x108);
            uVar10 = FUN_10109b60(*(undefined4 *)(param_1 + 0x854),*(undefined4 *)(param_1 + 0x858),
                                  param_3);
            *(undefined4 *)(iVar9 + *piVar14 + 0x110) = uVar10;
          }
          goto LAB_1010a390;
        }
      }
    }
    puVar1 = (uint *)(param_1 + 0x84c);
    if (uVar15 == *puVar1) {
      uVar13 = (ulonglong)(*puVar1 << 1) * 0x118;
      uVar10 = (undefined4)uVar13;
      if (uVar13 >> 0x20 != 0) {
        uVar10 = 0xffffffff;
      }
      iVar9 = FUN_101322b0(uVar10);
      if (iVar9 != 0) {
        if (*puVar1 != 0) {
          uVar15 = 0;
          do {
            FUN_101325a0(iVar9 + uVar15 * 0x118,*piVar14 + uVar15 * 0x118,0x118);
            uVar15 = uVar15 + 1;
          } while (uVar15 < *puVar1);
        }
        FUN_101322d0(*piVar14);
        *piVar14 = iVar9;
        *puVar1 = *puVar1 << 1;
      }
    }
    for (uVar15 = *local_60; uVar16 < uVar15; uVar15 = uVar15 - 1) {
      iVar9 = *piVar14 + uVar15 * 0x118;
      FUN_101325a0(iVar9,iVar9 + -0x118,0x118);
    }
    iVar9 = uVar16 * 0x118;
    *(ulonglong *)(iVar9 + *piVar14) = uVar17;
    FUN_101325a0(iVar9 + *piVar14 + 8,param_3,0x108);
    uVar10 = FUN_10109b60(*(undefined4 *)(param_1 + 0x854),*(undefined4 *)(param_1 + 0x858),param_3)
    ;
  }
  *(undefined4 *)(iVar9 + *piVar14 + 0x110) = uVar10;
  *local_60 = *local_60 + 1;
LAB_1010a390:
  iVar9 = *(int *)(iVar9 + *piVar14 + 0x110);
  if (((iVar9 != *(int *)(param_1 + 0x530)) || (param_5 != *(int *)(param_1 + 0x53c))) ||
     ((param_4 != (int *)0x0 &&
      ((((*param_4 != *(int *)(param_1 + 0x540) || (param_4[1] != *(int *)(param_1 + 0x544))) ||
        (param_4[2] != *(int *)(param_1 + 0x548))) || (param_4[3] != *(int *)(param_1 + 0x54c)))))))
  {
    uVar10 = (*pcVar6)();
    (*extraout_w11_00)(uVar10,iVar9,param_4,param_5);
    *(int *)(param_1 + 0x530) = iVar9;
    *(int *)(param_1 + 0x53c) = param_5;
    if (param_4 != (int *)0x0) {
      *(int *)(param_1 + 0x540) = *param_4;
      *(int *)(param_1 + 0x544) = param_4[4];
      *(int *)(param_1 + 0x548) = param_4[8];
      *(int *)(param_1 + 0x54c) = param_4[0xc];
    }
  }
  return;
}

