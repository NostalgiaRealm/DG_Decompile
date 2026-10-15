/*
 * FUN_1002c140 at 1002c140
 * undefined4 __thiscall FUN_1002c140(void * this, int * param_1)
 * Address ranges: 1002c140-1002c2e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002c140(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  SIZE_T SVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  uint uStack_1c;
  
  if ((char)param_1[2] == '\0') {
    uStack_1c = 0;
  }
  else {
    uStack_1c = 0x80000000;
  }
  uStack_1c = param_1[1] | uStack_1c;
  uVar3 = *(uint *)*param_1;
  uVar15 = *(uint *)((int)this + 8);
  uVar12 = 0;
  uVar16 = 0;
  if (uVar15 != 0) {
    uVar14 = uVar15;
    do {
      uVar16 = uVar14 + uVar12 >> 1;
      uVar4 = *(uint *)(*(int *)this + uVar16 * 0x18);
      uVar5 = *(uint *)(*(int *)this + 4 + uVar16 * 0x18);
      if (uVar5 < uStack_1c) {
LAB_1002c1c5:
        uVar12 = uVar16 + 1;
        uVar16 = uVar14;
        uVar17 = uVar12;
      }
      else {
        uVar17 = uVar16;
        if ((uVar5 == uStack_1c) && (uVar4 <= uVar3)) {
          if ((uVar5 <= uStack_1c) && ((uVar5 < uStack_1c || (uVar4 < uVar3)))) goto LAB_1002c1c5;
          break;
        }
      }
      bVar18 = uVar16 != uVar12;
      uVar14 = uVar16;
      uVar16 = uVar17;
    } while (bVar18);
  }
  iVar13 = uVar16 * 0x18;
  if ((uVar16 != uVar15) && (iVar6 = *(int *)this, *(uint *)(iVar13 + iVar6) == uVar3)) {
    if (*(uint *)(iVar13 + 4 + iVar6) == uStack_1c) {
      return *(undefined4 *)(iVar13 + 0x14 + iVar6);
    }
    uVar15 = *(uint *)((int)this + 8);
  }
  if (uVar15 == *(uint *)((int)this + 4)) {
    uVar12 = *(uint *)((int)this + 4) * 2;
    SVar10 = (SIZE_T)((ulonglong)uVar12 * 0x18);
    if ((int)((ulonglong)uVar12 * 0x18 >> 0x20) != 0) {
      SVar10 = 0xffffffff;
    }
    iVar11 = FUN_100ad4a9(SVar10);
    iVar6 = iVar11;
    if (iVar11 != 0) {
      for (; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)(iVar6 + 8) = 0;
        *(undefined4 *)(iVar6 + 0xc) = 0;
        *(undefined1 *)(iVar6 + 0x10) = 0;
        iVar6 = iVar6 + 0x18;
      }
      uVar12 = 0;
      if (*(int *)((int)this + 4) != 0) {
        do {
          iVar6 = *(int *)this;
          uVar15 = uVar12 + 1;
          puVar1 = (undefined4 *)(iVar6 + uVar12 * 0x18);
          uVar7 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          puVar2 = (undefined4 *)(iVar11 + uVar12 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          *(undefined8 *)(iVar11 + 0x10 + uVar12 * 0x18) =
               *(undefined8 *)(iVar6 + 0x10 + uVar12 * 0x18);
          uVar12 = uVar15;
        } while (uVar15 < *(uint *)((int)this + 4));
      }
      thunk_FUN_100ad48c(*(LPVOID *)this);
      *(int *)this = iVar11;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) << 1;
    }
  }
  for (uVar12 = *(uint *)((int)this + 8); uVar16 < uVar12; uVar12 = uVar12 - 1) {
    iVar6 = *(int *)this;
    puVar2 = (undefined4 *)(iVar6 + -0x18 + uVar12 * 0x18);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar1 = (undefined4 *)(iVar6 + uVar12 * 0x18);
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    *(undefined8 *)(iVar6 + 0x10 + uVar12 * 0x18) = *(undefined8 *)(iVar6 + -8 + uVar12 * 0x18);
  }
  FUN_1002c2f0(this,uVar16,uVar3,uStack_1c,param_1);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return *(undefined4 *)(iVar13 + 0x14 + *(int *)this);
}

