/*
 * FUN_100eb418 at 100eb418
 * undefined FUN_100eb418(void)
 * Address ranges: 100eb418-100eb8d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100eb418(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 ulonglong param_6)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  int *piVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  code *extraout_w11;
  ulonglong uVar16;
  int *piVar17;
  undefined8 uVar18;
  
  (*(code *)PTR_FUN_10134070)(param_1 + 0xc);
  if (param_5 != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar10 = (*extraout_w11)(param_5);
    if (uVar10 < param_6) {
      uVar11 = *(uint *)(param_1 + 0x54);
      uVar10 = (ulonglong)param_5;
      if (uVar11 == 0) {
LAB_100eb528:
        piVar9 = (int *)FUN_100febf0(0x14);
        if (piVar9 == (int *)0x0) goto LAB_100eb8ac;
        piVar9[0] = 0;
        piVar9[1] = 0;
        piVar9[2] = 0;
        piVar9[3] = -1;
        piVar9[4] = -1;
        puVar2 = (uint *)(param_1 + 0x54);
        uVar11 = *puVar2;
        uVar12 = 0;
        if (uVar11 != 0) {
          uVar15 = 0;
          uVar14 = uVar11;
          do {
            uVar12 = uVar14 + uVar15 >> 1;
            uVar16 = *(ulonglong *)(*(int *)(param_1 + 0x50) + uVar12 * 0x10);
            uVar8 = uVar12;
            if (uVar16 <= uVar10) {
              if (uVar10 <= uVar16) break;
              uVar15 = uVar12 + 1;
              uVar12 = uVar15;
              uVar8 = uVar14;
            }
            uVar14 = uVar8;
          } while (uVar14 != uVar15);
          if ((uVar12 != uVar11) &&
             (puVar5 = (ulonglong *)(*(int *)(param_1 + 0x50) + uVar12 * 0x10), *puVar5 == uVar10))
          {
            *(int **)((int)puVar5 + 0xc) = piVar9;
            goto LAB_100eb728;
          }
        }
        puVar3 = (uint *)(param_1 + 0x58);
        uVar15 = *puVar3;
        if (uVar15 == uVar11) {
          uVar11 = 0x10;
          if (uVar15 != 0) {
            uVar11 = uVar15 << 1;
          }
          iVar13 = FUN_100fece0(uVar11 << 4);
          if (iVar13 != 0) {
            uVar15 = 0;
            if (*puVar2 != 0) {
              do {
                puVar7 = (undefined8 *)(*(int *)(param_1 + 0x50) + uVar15 * 0x10);
                puVar6 = (undefined8 *)(iVar13 + uVar15 * 0x10);
                uVar15 = uVar15 + 1;
                uVar18 = *puVar7;
                puVar6[1] = puVar7[1];
                *puVar6 = uVar18;
              } while (uVar15 < *(uint *)(param_1 + 0x54));
            }
            FUN_100fed00(*(int *)(param_1 + 0x4c));
            *(int *)(param_1 + 0x4c) = iVar13;
            *(int *)(param_1 + 0x50) = iVar13;
            *puVar3 = uVar11;
          }
        }
        piVar17 = (int *)(param_1 + 0x50);
        uVar11 = *puVar2;
        if (*puVar3 != uVar11) {
          for (; uVar12 < uVar11; uVar11 = uVar11 - 1) {
            puVar7 = (undefined8 *)(*piVar17 + uVar11 * 0x10);
            puVar7[1] = puVar7[-1];
            *puVar7 = puVar7[-2];
          }
          *puVar2 = *puVar2 + 1;
          *(int *)(*piVar17 + uVar12 * 0x10 + 8) = param_5;
          *(int **)(*piVar17 + uVar12 * 0x10 + 0xc) = piVar9;
          *(ulonglong *)(*piVar17 + uVar12 * 0x10) = uVar10;
        }
      }
      else {
        uVar12 = 0;
        uVar15 = uVar11;
        do {
          uVar14 = uVar15 + uVar12 >> 1;
          uVar16 = *(ulonglong *)(*(int *)(param_1 + 0x50) + uVar14 * 0x10);
          uVar8 = uVar14;
          if (uVar16 <= uVar10) {
            if (uVar10 <= uVar16) break;
            uVar12 = uVar14 + 1;
            uVar14 = uVar12;
            uVar8 = uVar15;
          }
          uVar15 = uVar8;
        } while (uVar15 != uVar12);
        if (((uVar14 == uVar11) ||
            (puVar5 = (ulonglong *)(*(int *)(param_1 + 0x50) + uVar14 * 0x10), *puVar5 != uVar10))
           || (puVar1 = (undefined4 *)((int)puVar5 + 0xc), puVar1 == (undefined4 *)0x0))
        goto LAB_100eb528;
        piVar9 = (int *)*puVar1;
        if (piVar9 == (int *)0x0) goto LAB_100eb8ac;
      }
LAB_100eb728:
      puVar2 = (uint *)(piVar9 + 4);
      uVar11 = *puVar2;
      if (uVar11 != 0xffffffff) {
        iVar13 = *piVar9 + uVar11 * 0x20;
        if ((*(int *)(iVar13 + 0x18) == 0) ||
           (uVar11 = *(uint *)(iVar13 + 0x1c), uVar11 != 0xffffffff)) {
          *(undefined4 *)(*piVar9 + uVar11 * 0x20 + 0x18) = param_2;
          *(undefined8 *)(*piVar9 + uVar11 * 0x20) = param_3;
          *(undefined8 *)(*piVar9 + uVar11 * 0x20 + 8) = param_4;
          *(ulonglong *)(*piVar9 + uVar11 * 0x20 + 0x10) = param_6;
          *puVar2 = uVar11;
          goto LAB_100eb8ac;
        }
      }
      puVar3 = (uint *)(piVar9 + 1);
      puVar4 = (uint *)(piVar9 + 2);
      uVar11 = *puVar3;
      uVar12 = *puVar4;
      if (uVar11 == uVar12) {
        uVar15 = uVar12 << 1;
        if (uVar12 == 0) {
          uVar15 = 0x10;
        }
        iVar13 = uVar15 * 0x20;
        if (uVar15 >> 0x1b != 0) {
          iVar13 = -1;
        }
        iVar13 = FUN_100fece0(iVar13);
        if (iVar13 == 0) goto LAB_100eb8ac;
        FUN_100ff660(iVar13,*piVar9,((ulonglong)*puVar4 & 0x7ffffff) << 5);
        FUN_100fed00(*piVar9);
        *piVar9 = iVar13;
        *puVar4 = uVar15;
      }
      puVar7 = (undefined8 *)(*piVar9 + *puVar3 * 0x20);
      *puVar7 = param_3;
      puVar7[1] = param_4;
      puVar7[2] = param_6;
      *(undefined4 *)(puVar7 + 3) = param_2;
      *(undefined4 *)((int)puVar7 + 0x1c) = 0xffffffff;
      *puVar3 = *puVar3 + 1;
      if (*puVar2 != 0xffffffff) {
        *(uint *)(*piVar9 + *puVar2 * 0x20 + 0x1c) = uVar11;
      }
      *puVar2 = uVar11;
      if (piVar9[3] == 0xffffffff) {
        piVar9[3] = uVar11;
      }
      goto LAB_100eb8ac;
    }
  }
  FUN_100ea600(param_1,param_2,param_3,param_4);
LAB_100eb8ac:
  (*(code *)PTR_FUN_101340bc)(param_1 + 0xc);
  return;
}

