/*
 * FUN_1005ee10 at 1005ee10
 * undefined FUN_1005ee10(void)
 * Address ranges: 1005ee10-1005f2b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005ee10(int param_1,int param_2,undefined4 param_3,int param_4,ulonglong param_5)

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
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  code *extraout_w11;
  ulonglong uVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined4 uStack_4c;
  
  if (param_2 == -1) {
    return;
  }
  (*(code *)PTR_FUN_1009d03c)(param_1 + 0x1c);
  if (param_4 != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar11 = (*extraout_w11)(param_4);
    if (uVar11 < param_5) {
      uVar12 = *(uint *)(param_1 + 0x48);
      uVar11 = (ulonglong)param_4;
      if (uVar12 == 0) {
LAB_1005ef20:
        piVar9 = (int *)FUN_1007a3d0(0x14);
        if (piVar9 == (int *)0x0) goto LAB_1005f28c;
        piVar9[0] = 0;
        piVar9[1] = 0;
        piVar9[2] = 0;
        piVar9[3] = -1;
        piVar9[4] = -1;
        puVar2 = (uint *)(param_1 + 0x48);
        uVar12 = *puVar2;
        uVar13 = 0;
        if (uVar12 != 0) {
          uVar16 = 0;
          uVar15 = uVar12;
          do {
            uVar13 = uVar15 + uVar16 >> 1;
            uVar17 = *(ulonglong *)(*(int *)(param_1 + 0x44) + uVar13 * 0x10);
            uVar8 = uVar13;
            if (uVar17 <= uVar11) {
              if (uVar11 <= uVar17) break;
              uVar16 = uVar13 + 1;
              uVar13 = uVar16;
              uVar8 = uVar15;
            }
            uVar15 = uVar8;
          } while (uVar15 != uVar16);
          if ((uVar13 != uVar12) &&
             (puVar5 = (ulonglong *)(*(int *)(param_1 + 0x44) + uVar13 * 0x10), *puVar5 == uVar11))
          {
            *(int **)((int)puVar5 + 0xc) = piVar9;
            goto LAB_1005f120;
          }
        }
        puVar3 = (uint *)(param_1 + 0x4c);
        uVar16 = *puVar3;
        if (uVar16 == uVar12) {
          uVar12 = 0x10;
          if (uVar16 != 0) {
            uVar12 = uVar16 << 1;
          }
          iVar10 = FUN_1007a4c0(uVar12 << 4);
          if (iVar10 != 0) {
            uVar16 = 0;
            if (*puVar2 != 0) {
              do {
                puVar7 = (undefined8 *)(*(int *)(param_1 + 0x44) + uVar16 * 0x10);
                puVar6 = (undefined8 *)(iVar10 + uVar16 * 0x10);
                uVar16 = uVar16 + 1;
                uVar19 = *puVar7;
                puVar6[1] = puVar7[1];
                *puVar6 = uVar19;
              } while (uVar16 < *(uint *)(param_1 + 0x48));
            }
            FUN_1007a4e0(*(int *)(param_1 + 0x40));
            *(int *)(param_1 + 0x40) = iVar10;
            *(int *)(param_1 + 0x44) = iVar10;
            *puVar3 = uVar12;
          }
        }
        piVar18 = (int *)(param_1 + 0x44);
        uVar12 = *puVar2;
        if (*puVar3 != uVar12) {
          for (; uVar13 < uVar12; uVar12 = uVar12 - 1) {
            puVar7 = (undefined8 *)(*piVar18 + uVar12 * 0x10);
            puVar7[1] = puVar7[-1];
            *puVar7 = puVar7[-2];
          }
          *puVar2 = *puVar2 + 1;
          *(int *)(*piVar18 + uVar13 * 0x10 + 8) = param_4;
          *(int **)(*piVar18 + uVar13 * 0x10 + 0xc) = piVar9;
          *(ulonglong *)(*piVar18 + uVar13 * 0x10) = uVar11;
        }
      }
      else {
        uVar13 = 0;
        uVar16 = uVar12;
        do {
          uVar15 = uVar16 + uVar13 >> 1;
          uVar17 = *(ulonglong *)(*(int *)(param_1 + 0x44) + uVar15 * 0x10);
          uVar8 = uVar15;
          if (uVar17 <= uVar11) {
            if (uVar11 <= uVar17) break;
            uVar13 = uVar15 + 1;
            uVar15 = uVar13;
            uVar8 = uVar16;
          }
          uVar16 = uVar8;
        } while (uVar16 != uVar13);
        if (((uVar15 == uVar12) ||
            (puVar5 = (ulonglong *)(*(int *)(param_1 + 0x44) + uVar15 * 0x10), *puVar5 != uVar11))
           || (puVar1 = (undefined4 *)((int)puVar5 + 0xc), puVar1 == (undefined4 *)0x0))
        goto LAB_1005ef20;
        piVar9 = (int *)*puVar1;
        if (piVar9 == (int *)0x0) goto LAB_1005f28c;
      }
LAB_1005f120:
      puVar2 = (uint *)(piVar9 + 4);
      uVar12 = *puVar2;
      if (uVar12 != 0xffffffff) {
        piVar18 = (int *)(*piVar9 + uVar12 * 0x18);
        if ((*piVar18 == -1) || (uVar12 = piVar18[4], uVar12 != 0xffffffff)) {
          *(int *)(*piVar9 + uVar12 * 0x18) = param_2;
          *(undefined4 *)(*piVar9 + uVar12 * 0x18 + 4) = param_3;
          *(ulonglong *)(*piVar9 + uVar12 * 0x18 + 8) = param_5;
          *puVar2 = uVar12;
          goto LAB_1005f28c;
        }
      }
      puVar3 = (uint *)(piVar9 + 2);
      puVar4 = (uint *)(piVar9 + 1);
      uVar12 = *puVar3;
      uVar13 = *puVar4;
      if (uVar13 == uVar12) {
        uVar16 = uVar12 << 1;
        if (uVar12 == 0) {
          uVar16 = 0x10;
        }
        uVar14 = (undefined4)((ulonglong)uVar16 * 0x18);
        if ((ulonglong)uVar16 * 0x18 >> 0x20 != 0) {
          uVar14 = 0xffffffff;
        }
        iVar10 = FUN_1007a4c0(uVar14);
        if (iVar10 == 0) goto LAB_1005f28c;
        FUN_1007ac00(iVar10,*piVar9,((ulonglong)(*puVar3 * 3) & 0x1fffffff) << 3);
        FUN_1007a4e0(*piVar9);
        *piVar9 = iVar10;
        *puVar3 = uVar16;
      }
      puVar7 = (undefined8 *)(*piVar9 + *puVar4 * 0x18);
      puVar7[1] = param_5;
      *puVar7 = CONCAT44(param_3,param_2);
      puVar7[2] = CONCAT44(uStack_4c,0xffffffff);
      *puVar4 = *puVar4 + 1;
      if (*puVar2 != 0xffffffff) {
        *(uint *)(*piVar9 + *puVar2 * 0x18 + 0x10) = uVar13;
      }
      *puVar2 = uVar13;
      if (piVar9[3] == 0xffffffff) {
        piVar9[3] = uVar13;
      }
      goto LAB_1005f28c;
    }
  }
  FUN_1005e718(param_1,param_2,param_3);
LAB_1005f28c:
  (*(code *)PTR_FUN_1009d090)(param_1 + 0x1c);
  return;
}

