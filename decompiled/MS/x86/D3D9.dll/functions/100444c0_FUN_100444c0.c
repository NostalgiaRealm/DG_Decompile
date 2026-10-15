/*
 * FUN_100444c0 at 100444c0
 * undefined4 __thiscall FUN_100444c0(void * this, uint * param_1)
 * Address ranges: 100444c0-10044776
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100444c0(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  SIZE_T SVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  bool bVar18;
  undefined8 uVar19;
  uint local_1c;
  uint local_18;
  uint local_c;
  
  uVar19 = FUN_100bdf25((int *)param_1);
  uVar1 = *(uint *)((int)this + 8);
  uVar8 = 0;
  local_c = 0;
  local_1c = (uint)uVar19;
  local_18 = (uint)((ulonglong)uVar19 >> 0x20);
  if (uVar1 != 0) {
    uVar15 = uVar1;
    do {
      local_c = uVar15 + uVar8 >> 1;
      uVar2 = *(uint *)(*(int *)this + local_c * 0x158);
      uVar3 = *(uint *)(*(int *)this + 4 + local_c * 0x158);
      if (uVar3 < local_18) {
LAB_10044536:
        uVar8 = local_c + 1;
        local_c = uVar8;
        uVar16 = uVar15;
      }
      else {
        uVar16 = local_c;
        if ((uVar3 == local_18) && (uVar2 <= local_1c)) {
          if ((uVar3 <= local_18) && ((uVar3 < local_18 || (uVar2 < local_1c)))) goto LAB_10044536;
          break;
        }
      }
      uVar15 = uVar16;
    } while (uVar16 != uVar8);
  }
  iVar9 = local_c * 0x158;
  if (((local_c == uVar1) || (puVar10 = (uint *)(iVar9 + *(int *)this), *puVar10 != local_1c)) ||
     (puVar10[1] != local_18)) {
    if (uVar1 == *(uint *)((int)this + 4)) {
      lVar4 = (ulonglong)(*(uint *)((int)this + 4) * 2) * 0x158;
      SVar5 = (SIZE_T)lVar4;
      if ((int)((ulonglong)lVar4 >> 0x20) != 0) {
        SVar5 = 0xffffffff;
      }
      iVar6 = FUN_100cfd89(SVar5);
      if (iVar6 != 0) {
        uVar8 = 0;
        if (*(int *)((int)this + 4) != 0) {
          do {
            iVar7 = uVar8 * 0x158;
            uVar8 = uVar8 + 1;
            puVar14 = (undefined4 *)(*(int *)this + iVar7);
            puVar17 = (undefined4 *)(iVar7 + iVar6);
            for (iVar13 = 0x56; iVar13 != 0; iVar13 = iVar13 + -1) {
              *puVar17 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar17 = puVar17 + 1;
            }
          } while (uVar8 < *(uint *)((int)this + 4));
        }
        thunk_FUN_100cfd6c(*(LPVOID *)this);
        *(int *)((int)this + 4) = *(int *)((int)this + 4) << 1;
        *(int *)this = iVar6;
      }
    }
    uVar8 = *(uint *)((int)this + 8);
    while (local_c < uVar8) {
      iVar6 = uVar8 * 0x158;
      uVar8 = uVar8 - 1;
      puVar17 = (undefined4 *)(iVar6 + *(int *)this);
      puVar14 = puVar17 + -0x56;
      for (iVar6 = 0x56; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar17 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar17 = puVar17 + 1;
      }
    }
    iVar6 = *(int *)this;
    *(uint *)(iVar9 + iVar6) = local_1c;
    *(uint *)(iVar9 + 4 + iVar6) = local_18;
    puVar10 = param_1;
    puVar12 = (uint *)(*(int *)this + 8 + iVar9);
    for (iVar6 = 0x52; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    puVar10 = (uint *)FUN_100cfd55(0x148);
    if (puVar10 != (uint *)0x0) {
      puVar12 = puVar10;
      for (iVar6 = 0x52; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar12 = *param_1;
        param_1 = param_1 + 1;
        puVar12 = puVar12 + 1;
      }
    }
    *(uint **)(iVar9 + 0x150 + *(int *)this) = puVar10;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    return *(undefined4 *)(iVar9 + 0x150 + *(int *)this);
  }
  if ((*param_1 == puVar10[2]) && (param_1[1] == puVar10[3])) {
    puVar12 = puVar10 + 4;
    uVar8 = 0x24;
    puVar11 = param_1 + 2;
    do {
      if (*puVar11 != *puVar12) goto LAB_10044647;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
      bVar18 = 3 < uVar8;
      uVar8 = uVar8 - 4;
    } while (bVar18);
    uVar8 = 0x24;
    puVar11 = puVar10 + 0xe;
    puVar12 = param_1 + 0xc;
    do {
      if (*puVar12 != *puVar11) goto LAB_10044647;
      puVar12 = puVar12 + 1;
      puVar11 = puVar11 + 1;
      bVar18 = 3 < uVar8;
      uVar8 = uVar8 - 4;
    } while (bVar18);
    uVar8 = 0x24;
    puVar11 = puVar10 + 0x18;
    puVar12 = param_1 + 0x16;
    do {
      if (*puVar12 != *puVar11) goto LAB_10044647;
      puVar12 = puVar12 + 1;
      puVar11 = puVar11 + 1;
      bVar18 = 3 < uVar8;
      uVar8 = uVar8 - 4;
    } while (bVar18);
    uVar8 = 0x24;
    puVar10 = puVar10 + 0x22;
    puVar12 = param_1 + 0x20;
    while (*puVar12 == *puVar10) {
      puVar12 = puVar12 + 1;
      puVar10 = puVar10 + 1;
      bVar18 = uVar8 < 4;
      uVar8 = uVar8 - 4;
      if (bVar18) {
        return *(undefined4 *)(iVar9 + 0x150 + *(int *)this);
      }
    }
  }
LAB_10044647:
  FUN_10044a10(this,local_c);
  FUN_10044c50(this,local_c,local_1c,local_18,param_1);
  return *(undefined4 *)(iVar9 + 0x150 + *(int *)this);
}

