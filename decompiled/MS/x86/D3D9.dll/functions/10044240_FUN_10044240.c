/*
 * FUN_10044240 at 10044240
 * undefined4 __thiscall FUN_10044240(void * this, uint * param_1)
 * Address ranges: 10044240-100444b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10044240(void *this,uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  SIZE_T SVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  
  uVar17 = (((param_1[10] << 8 | param_1[9]) << 6 | *param_1 & 3) << 2 |
            -(uint)(param_1[8] != 0) & 0x80 | -(uint)(param_1[7] != 0) & 0x40 |
            -(uint)(param_1[6] != 0) & 0x20 | -(uint)(param_1[2] != 0) & 0x10 | param_1[1] & 3) ^
           param_1[5];
  uVar12 = param_1[4] ^ param_1[3];
  uVar16 = *(uint *)((int)this + 8);
  uVar13 = 0;
  uVar19 = 0;
  if (uVar16 != 0) {
    uVar15 = uVar16;
    do {
      uVar19 = uVar15 + uVar13 >> 1;
      uVar2 = *(uint *)(*(int *)this + uVar19 * 0x38);
      uVar3 = *(uint *)(*(int *)this + 4 + uVar19 * 0x38);
      if ((uVar3 < uVar12) || ((uVar20 = uVar19, uVar3 == uVar12 && (uVar2 <= uVar17)))) {
        if ((uVar12 < uVar3) || ((uVar12 <= uVar3 && (uVar17 <= uVar2)))) break;
        uVar13 = uVar19 + 1;
        uVar19 = uVar15;
        uVar20 = uVar13;
      }
      bVar21 = uVar19 != uVar13;
      uVar15 = uVar19;
      uVar19 = uVar20;
    } while (bVar21);
  }
  iVar18 = uVar19 * 0x38;
  if (((uVar19 != uVar16) && (iVar9 = *(int *)this, *(uint *)(iVar18 + iVar9) == uVar17)) &&
     (*(uint *)(iVar18 + 4 + iVar9) == uVar12)) {
    return *(undefined4 *)(iVar18 + 0x34 + iVar9);
  }
  if (*(int *)((int)this + 8) == *(int *)((int)this + 4)) {
    lVar4 = (ulonglong)(uint)(*(int *)((int)this + 4) * 2) * 0x38;
    SVar8 = (SIZE_T)lVar4;
    if ((int)((ulonglong)lVar4 >> 0x20) != 0) {
      SVar8 = 0xffffffff;
    }
    iVar9 = FUN_100cfd89(SVar8);
    if (iVar9 != 0) {
      uVar13 = 0;
      if (*(int *)((int)this + 4) != 0) {
        do {
          uVar16 = uVar13 + 1;
          iVar10 = uVar13 * 0x38;
          puVar14 = (undefined4 *)(*(int *)this + iVar10);
          uVar5 = puVar14[1];
          uVar6 = puVar14[2];
          uVar7 = puVar14[3];
          puVar1 = (undefined4 *)(iVar10 + iVar9);
          *puVar1 = *puVar14;
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          uVar5 = puVar14[5];
          uVar6 = puVar14[6];
          uVar7 = puVar14[7];
          puVar1 = (undefined4 *)(iVar10 + 0x10 + iVar9);
          *puVar1 = puVar14[4];
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          uVar5 = puVar14[9];
          uVar6 = puVar14[10];
          uVar7 = puVar14[0xb];
          puVar1 = (undefined4 *)(iVar10 + 0x20 + iVar9);
          *puVar1 = puVar14[8];
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          *(undefined8 *)(iVar10 + 0x30 + iVar9) = *(undefined8 *)(puVar14 + 0xc);
          uVar13 = uVar16;
        } while (uVar16 < *(uint *)((int)this + 4));
      }
      thunk_FUN_100cfd6c(*(LPVOID *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) << 1;
      *(int *)this = iVar9;
    }
  }
  for (uVar13 = *(uint *)((int)this + 8); uVar19 < uVar13; uVar13 = uVar13 - 1) {
    iVar9 = *(int *)this;
    puVar14 = (undefined4 *)(iVar9 + -0x38 + uVar13 * 0x38);
    uVar5 = puVar14[1];
    uVar6 = puVar14[2];
    uVar7 = puVar14[3];
    puVar1 = (undefined4 *)(iVar9 + uVar13 * 0x38);
    *puVar1 = *puVar14;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    puVar1 = (undefined4 *)(iVar9 + -0x28 + uVar13 * 0x38);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar14 = (undefined4 *)(iVar9 + 0x10 + uVar13 * 0x38);
    *puVar14 = *puVar1;
    puVar14[1] = uVar5;
    puVar14[2] = uVar6;
    puVar14[3] = uVar7;
    puVar1 = (undefined4 *)(iVar9 + -0x18 + uVar13 * 0x38);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar14 = (undefined4 *)(iVar9 + 0x20 + uVar13 * 0x38);
    *puVar14 = *puVar1;
    puVar14[1] = uVar5;
    puVar14[2] = uVar6;
    puVar14[3] = uVar7;
    *(undefined8 *)(iVar9 + 0x30 + uVar13 * 0x38) = *(undefined8 *)(iVar9 + -8 + uVar13 * 0x38);
  }
  iVar9 = *(int *)this;
  *(uint *)(iVar18 + iVar9) = uVar17;
  *(uint *)(iVar18 + 4 + iVar9) = uVar12;
  uVar13 = param_1[1];
  uVar16 = param_1[2];
  uVar19 = param_1[3];
  iVar9 = *(int *)this + iVar18;
  *(uint *)(iVar9 + 8) = *param_1;
  *(uint *)(iVar9 + 0xc) = uVar13;
  *(uint *)(iVar9 + 0x10) = uVar16;
  *(uint *)(iVar9 + 0x14) = uVar19;
  uVar13 = param_1[5];
  uVar16 = param_1[6];
  uVar19 = param_1[7];
  *(uint *)(iVar9 + 0x18) = param_1[4];
  *(uint *)(iVar9 + 0x1c) = uVar13;
  *(uint *)(iVar9 + 0x20) = uVar16;
  *(uint *)(iVar9 + 0x24) = uVar19;
  *(undefined8 *)(iVar9 + 0x28) = *(undefined8 *)(param_1 + 8);
  *(uint *)(iVar9 + 0x30) = param_1[10];
  puVar11 = (uint *)FUN_100cfd55(0x2c);
  if (puVar11 != (uint *)0x0) {
    uVar13 = param_1[1];
    uVar16 = param_1[2];
    uVar19 = param_1[3];
    *puVar11 = *param_1;
    puVar11[1] = uVar13;
    puVar11[2] = uVar16;
    puVar11[3] = uVar19;
    uVar13 = param_1[5];
    uVar16 = param_1[6];
    uVar19 = param_1[7];
    puVar11[4] = param_1[4];
    puVar11[5] = uVar13;
    puVar11[6] = uVar16;
    puVar11[7] = uVar19;
    *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(param_1 + 8);
    puVar11[10] = param_1[10];
  }
  *(uint **)(iVar18 + 0x34 + *(int *)this) = puVar11;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return *(undefined4 *)(iVar18 + 0x34 + *(int *)this);
}

