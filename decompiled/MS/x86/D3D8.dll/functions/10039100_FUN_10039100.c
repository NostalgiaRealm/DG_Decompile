/*
 * FUN_10039100 at 10039100
 * undefined4 __thiscall FUN_10039100(void * this, int * param_1)
 * Address ranges: 10039100-1003938e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10039100(void *this,int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  SIZE_T SVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  bool bVar22;
  
  uVar9 = (((uint)*(ushort *)(param_1 + 4) << 5 | param_1[2] & 0xfU) * 2 | param_1[1] & 1U) * 2 |
          -(uint)(param_1[3] != 0) & 0x40 | (uint)(*param_1 != 0);
  uVar14 = 0;
  uVar18 = ((((param_1[6] & 0xfU) << 4 | param_1[6] & 0xfU) << 4 | param_1[7] & 0xfU) << 4 |
           param_1[8] & 0xfU) << 0x10 |
           (((param_1[10] & 0xfU) << 4 | param_1[10] & 0xfU) << 4 | param_1[0xb] & 0xfU) << 4 |
           param_1[0xc] & 0xfU;
  uVar19 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    uVar17 = *(uint *)((int)this + 8);
    do {
      uVar19 = uVar17 + uVar14 >> 1;
      uVar2 = *(uint *)(*(int *)this + uVar19 * 0x40);
      uVar3 = *(uint *)(*(int *)this + 4 + uVar19 * 0x40);
      if (uVar3 < uVar18) {
LAB_10039217:
        uVar14 = uVar19 + 1;
        uVar19 = uVar17;
        uVar20 = uVar14;
      }
      else {
        uVar20 = uVar19;
        if ((uVar3 == uVar18) && (uVar2 <= uVar9)) {
          if ((uVar3 <= uVar18) && ((uVar3 < uVar18 || (uVar2 < uVar9)))) goto LAB_10039217;
          break;
        }
      }
      bVar22 = uVar19 != uVar14;
      uVar17 = uVar19;
      uVar19 = uVar20;
    } while (bVar22);
  }
  iVar21 = uVar19 * 0x40;
  if (((uVar19 != *(uint *)((int)this + 8)) &&
      (iVar11 = *(int *)this, *(uint *)(iVar21 + iVar11) == uVar9)) &&
     (*(uint *)(iVar21 + 4 + iVar11) == uVar18)) {
    return *(undefined4 *)(iVar21 + 0x3c + iVar11);
  }
  if (*(uint *)((int)this + 8) == *(uint *)((int)this + 4)) {
    lVar4 = (ulonglong)(*(uint *)((int)this + 4) * 2) * 0x40;
    SVar10 = (SIZE_T)lVar4;
    if ((int)((ulonglong)lVar4 >> 0x20) != 0) {
      SVar10 = 0xffffffff;
    }
    iVar11 = FUN_100ad4a9(SVar10);
    if (iVar11 != 0) {
      uVar14 = 0;
      if (*(int *)((int)this + 4) != 0) {
        do {
          iVar12 = uVar14 * 0x40;
          uVar14 = uVar14 + 1;
          puVar15 = (undefined4 *)(*(int *)this + iVar12);
          uVar5 = puVar15[1];
          uVar6 = puVar15[2];
          uVar7 = puVar15[3];
          puVar1 = (undefined4 *)(iVar12 + iVar11);
          *puVar1 = *puVar15;
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          uVar5 = puVar15[5];
          uVar6 = puVar15[6];
          uVar7 = puVar15[7];
          puVar1 = (undefined4 *)(iVar12 + 0x10 + iVar11);
          *puVar1 = puVar15[4];
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          uVar5 = puVar15[9];
          uVar6 = puVar15[10];
          uVar7 = puVar15[0xb];
          puVar1 = (undefined4 *)(iVar12 + 0x20 + iVar11);
          *puVar1 = puVar15[8];
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          uVar5 = puVar15[0xd];
          uVar6 = puVar15[0xe];
          uVar7 = puVar15[0xf];
          puVar1 = (undefined4 *)(iVar12 + 0x30 + iVar11);
          *puVar1 = puVar15[0xc];
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
        } while (uVar14 < *(uint *)((int)this + 4));
      }
      thunk_FUN_100ad48c(*(LPVOID *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) << 1;
      *(int *)this = iVar11;
    }
  }
  uVar14 = *(uint *)((int)this + 8);
  if (uVar19 < uVar14) {
    do {
      iVar21 = *(int *)this;
      iVar11 = uVar14 * 0x40;
      uVar14 = uVar14 - 1;
      puVar15 = (undefined4 *)(iVar11 + -0x40 + iVar21);
      uVar5 = puVar15[1];
      uVar6 = puVar15[2];
      uVar7 = puVar15[3];
      puVar1 = (undefined4 *)(iVar11 + iVar21);
      *puVar1 = *puVar15;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      puVar1 = (undefined4 *)(iVar11 + -0x30 + iVar21);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar15 = (undefined4 *)(iVar11 + 0x10 + iVar21);
      *puVar15 = *puVar1;
      puVar15[1] = uVar5;
      puVar15[2] = uVar6;
      puVar15[3] = uVar7;
      puVar1 = (undefined4 *)(iVar11 + -0x20 + iVar21);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar15 = (undefined4 *)(iVar11 + 0x20 + iVar21);
      *puVar15 = *puVar1;
      puVar15[1] = uVar5;
      puVar15[2] = uVar6;
      puVar15[3] = uVar7;
      puVar1 = (undefined4 *)(iVar11 + -0x10 + iVar21);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar15 = (undefined4 *)(iVar11 + 0x30 + iVar21);
      *puVar15 = *puVar1;
      puVar15[1] = uVar5;
      puVar15[2] = uVar6;
      puVar15[3] = uVar7;
    } while (uVar19 < uVar14);
    iVar21 = uVar19 << 6;
  }
  iVar11 = *(int *)this;
  *(uint *)(iVar21 + iVar11) = uVar9;
  *(uint *)(iVar21 + 4 + iVar11) = uVar18;
  iVar11 = param_1[1];
  iVar12 = param_1[2];
  iVar8 = param_1[3];
  iVar16 = *(int *)this + iVar21;
  *(int *)(iVar16 + 8) = *param_1;
  *(int *)(iVar16 + 0xc) = iVar11;
  *(int *)(iVar16 + 0x10) = iVar12;
  *(int *)(iVar16 + 0x14) = iVar8;
  iVar11 = param_1[5];
  iVar12 = param_1[6];
  iVar8 = param_1[7];
  *(int *)(iVar16 + 0x18) = param_1[4];
  *(int *)(iVar16 + 0x1c) = iVar11;
  *(int *)(iVar16 + 0x20) = iVar12;
  *(int *)(iVar16 + 0x24) = iVar8;
  iVar11 = param_1[9];
  iVar12 = param_1[10];
  iVar8 = param_1[0xb];
  *(int *)(iVar16 + 0x28) = param_1[8];
  *(int *)(iVar16 + 0x2c) = iVar11;
  *(int *)(iVar16 + 0x30) = iVar12;
  *(int *)(iVar16 + 0x34) = iVar8;
  *(int *)(iVar16 + 0x38) = param_1[0xc];
  piVar13 = (int *)FUN_100ad475(0x34);
  if (piVar13 != (int *)0x0) {
    iVar11 = param_1[1];
    iVar12 = param_1[2];
    iVar8 = param_1[3];
    *piVar13 = *param_1;
    piVar13[1] = iVar11;
    piVar13[2] = iVar12;
    piVar13[3] = iVar8;
    iVar11 = param_1[5];
    iVar12 = param_1[6];
    iVar8 = param_1[7];
    piVar13[4] = param_1[4];
    piVar13[5] = iVar11;
    piVar13[6] = iVar12;
    piVar13[7] = iVar8;
    iVar11 = param_1[9];
    iVar12 = param_1[10];
    iVar8 = param_1[0xb];
    piVar13[8] = param_1[8];
    piVar13[9] = iVar11;
    piVar13[10] = iVar12;
    piVar13[0xb] = iVar8;
    piVar13[0xc] = param_1[0xc];
  }
  *(int **)(iVar21 + 0x3c + *(int *)this) = piVar13;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return *(undefined4 *)(iVar21 + 0x3c + *(int *)this);
}

