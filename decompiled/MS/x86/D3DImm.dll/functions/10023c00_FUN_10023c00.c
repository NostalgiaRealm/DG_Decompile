/*
 * FUN_10023c00 at 10023c00
 * undefined4 __thiscall FUN_10023c00(void * this, uint * param_1)
 * Address ranges: 10023c00-10023ef6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10023c00(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  SIZE_T SVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  bool bVar18;
  undefined8 uVar19;
  uint local_18;
  uint local_14;
  uint local_10;
  
  uVar19 = FUN_10053464((int *)param_1);
  uVar7 = 0;
  uVar1 = *(uint *)((int)this + 8);
  local_18 = 0;
  local_14 = (uint)uVar19;
  local_10 = (uint)((ulonglong)uVar19 >> 0x20);
  if (uVar1 != 0) {
    uVar15 = uVar1;
    do {
      uVar14 = uVar15 + uVar7 >> 1;
      uVar2 = *(uint *)(*(int *)this + uVar14 * 0x158);
      uVar3 = *(uint *)(*(int *)this + 4 + uVar14 * 0x158);
      if (uVar3 < local_10) {
LAB_10023c76:
        uVar7 = uVar14 + 1;
        uVar14 = uVar15;
        local_18 = uVar7;
      }
      else {
        local_18 = uVar14;
        if ((uVar3 == local_10) && (uVar2 <= local_14)) {
          if ((uVar3 <= local_10) && ((uVar3 < local_10 || (uVar2 < local_14)))) goto LAB_10023c76;
          break;
        }
      }
      uVar15 = uVar14;
    } while (uVar14 != uVar7);
  }
  iVar8 = local_18 * 0x158;
  if (((local_18 == uVar1) || (puVar9 = (uint *)(iVar8 + *(int *)this), *puVar9 != local_14)) ||
     (puVar9[1] != local_10)) {
    if (*(int *)((int)this + 8) == *(int *)((int)this + 4)) {
      lVar4 = (ulonglong)(uint)(*(int *)((int)this + 4) * 2) * 0x158;
      SVar5 = (SIZE_T)lVar4;
      if ((int)((ulonglong)lVar4 >> 0x20) != 0) {
        SVar5 = 0xffffffff;
      }
      iVar12 = FUN_1005c789(SVar5);
      if (iVar12 != 0) {
        uVar7 = 0;
        if (*(int *)((int)this + 4) != 0) {
          do {
            iVar6 = uVar7 * 0x158;
            uVar7 = uVar7 + 1;
            puVar16 = (undefined4 *)(*(int *)this + iVar6);
            puVar17 = (undefined4 *)(iVar6 + iVar12);
            for (iVar13 = 0x56; iVar13 != 0; iVar13 = iVar13 + -1) {
              *puVar17 = *puVar16;
              puVar16 = puVar16 + 1;
              puVar17 = puVar17 + 1;
            }
          } while (uVar7 < *(uint *)((int)this + 4));
        }
        thunk_FUN_1005c76c(*(LPVOID *)this);
        *(int *)((int)this + 4) = *(int *)((int)this + 4) << 1;
        *(int *)this = iVar12;
      }
    }
    uVar7 = *(uint *)((int)this + 8);
    while (local_18 < uVar7) {
      iVar12 = uVar7 * 0x158;
      uVar7 = uVar7 - 1;
      puVar17 = (undefined4 *)(iVar12 + *(int *)this);
      puVar16 = puVar17 + -0x56;
      for (iVar12 = 0x56; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar17 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar17 = puVar17 + 1;
      }
    }
    iVar12 = *(int *)this;
    *(uint *)(iVar8 + iVar12) = local_14;
    *(uint *)(iVar8 + 4 + iVar12) = local_10;
    puVar9 = param_1;
    puVar11 = (uint *)(*(int *)this + iVar8 + 8);
    for (iVar12 = 0x52; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar9 = (uint *)FUN_1005c755(0x148);
    if (puVar9 != (uint *)0x0) {
      puVar11 = puVar9;
      for (iVar12 = 0x52; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar11 = *param_1;
        param_1 = param_1 + 1;
        puVar11 = puVar11 + 1;
      }
    }
    *(uint **)(iVar8 + 0x150 + *(int *)this) = puVar9;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    return *(undefined4 *)(iVar8 + 0x150 + *(int *)this);
  }
  if ((*param_1 == puVar9[2]) && (param_1[1] == puVar9[3])) {
    puVar11 = puVar9 + 4;
    puVar10 = param_1 + 2;
    uVar7 = 0x24;
    do {
      if (*puVar10 != *puVar11) goto LAB_10023d87;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
      bVar18 = 3 < uVar7;
      uVar7 = uVar7 - 4;
    } while (bVar18);
    uVar7 = 0x24;
    puVar10 = puVar9 + 0xe;
    puVar11 = param_1 + 0xc;
    do {
      if (*puVar11 != *puVar10) goto LAB_10023d87;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 1;
      bVar18 = 3 < uVar7;
      uVar7 = uVar7 - 4;
    } while (bVar18);
    uVar7 = 0x24;
    puVar10 = puVar9 + 0x18;
    puVar11 = param_1 + 0x16;
    do {
      if (*puVar11 != *puVar10) goto LAB_10023d87;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 1;
      bVar18 = 3 < uVar7;
      uVar7 = uVar7 - 4;
    } while (bVar18);
    uVar7 = 0x24;
    puVar9 = puVar9 + 0x22;
    puVar11 = param_1 + 0x20;
    while (*puVar11 == *puVar9) {
      puVar11 = puVar11 + 1;
      puVar9 = puVar9 + 1;
      bVar18 = uVar7 < 4;
      uVar7 = uVar7 - 4;
      if (bVar18) {
        return *(undefined4 *)(iVar8 + 0x150 + *(int *)this);
      }
    }
  }
LAB_10023d87:
  FUN_10024190(this,local_18);
  iVar12 = *(int *)this;
  *(uint *)(iVar8 + iVar12) = local_14;
  *(uint *)(iVar8 + 4 + iVar12) = local_10;
  puVar9 = param_1;
  puVar11 = (uint *)(*(int *)this + iVar8 + 8);
  for (iVar12 = 0x52; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = (uint *)FUN_1005c755(0x148);
  if (puVar9 != (uint *)0x0) {
    puVar11 = puVar9;
    for (iVar12 = 0x52; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar11 = *param_1;
      param_1 = param_1 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  *(uint **)(iVar8 + 0x150 + *(int *)this) = puVar9;
  return *(undefined4 *)(iVar8 + 0x150 + *(int *)this);
}

