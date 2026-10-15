/*
 * FUN_10043dd0 at 10043dd0
 * int __thiscall FUN_10043dd0(void * this, uint * param_1, uint * param_2)
 * Address ranges: 10043dd0-10043f23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10043dd0(void *this,uint *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  uVar4 = *param_1;
  uVar12 = (int)uVar4 >> 0x1f;
  uVar9 = FUN_10043ff0(this,uVar4,uVar12);
  piVar1 = (int *)((int)this + 4);
  iVar16 = uVar9 * 0x18;
  if (((uVar9 != *(uint *)((int)this + 8)) &&
      (puVar13 = (uint *)(*piVar1 + iVar16), *puVar13 == uVar4)) && (puVar13[1] == uVar12)) {
    uVar4 = param_2[1];
    puVar13[3] = *param_2;
    puVar13[4] = uVar4;
    return *piVar1 + iVar16 + 8;
  }
  iVar10 = *(int *)((int)this + 0xc);
  if (iVar10 == *(int *)((int)this + 8)) {
    if (iVar10 == 0) {
      iVar10 = 0x10;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    iVar11 = FUN_100cfd89(iVar10 * 0x18);
    if (iVar11 != 0) {
      uVar14 = 0;
      if (*(int *)((int)this + 8) != 0) {
        do {
          iVar5 = *(int *)((int)this + 4);
          uVar15 = uVar14 + 1;
          puVar2 = (undefined4 *)(iVar5 + uVar14 * 0x18);
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          puVar3 = (undefined4 *)(iVar11 + uVar14 * 0x18);
          *puVar3 = *puVar2;
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          *(undefined8 *)(iVar11 + 0x10 + uVar14 * 0x18) =
               *(undefined8 *)(iVar5 + 0x10 + uVar14 * 0x18);
          uVar14 = uVar15;
        } while (uVar15 < *(uint *)((int)this + 8));
      }
      thunk_FUN_100cfd6c(*(LPVOID *)this);
      *(int *)this = iVar11;
      *(int *)((int)this + 4) = iVar11;
      *(int *)((int)this + 0xc) = iVar10;
    }
  }
  uVar14 = *(uint *)((int)this + 8);
  if (*(uint *)((int)this + 0xc) != uVar14) {
    for (; uVar9 < uVar14; uVar14 = uVar14 - 1) {
      iVar10 = *(int *)((int)this + 4);
      puVar3 = (undefined4 *)(iVar10 + -0x18 + uVar14 * 0x18);
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      puVar2 = (undefined4 *)(iVar10 + uVar14 * 0x18);
      *puVar2 = *puVar3;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      *(undefined8 *)(iVar10 + 0x10 + uVar14 * 0x18) = *(undefined8 *)(iVar10 + -8 + uVar14 * 0x18);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(uint *)(*piVar1 + 8 + iVar16) = *param_1;
    uVar9 = param_2[1];
    iVar10 = *piVar1;
    *(uint *)(iVar10 + 0xc + iVar16) = *param_2;
    *(uint *)(iVar10 + 0x10 + iVar16) = uVar9;
    iVar10 = *piVar1;
    *(uint *)(iVar16 + iVar10) = uVar4;
    *(uint *)(iVar16 + 4 + iVar10) = uVar12;
  }
  return *piVar1 + iVar16 + 8;
}

