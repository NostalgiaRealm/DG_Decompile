/*
 * FUN_10038740 at 10038740
 * int __thiscall FUN_10038740(void * this, uint * param_1, uint * param_2)
 * Address ranges: 10038740-100388aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10038740(void *this,uint *param_1,uint *param_2)

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
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  
  uVar4 = *param_1;
  uVar13 = (int)uVar4 >> 0x1f;
  uVar9 = FUN_10038970(this,uVar4,uVar13);
  piVar1 = (int *)((int)this + 4);
  iVar12 = uVar9 * 0x18;
  if (((uVar9 == *(uint *)((int)this + 8)) ||
      (puVar14 = (uint *)(*piVar1 + iVar12), *puVar14 != uVar4)) || (puVar14[1] != uVar13)) {
    iVar10 = *(int *)((int)this + 0xc);
    if (iVar10 == *(int *)((int)this + 8)) {
      if (iVar10 == 0) {
        iVar10 = 0x10;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      iVar11 = FUN_100ad4a9(iVar10 * 0x18);
      if (iVar11 != 0) {
        uVar15 = 0;
        if (*(int *)((int)this + 8) != 0) {
          do {
            iVar5 = *(int *)((int)this + 4);
            uVar16 = uVar15 + 1;
            puVar2 = (undefined4 *)(iVar5 + uVar15 * 0x18);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar3 = (undefined4 *)(iVar11 + uVar15 * 0x18);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            *(undefined8 *)(iVar11 + 0x10 + uVar15 * 0x18) =
                 *(undefined8 *)(iVar5 + 0x10 + uVar15 * 0x18);
            uVar15 = uVar16;
          } while (uVar16 < *(uint *)((int)this + 8));
        }
        thunk_FUN_100ad48c(*(LPVOID *)this);
        *(int *)this = iVar11;
        *(int *)((int)this + 4) = iVar11;
        *(int *)((int)this + 0xc) = iVar10;
      }
    }
    uVar15 = *(uint *)((int)this + 8);
    if (*(uint *)((int)this + 0xc) != uVar15) {
      for (; uVar9 < uVar15; uVar15 = uVar15 - 1) {
        iVar10 = *(int *)((int)this + 4);
        puVar3 = (undefined4 *)(iVar10 + -0x18 + uVar15 * 0x18);
        uVar6 = puVar3[1];
        uVar7 = puVar3[2];
        uVar8 = puVar3[3];
        puVar2 = (undefined4 *)(iVar10 + uVar15 * 0x18);
        *puVar2 = *puVar3;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        *(undefined8 *)(iVar10 + 0x10 + uVar15 * 0x18) =
             *(undefined8 *)(iVar10 + -8 + uVar15 * 0x18);
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      *(uint *)(*piVar1 + 8 + iVar12) = *param_1;
      iVar10 = *piVar1;
      *(uint *)(iVar10 + 0xc + iVar12) = *param_2;
      *(short *)(iVar10 + 0x10 + iVar12) = (short)param_2[1];
      *(undefined1 *)(iVar10 + 0x12 + iVar12) = *(undefined1 *)((int)param_2 + 6);
      iVar10 = *piVar1;
      *(uint *)(iVar12 + iVar10) = uVar4;
      *(uint *)(iVar12 + 4 + iVar10) = uVar13;
      return *piVar1 + iVar12 + 8;
    }
  }
  else {
    puVar14[3] = *param_2;
    *(short *)(puVar14 + 4) = (short)param_2[1];
    *(undefined1 *)((int)puVar14 + 0x12) = *(undefined1 *)((int)param_2 + 6);
  }
  return *piVar1 + iVar12 + 8;
}

