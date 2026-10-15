/*
 * FUN_10037730 at 10037730
 * undefined __thiscall FUN_10037730(void * this, uint param_1, int param_2, uint param_3, uint param_4, float param_5, uint param_6, int param_7)
 * Address ranges: 10037730-10037ee4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10037730(void *this,uint param_1,int param_2,uint param_3,uint param_4,float param_5,
            uint param_6,int param_7)

{
  double dVar1;
  double dVar2;
  char cVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  float fVar18;
  int *piStack_138;
  float fStack_134;
  uint uStack_12c;
  void *local_120;
  int *piStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint auStack_110 [67];
  
  local_120 = this;
  if (param_1 * 6 < 0x1001) {
    if (*(int **)((int)this + 0xdbe4) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0xdbe4) + 4))
                (*(undefined4 *)((int)this + 0xdbf8),*(undefined4 *)((int)this + 0xdc08),0);
    }
    if (*(int **)((int)this + 0xdbf4) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0xdbf4) + 4))
                (*(undefined4 *)((int)this + 0xdc18),*(undefined4 *)((int)this + 0xdc1c),0);
    }
    iVar14 = param_7 + -0xc0;
    if (param_7 == 0) {
      iVar14 = 0;
    }
    piStack_11c = *(int **)((int)this + 0xdbe4);
    if (piStack_11c == (int *)0x0) {
      piStack_11c = *(int **)((int)this + 0xdbf4);
    }
    if ((param_7 != 0) || (piStack_11c == (int *)0x0)) {
      FUN_10036700(local_120,param_1 * 6,param_3,param_4,param_6,iVar14);
      *(undefined4 *)((int)local_120 + 0xde50) = 1;
      *(undefined1 *)((int)local_120 + 0xde54) = 0;
      FUN_10045845(local_120,param_1,param_2,(byte)param_3,param_4,param_5,(char)param_6);
      return;
    }
    FUN_10036ae0(this,0,0,0);
    piVar17 = (int *)(*(int *)(*(int *)((int)this + 0xd9b8) + 0x1304) + 0x634);
    *piVar17 = *piVar17 + 1;
    if (((void *)(param_3 & 1) != (void *)0x0) &&
       (piVar17 = *(int **)((int)this + 0xdbe4), piVar17 != (int *)0x0)) {
      uStack_118 = 0;
      uStack_114 = 0;
      bVar13 = (byte)*(int *)((int)this + 0xdbf8);
      auStack_110[0] = (uint)piVar17[5] >> (bVar13 & 0x1f);
      if (auStack_110[0] == 0) {
        auStack_110[0] = 1;
      }
      auStack_110[1] = (uint)piVar17[6] >> (bVar13 & 0x1f);
      if (auStack_110[1] == 0) {
        auStack_110[1] = 1;
      }
      (**(code **)(*piVar17 + 0xc))
                (piVar17[0xb] * *(int *)((int)this + 0xdc08) + *(int *)((int)this + 0xdbf8),
                 &uStack_118);
      piVar17 = *(int **)((int)this + 0xdbe4);
      fStack_134 = (float)(**(code **)(*piVar17 + 0x84))();
      piStack_138 = (int *)(*(int *)((int)this + 0xdc08) * piVar17[0xb] +
                           *(int *)((int)this + 0xdbf8));
      uVar8 = FUN_10038970((void *)((int)this + 0xdb38),(uint)fStack_134,(int)fStack_134 >> 0x1f);
      if (((uVar8 == *(uint *)((int)this + 0xdb40)) ||
          (iVar14 = *(int *)((int)this + 0xdb3c), *(float *)(iVar14 + uVar8 * 0x18) != fStack_134))
         || (*(uint *)(iVar14 + 4 + uVar8 * 0x18) != (int)fStack_134 >> 0x1f)) {
        puVar9 = &DAT_00000006;
      }
      else {
        puVar9 = (undefined1 *)(uVar8 * 0x18 + 0x12 + iVar14);
      }
      *puVar9 = 1;
      *(undefined1 *)((int)this + 0xde5b) = 1;
      pvVar4 = *(void **)(*(int *)((int)this + 0xd9b8) + 0x1304);
      if (((*(int *)((int)pvVar4 + 0x8e0) != 0) && (fStack_134 != 0.0)) &&
         ((iVar14 = FUN_1009ed73(*(void **)((int)pvVar4 + 0x8e4),(uint)fStack_134,(uint)piStack_138,
                                 0,*(int *)((int)pvVar4 + 0x8e0),(int)pvVar4,4,
                                 *(int *)((int)pvVar4 + 0x938),*(int *)((int)pvVar4 + 0x93c)),
          *(int *)(*(int *)((int)pvVar4 + 0x8e0) + 0x20) != 3 && (iVar14 != 4)))) {
        FUN_100981d0(pvVar4,fStack_134,piStack_138,iVar14,4);
      }
    }
    if (((param_3 & 6) != 0) && (piVar17 = *(int **)((int)this + 0xdbf4), piVar17 != (int *)0x0)) {
      uStack_118 = 0;
      uStack_114 = 0;
      bVar13 = (byte)*(int *)((int)this + 0xdc18);
      auStack_110[0] = (uint)piVar17[5] >> (bVar13 & 0x1f);
      if (auStack_110[0] == 0) {
        auStack_110[0] = 1;
      }
      auStack_110[1] = (uint)piVar17[6] >> (bVar13 & 0x1f);
      if (auStack_110[1] == 0) {
        auStack_110[1] = 1;
      }
      (**(code **)(*piVar17 + 0xc))
                (piVar17[0xb] * *(int *)((int)this + 0xdc1c) + *(int *)((int)this + 0xdc18),
                 &uStack_118);
      piVar17 = *(int **)((int)this + 0xdbf4);
      uVar8 = (**(code **)(*piVar17 + 0x84))();
      uVar16 = (int)uVar8 >> 0x1f;
      if ((param_3 & 2) != 0) {
        fStack_134 = (float)(*(int *)((int)this + 0xdc1c) * piVar17[0xb] +
                            *(int *)((int)this + 0xdc18));
        uVar10 = FUN_10038970((void *)((int)this + 0xdb38),uVar8,uVar16);
        if (((uVar10 == *(uint *)((int)this + 0xdb40)) ||
            (iVar14 = *(int *)((int)this + 0xdb3c), *(uint *)(iVar14 + uVar10 * 0x18) != uVar8)) ||
           (*(uint *)(iVar14 + 4 + uVar10 * 0x18) != uVar16)) {
          puVar9 = &DAT_00000006;
        }
        else {
          puVar9 = (undefined1 *)(uVar10 * 0x18 + 0x12 + iVar14);
        }
        *puVar9 = 1;
        *(undefined1 *)((int)this + 0xde5b) = 1;
        pvVar4 = *(void **)(*(int *)((int)this + 0xd9b8) + 0x1304);
        piVar17 = piStack_138;
        uStack_12c = uVar16;
        if (((*(int *)((int)pvVar4 + 0x8e0) != 0) && (uVar8 != 0)) &&
           ((iVar14 = FUN_1009ed73(*(void **)((int)pvVar4 + 0x8e4),uVar8,(uint)fStack_134,0,
                                   *(int *)((int)pvVar4 + 0x8e0),(int)pvVar4,0x10,
                                   *(int *)((int)pvVar4 + 0x938),*(int *)((int)pvVar4 + 0x93c)),
            *(int *)(*(int *)((int)pvVar4 + 0x8e0) + 0x20) != 3 && (iVar14 != 0x10)))) {
          FUN_100981d0(pvVar4,uVar8,fStack_134,iVar14,0x10);
        }
      }
      if ((param_3 & 4) != 0) {
        fStack_134 = (float)((*(int *)((int)this + 0xdc1c) + piVar17[9]) * piVar17[0xb] +
                            *(int *)((int)this + 0xdc18));
        uVar10 = FUN_10038970((void *)((int)this + 0xdb38),uVar8,uVar16);
        if (((uVar10 == *(uint *)((int)this + 0xdb40)) ||
            (iVar14 = *(int *)((int)this + 0xdb3c), *(uint *)(iVar14 + uVar10 * 0x18) != uVar8)) ||
           (*(uint *)(iVar14 + 4 + uVar10 * 0x18) != uVar16)) {
          puVar9 = &DAT_00000006;
        }
        else {
          puVar9 = (undefined1 *)(uVar10 * 0x18 + 0x12 + iVar14);
        }
        *puVar9 = 1;
        *(undefined1 *)((int)this + 0xde5b) = 1;
        pvVar4 = *(void **)(*(int *)((int)this + 0xd9b8) + 0x1304);
        uStack_12c = uVar8;
        if ((((*(int *)((int)pvVar4 + 0x8e0) != 0) && (uVar8 != 0)) &&
            (iVar14 = FUN_1009ed73(*(void **)((int)pvVar4 + 0x8e4),uVar8,(uint)fStack_134,0,
                                   *(int *)((int)pvVar4 + 0x8e0),(int)pvVar4,0x10,
                                   *(int *)((int)pvVar4 + 0x938),*(int *)((int)pvVar4 + 0x93c)),
            *(int *)(*(int *)((int)pvVar4 + 0x8e0) + 0x20) != 3)) && (iVar14 != 0x10)) {
          FUN_100981d0(pvVar4,uVar8,fStack_134,iVar14,0x10);
        }
      }
    }
    piVar17 = piStack_11c;
    iVar14 = piStack_11c[5];
    iVar11 = (**(code **)(*piStack_11c + 0x20))(0);
    dVar1 = (double)(&DAT_100b5ce0)[-(iVar11 >> 0x1f)];
    dVar2 = (double)(&DAT_100b5ce0)[-(iVar14 >> 0x1f)];
    iVar15 = piVar17[6];
    iVar12 = (**(code **)(*piVar17 + 0x24))(0);
    fVar18 = (float)((double)iVar12 + (double)(&DAT_100b5ce0)[-(iVar12 >> 0x1f)]) /
             (float)((double)iVar15 + (double)(&DAT_100b5ce0)[-(iVar15 >> 0x1f)]);
    if (param_1 != 0) {
      uVar8 = 0;
      do {
        uVar16 = uVar8 + 1;
        iVar15 = *(int *)(param_2 + 4 + uVar8 * 0x10);
        iVar12 = *(int *)(param_2 + 8 + uVar8 * 0x10);
        iVar5 = *(int *)(param_2 + 0xc + uVar8 * 0x10);
        auStack_110[uVar8 * 4] = (int)((float)*(int *)(param_2 + uVar8 * 0x10) * fStack_134);
        auStack_110[uVar8 * 4 + 1] = (int)((float)iVar15 * fVar18);
        auStack_110[uVar8 * 4 + 2] = (int)((float)iVar12 * fStack_134);
        auStack_110[uVar8 * 4 + 3] = (int)((float)iVar5 * fVar18);
        this = (void *)(param_3 & 1);
        uVar8 = uVar16;
      } while (uVar16 < param_1);
    }
    if (((float)((double)iVar11 + dVar1) / (float)((double)iVar14 + dVar2) != 0.0) &&
       (FUN_10041960(this,param_4,(float *)&local_120), *(int *)((int)this + 0xdbe4) != 0)) {
      uVar6 = *(undefined4 *)((int)this + 0xdbcc);
      iVar14 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x1304);
      iVar15 = *(int *)(iVar14 + 0x8ec);
      if (iVar15 != 0) {
        uVar7 = *(undefined4 *)(iVar14 + 0x8e8);
        FUN_10098377(iVar14);
        (**(code **)(**(int **)(iVar14 + 0x638) + 0x68))(*(int **)(iVar14 + 0x638),iVar15,uVar7);
        *(undefined4 *)(iVar14 + 0x8ec) = 0;
      }
      FUN_10098377(iVar14);
      (**(code **)(**(int **)(iVar14 + 0x638) + 0xc0))
                (*(int **)(iVar14 + 0x638),uVar6,&local_120,param_1,auStack_110);
      cVar3 = *(char *)(iVar14 + 0x620);
      iVar15 = 1;
      *(undefined1 *)(iVar14 + 0x620) = 0;
      if (cVar3 != '\0') {
        iVar15 = 8;
      }
      iVar15 = *(int *)(iVar14 + 0x624) + iVar15;
      *(int *)(iVar14 + 0x624) = iVar15;
      if (((*(int *)(iVar14 + 0x630) <= iVar15) && (*(int *)(iVar14 + 0x8e0) != 0)) &&
         (*(int *)(iVar14 + 0x634) == 0)) {
        FUN_10098768((void *)(iVar14 + 4),'\0');
      }
    }
    if ((uStack_12c != 0) && (*(int *)((int)this + 0xdbf4) != 0)) {
      uVar6 = *(undefined4 *)((int)this + 0xdbdc);
      iVar14 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x1304);
      iVar15 = *(int *)(iVar14 + 0x8ec);
      if (iVar15 != 0) {
        uVar7 = *(undefined4 *)(iVar14 + 0x8e8);
        FUN_10098377(iVar14);
        (**(code **)(**(int **)(iVar14 + 0x638) + 0x68))(*(int **)(iVar14 + 0x638),iVar15,uVar7);
        *(undefined4 *)(iVar14 + 0x8ec) = 0;
      }
      FUN_10098377(iVar14);
      (**(code **)(**(int **)(iVar14 + 0x638) + 0xbc))
                (*(int **)(iVar14 + 0x638),uVar6,param_3 >> 1 & 3,param_5,param_6 & 0xff,param_1,
                 auStack_110);
      cVar3 = *(char *)(iVar14 + 0x620);
      iVar15 = 1;
      *(undefined1 *)(iVar14 + 0x620) = 0;
      if (cVar3 != '\0') {
        iVar15 = 8;
      }
      iVar15 = *(int *)(iVar14 + 0x624) + iVar15;
      *(int *)(iVar14 + 0x624) = iVar15;
      if (((*(int *)(iVar14 + 0x630) <= iVar15) && (*(int *)(iVar14 + 0x8e0) != 0)) &&
         (*(int *)(iVar14 + 0x634) == 0)) {
        FUN_10098768((void *)(iVar14 + 4),'\0');
      }
    }
    iVar14 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x1304);
    piVar17 = (int *)(iVar14 + 0x634);
    *piVar17 = *piVar17 + -1;
    if ((*piVar17 == 0) && (*(int *)(iVar14 + 0x630) <= *(int *)(iVar14 + 0x624))) {
      FUN_10098768((void *)(iVar14 + 4),'\0');
      return;
    }
  }
  else {
    DebugBreak();
  }
  return;
}

