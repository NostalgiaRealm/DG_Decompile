/*
 * FUN_1001d0b0 at 1001d0b0
 * undefined FUN_1001d0b0(void)
 * Address ranges: 1001d0b0-1001d523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1001d0b0(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  code *pcVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar17;
  undefined8 uVar18;
  undefined8 local_78;
  undefined8 local_70;
  int *local_68;
  uint *local_64;
  int *local_60;
  undefined1 auStack_5c [4];
  int local_58 [6];
  
  local_64 = (uint *)(param_1 + 0x14);
  local_60 = (int *)(param_1 + 0x10);
  uVar7 = *local_64;
  local_68 = (int *)(param_1 + 8);
  iVar16 = *local_68 + *local_60 * 0x16c0;
  local_78 = (ulonglong)uVar7;
  (*(code *)PTR_FUN_100a1014)(iVar16 + 0x1c00);
  uVar14 = (ulonglong)(iVar16 + 0x1c1c);
  iVar13 = 0;
  piVar11 = (int *)FUN_100760f8(uVar14,&local_78);
  pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (piVar11 != (int *)0x0) {
    uVar17 = *(uint *)(*piVar11 + 4);
    do {
      if (uVar17 == 0) break;
      uVar12 = (*pcVar10)();
      (*extraout_w11)(uVar12,local_58,auStack_5c);
      if (local_58[0] == 1) {
        piVar8 = (int *)*piVar11;
        puVar3 = (uint *)(piVar8 + 1);
        uVar15 = *puVar3;
        uVar18 = *(undefined8 *)(*piVar8 + uVar17 * 8 + -8);
        if (uVar17 - 1 < uVar15) {
          uVar1 = uVar17;
          if (uVar17 < uVar15) {
            do {
              puVar5 = (undefined8 *)(*piVar8 + uVar1 * 8);
              uVar1 = uVar1 + 1;
              puVar5[-1] = *puVar5;
              uVar15 = *puVar3;
            } while (uVar1 < uVar15);
          }
          *puVar3 = uVar15 - 1;
        }
        *(longlong *)(iVar16 + 0x1bf8) = *(longlong *)(iVar16 + 0x1bf8) - (ulonglong)uVar7;
        puVar9 = (undefined4 *)*piVar11;
        local_70 = uVar18;
        if (puVar9[1] == 0) {
          if (puVar9 != (undefined4 *)0x0) {
            FUN_10081dc0(*puVar9);
            FUN_10081d50(puVar9,0xc);
          }
          FUN_10076188(uVar14 & 0xffffffff,&local_78);
        }
        piVar8 = (int *)(iVar16 + 0x1c2c);
        iVar13 = (int)((ulonglong)uVar18 >> 0x20);
        if (iVar13 == *(int *)(iVar16 + 0x1c38)) {
          FUN_1007fe58(piVar8);
        }
        else {
          piVar2 = (int *)(iVar16 + 0x1c3c);
          if (iVar13 == *piVar2) {
            *(undefined4 *)(*piVar8 + iVar13 * 0xc) = 0;
            *piVar2 = *(int *)(*piVar8 + iVar13 * 0xc + 4);
          }
          else {
            *(undefined4 *)(*piVar8 + iVar13 * 0xc) = 0;
            iVar6 = *piVar8 + iVar13 * 0xc;
            *(undefined4 *)(*piVar8 + *(int *)(iVar6 + 4) * 0xc + 8) = *(undefined4 *)(iVar6 + 8);
            iVar6 = *piVar8 + iVar13 * 0xc;
            *(undefined4 *)(*piVar8 + *(int *)(iVar6 + 8) * 0xc + 4) = *(undefined4 *)(iVar6 + 4);
            *(undefined4 *)(*piVar8 + iVar13 * 0xc + 8) =
                 *(undefined4 *)(*piVar8 + *piVar2 * 0xc + 8);
            *(int *)(*piVar8 + iVar13 * 0xc + 4) = *piVar2;
            *(int *)(*piVar8 + *piVar2 * 0xc + 8) = iVar13;
            iVar6 = *(int *)(*piVar8 + iVar13 * 0xc + 8);
            if (iVar6 != -1) {
              *(int *)(*piVar8 + iVar6 * 0xc + 4) = iVar13;
            }
          }
        }
        iVar13 = (int)local_70;
      }
      uVar17 = uVar17 - 1;
    } while (iVar13 == 0);
  }
  (*(code *)PTR_FUN_100a1044)(iVar16 + 0x1c00);
  if (iVar13 == 0) {
    iVar13 = *local_68;
    iVar16 = 0;
    if (iVar13 != 0) {
      iVar16 = iVar13 + 0x520;
    }
    iVar13 = FUN_10076328(iVar16,*local_60,*local_64,1,0,*(undefined4 *)(iVar13 + 0x172c0));
    if (iVar13 != 0) goto LAB_1001d404;
LAB_1001d51c:
    uVar18 = 0;
  }
  else {
LAB_1001d404:
    piVar11 = (int *)(param_1 + 0x24);
    puVar3 = (uint *)(param_1 + 0x2c);
    puVar4 = (uint *)(param_1 + 0x28);
    uVar7 = *puVar3;
    local_78 = CONCAT44(*(undefined4 *)(param_1 + 0x30),iVar13);
    if (*puVar4 == uVar7) {
      uVar17 = uVar7 << 1;
      if (uVar7 == 0) {
        uVar17 = 0x10;
      }
      iVar16 = uVar17 * 8;
      if (uVar17 >> 0x1d != 0) {
        iVar16 = -1;
      }
      iVar16 = FUN_10081da0(iVar16);
      if (iVar16 == 0) {
        if (iVar13 != 0) {
          (*pcVar10)();
          (*extraout_w11_00)(iVar13,1);
        }
        goto LAB_1001d51c;
      }
      FUN_10081ee0(iVar16,*piVar11,((ulonglong)*puVar3 & 0x1fffffff) << 3);
      FUN_10081dc0(*piVar11);
      *piVar11 = iVar16;
      *puVar3 = uVar17;
    }
    uVar18 = 1;
    *(ulonglong *)(*piVar11 + *puVar4 * 8) = local_78;
    *puVar4 = *puVar4 + 1;
    *(int *)(*piVar11 + *(int *)(param_1 + 0x34) * 8 + 4) = *(int *)(param_1 + 0x28) + -1;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x28) + -1;
  }
  return uVar18;
}

