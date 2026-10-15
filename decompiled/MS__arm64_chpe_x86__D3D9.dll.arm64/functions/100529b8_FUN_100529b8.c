/*
 * FUN_100529b8 at 100529b8
 * undefined FUN_100529b8(void)
 * Address ranges: 100529b8-10052e97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100529b8(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 extraout_w15;
  uint uVar19;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  int *local_70;
  uint *local_6c;
  int *local_68;
  undefined1 auStack_64 [4];
  int local_60 [8];
  
  pcVar11 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_68 = (int *)(param_1 + 0x10);
  local_70 = (int *)(param_1 + 8);
  iVar18 = *local_70;
  iVar10 = iVar18 + *local_68 * 0x16c0;
  iVar12 = *(int *)(param_1 + 0x18);
  if (iVar12 == 1) {
    iVar12 = 0;
    if (iVar18 != 0) {
      iVar12 = iVar18 + 0x508;
    }
    iVar16 = 0x1a90;
    if (*(char *)(param_1 + 0x21) == '\0') {
      iVar16 = 0x1a30;
    }
    iVar6 = 0;
    if (iVar18 != 0) {
      iVar6 = iVar18 + 0x520;
    }
    iVar12 = FUN_1011bb08(iVar6,*local_68,iVar16 + iVar10,*(undefined4 *)(param_1 + 0x14),iVar12);
LAB_10052d74:
    if (iVar12 != 0) goto LAB_10052d7c;
LAB_10052e90:
    uVar15 = 0;
  }
  else {
    iVar18 = 1;
    if (iVar12 == 2 || iVar12 == 3) {
      iVar18 = 2;
    }
    local_6c = (uint *)(param_1 + 0x14);
    uVar9 = *local_6c;
    local_74 = iVar10 + 0x1c00;
    local_88 = (ulonglong)uVar9;
    (*(code *)PTR_FUN_1016c074)(local_74);
    iVar12 = 0;
    piVar13 = (int *)FUN_1011c558(iVar10 + 0x1c1c,&local_88);
    if (piVar13 != (int *)0x0) {
      uVar19 = *(uint *)(*piVar13 + 4);
      local_78 = extraout_w15;
      do {
        if (uVar19 == 0) break;
        uVar14 = (*pcVar11)();
        (*extraout_w11)(uVar14,local_60,auStack_64);
        if (local_60[0] == iVar18) {
          piVar7 = (int *)*piVar13;
          puVar3 = (uint *)(piVar7 + 1);
          uVar17 = *puVar3;
          uVar15 = *(undefined8 *)(*piVar7 + uVar19 * 8 + -8);
          if (uVar19 - 1 < uVar17) {
            uVar1 = uVar19;
            if (uVar19 < uVar17) {
              do {
                puVar5 = (undefined8 *)(*piVar7 + uVar1 * 8);
                uVar1 = uVar1 + 1;
                puVar5[-1] = *puVar5;
                uVar17 = *puVar3;
              } while (uVar1 < uVar17);
            }
            *puVar3 = uVar17 - 1;
          }
          *(longlong *)(iVar10 + 0x1bf8) = *(longlong *)(iVar10 + 0x1bf8) - (ulonglong)uVar9;
          puVar8 = (undefined4 *)*piVar13;
          local_80 = uVar15;
          if (puVar8[1] == 0) {
            if (puVar8 != (undefined4 *)0x0) {
              FUN_101322d0(*puVar8);
              FUN_10132260(puVar8,0xc);
            }
            FUN_1011c5e8(local_78,&local_88);
          }
          piVar7 = (int *)(iVar10 + 0x1c2c);
          iVar12 = (int)((ulonglong)uVar15 >> 0x20);
          if (iVar12 == *(int *)(iVar10 + 0x1c38)) {
            FUN_1012ba20(piVar7);
          }
          else {
            piVar2 = (int *)(iVar10 + 0x1c3c);
            if (iVar12 == *piVar2) {
              *(undefined4 *)(*piVar7 + iVar12 * 0xc) = 0;
              *piVar2 = *(int *)(*piVar7 + iVar12 * 0xc + 4);
            }
            else {
              *(undefined4 *)(*piVar7 + iVar12 * 0xc) = 0;
              iVar16 = *piVar7 + iVar12 * 0xc;
              *(undefined4 *)(*piVar7 + *(int *)(iVar16 + 4) * 0xc + 8) =
                   *(undefined4 *)(iVar16 + 8);
              iVar16 = *piVar7 + iVar12 * 0xc;
              *(undefined4 *)(*piVar7 + *(int *)(iVar16 + 8) * 0xc + 4) =
                   *(undefined4 *)(iVar16 + 4);
              *(undefined4 *)(*piVar7 + iVar12 * 0xc + 8) =
                   *(undefined4 *)(*piVar7 + *piVar2 * 0xc + 8);
              *(int *)(*piVar7 + iVar12 * 0xc + 4) = *piVar2;
              *(int *)(*piVar7 + *piVar2 * 0xc + 8) = iVar12;
              iVar16 = *(int *)(*piVar7 + iVar12 * 0xc + 8);
              if (iVar16 != -1) {
                *(int *)(*piVar7 + iVar16 * 0xc + 4) = iVar12;
              }
            }
          }
          iVar12 = (int)local_80;
        }
        uVar19 = uVar19 - 1;
      } while (iVar12 == 0);
    }
    (*(code *)PTR_FUN_1016c0c0)(local_74);
    if (iVar12 == 0) {
      iVar10 = *local_70;
      iVar12 = 0;
      if (iVar10 != 0) {
        iVar12 = iVar10 + 0x520;
      }
      iVar12 = FUN_1011c788(iVar12,*local_68,*local_6c,iVar18,0,*(undefined4 *)(iVar10 + 0x172c0));
      goto LAB_10052d74;
    }
LAB_10052d7c:
    piVar13 = (int *)(param_1 + 0x24);
    puVar3 = (uint *)(param_1 + 0x2c);
    puVar4 = (uint *)(param_1 + 0x28);
    uVar9 = *puVar3;
    local_88 = CONCAT44(*(undefined4 *)(param_1 + 0x30),iVar12);
    if (*puVar4 == uVar9) {
      uVar19 = uVar9 << 1;
      if (uVar9 == 0) {
        uVar19 = 0x10;
      }
      iVar18 = uVar19 * 8;
      if (uVar19 >> 0x1d != 0) {
        iVar18 = -1;
      }
      iVar18 = FUN_101322b0(iVar18);
      if (iVar18 == 0) {
        if (iVar12 != 0) {
          (*pcVar11)();
          (*extraout_w11_00)(iVar12,1);
        }
        goto LAB_10052e90;
      }
      FUN_101325a0(iVar18,*piVar13,((ulonglong)*puVar3 & 0x1fffffff) << 3);
      FUN_101322d0(*piVar13);
      *piVar13 = iVar18;
      *puVar3 = uVar19;
    }
    uVar15 = 1;
    *(ulonglong *)(*piVar13 + *puVar4 * 8) = local_88;
    *puVar4 = *puVar4 + 1;
    *(int *)(*piVar13 + *(int *)(param_1 + 0x34) * 8 + 4) = *(int *)(param_1 + 0x28) + -1;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x28) + -1;
  }
  return uVar15;
}

