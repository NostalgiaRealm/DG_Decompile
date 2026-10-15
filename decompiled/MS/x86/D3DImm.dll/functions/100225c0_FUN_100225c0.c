/*
 * FUN_100225c0 at 100225c0
 * undefined __thiscall FUN_100225c0(void * this, uint param_1, int param_2, uint param_3, uint param_4, float param_5, uint param_6, int param_7)
 * Address ranges: 100225c0-10022e5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100225c0(void *this,uint param_1,int param_2,uint param_3,uint param_4,float param_5,
            uint param_6,int param_7)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  void *pvVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  void *pvVar12;
  float unaff_EBX;
  uint uVar13;
  int *piVar14;
  float fVar15;
  void *pvStack_138;
  int *piStack_134;
  uint uStack_12c;
  void *pvStack_128;
  float local_120;
  int *piStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint auStack_110 [67];
  
  local_120 = (float)(param_1 * 6);
  if ((uint)local_120 < 0x1001) {
    if (*(int **)((int)this + 0x1f6c) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x1f6c) + 4))
                (*(undefined4 *)((int)this + 0x1f80),*(undefined4 *)((int)this + 0x1f90),0);
    }
    if (*(int **)((int)this + 0x1f7c) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x1f7c) + 4))
                (*(undefined4 *)((int)this + 0x1fa0),*(undefined4 *)((int)this + 0x1fa4),0);
    }
    iVar11 = param_7 + -0xc0;
    if (param_7 == 0) {
      iVar11 = 0;
    }
    piStack_11c = *(int **)((int)this + 0x1f6c);
    if (piStack_11c == (int *)0x0) {
      piStack_11c = *(int **)((int)this + 0x1f7c);
    }
    if ((param_7 != 0) || (piStack_11c == (int *)0x0)) {
      FUN_10021510(this,(uint)local_120,param_3,param_4,param_6,iVar11);
      *(undefined4 *)((int)this + 0x21c8) = 1;
      *(undefined1 *)((int)this + 0x21cc) = 0;
      FUN_1002d17c(this,param_1,param_2,(byte)param_3,param_4,param_5,(char)param_6);
      return;
    }
    FUN_100218e0(this,0,0,0);
    piVar14 = (int *)(*(int *)(*(int *)((int)this + 0x1d54) + 0x1304) + 0x634);
    *piVar14 = *piVar14 + 1;
    if (((param_3 & 1) != 0) && (piVar14 = *(int **)((int)this + 0x1f6c), piVar14 != (int *)0x0)) {
      uStack_118 = 0;
      uStack_114 = 0;
      bVar10 = (byte)*(int *)((int)this + 0x1f80);
      auStack_110[0] = (uint)piVar14[5] >> (bVar10 & 0x1f);
      if (auStack_110[0] == 0) {
        auStack_110[0] = 1;
      }
      auStack_110[1] = (uint)piVar14[6] >> (bVar10 & 0x1f);
      if (auStack_110[1] == 0) {
        auStack_110[1] = 1;
      }
      (**(code **)(*piVar14 + 0xc))
                (piVar14[0xb] * *(int *)((int)this + 0x1f90) + *(int *)((int)this + 0x1f80),
                 &uStack_118);
      piVar14 = *(int **)((int)this + 0x1f6c);
      uStack_12c = (**(code **)(*piVar14 + 0x84))();
      piStack_134 = (int *)(*(int *)((int)this + 0x1f90) * piVar14[0xb] +
                           *(int *)((int)this + 0x1f80));
      pvStack_128 = (void *)((int)uStack_12c >> 0x1f);
      uVar6 = FUN_10023740((void *)((int)this + 0x1ec0),uStack_12c,(uint)pvStack_128);
      if (((uVar6 == *(uint *)((int)this + 0x1ec8)) ||
          (iVar11 = *(int *)((int)this + 0x1ec4), *(uint *)(iVar11 + uVar6 * 0x18) != uStack_12c))
         || (*(void **)(iVar11 + 4 + uVar6 * 0x18) != pvStack_128)) {
        puVar7 = &DAT_00000006;
      }
      else {
        puVar7 = (undefined1 *)(uVar6 * 0x18 + 0x12 + iVar11);
      }
      *puVar7 = 1;
      *(undefined1 *)((int)this + 0x21d3) = 1;
      pvVar8 = *(void **)(*(int *)((int)this + 0x1d54) + 0x1304);
      if (((*(int *)((int)pvVar8 + 0x8e0) != 0) && (uStack_12c != 0)) &&
         ((iVar11 = FUN_10055a43(*(void **)((int)pvVar8 + 0x8e4),uStack_12c,(uint)piStack_134,0,
                                 *(int *)((int)pvVar8 + 0x8e0),(int)pvVar8,4,
                                 *(int *)((int)pvVar8 + 0x938),*(int *)((int)pvVar8 + 0x93c)),
          *(int *)(*(int *)((int)pvVar8 + 0x8e0) + 0x20) != 3 && (iVar11 != 4)))) {
        FUN_10051f2d(pvVar8,uStack_12c,piStack_134,iVar11,4);
      }
    }
    local_120 = (float)(param_3 & 6);
    if ((local_120 != 0.0) && (piVar14 = *(int **)((int)this + 0x1f7c), piVar14 != (int *)0x0)) {
      uStack_118 = 0;
      uStack_114 = 0;
      bVar10 = (byte)*(int *)((int)this + 0x1fa0);
      auStack_110[0] = (uint)piVar14[5] >> (bVar10 & 0x1f);
      if (auStack_110[0] == 0) {
        auStack_110[0] = 1;
      }
      auStack_110[1] = (uint)piVar14[6] >> (bVar10 & 0x1f);
      if (auStack_110[1] == 0) {
        auStack_110[1] = 1;
      }
      (**(code **)(*piVar14 + 0xc))
                (piVar14[0xb] * *(int *)((int)this + 0x1fa4) + *(int *)((int)this + 0x1fa0),
                 &uStack_118);
      piVar14 = *(int **)((int)this + 0x1f7c);
      pvVar8 = (void *)(**(code **)(*piVar14 + 0x84))();
      pvVar12 = (void *)((int)pvVar8 >> 0x1f);
      if ((param_3 & 2) != 0) {
        uStack_12c = *(int *)((int)this + 0x1fa4) * piVar14[0xb] + *(int *)((int)this + 0x1fa0);
        uVar6 = FUN_10023740((void *)((int)this + 0x1ec0),(uint)pvVar8,(uint)pvVar12);
        if (((uVar6 == *(uint *)((int)this + 0x1ec8)) ||
            (iVar11 = *(int *)((int)this + 0x1ec4), *(void **)(iVar11 + uVar6 * 0x18) != pvVar8)) ||
           (*(void **)(iVar11 + 4 + uVar6 * 0x18) != pvVar12)) {
          puVar7 = &DAT_00000006;
        }
        else {
          puVar7 = (undefined1 *)(uVar6 * 0x18 + 0x12 + iVar11);
        }
        *puVar7 = 1;
        *(undefined1 *)((int)this + 0x21d3) = 1;
        pvVar2 = *(void **)(*(int *)((int)this + 0x1d54) + 0x1304);
        piVar14 = piStack_134;
        pvStack_138 = pvVar12;
        pvStack_128 = pvVar8;
        if (((*(int *)((int)pvVar2 + 0x8e0) != 0) && (pvVar8 != (void *)0x0)) &&
           ((iVar11 = FUN_10055a43(*(void **)((int)pvVar2 + 0x8e4),(uint)pvVar8,uStack_12c,0,
                                   *(int *)((int)pvVar2 + 0x8e0),(int)pvVar2,0x10,
                                   *(int *)((int)pvVar2 + 0x938),*(int *)((int)pvVar2 + 0x93c)),
            *(int *)(*(int *)((int)pvVar2 + 0x8e0) + 0x20) != 3 && (iVar11 != 0x10)))) {
          FUN_10051f2d(pvVar2,pvVar8,uStack_12c,iVar11,0x10);
        }
      }
      if ((param_3 & 4) != 0) {
        uStack_12c = (*(int *)((int)this + 0x1fa4) + piVar14[9]) * piVar14[0xb] +
                     *(int *)((int)this + 0x1fa0);
        uVar6 = FUN_10023740((void *)((int)this + 0x1ec0),(uint)pvVar8,(uint)pvVar12);
        if (((uVar6 == *(uint *)((int)this + 0x1ec8)) ||
            (iVar11 = *(int *)((int)this + 0x1ec4), *(void **)(iVar11 + uVar6 * 0x18) != pvVar8)) ||
           (*(void **)(iVar11 + 4 + uVar6 * 0x18) != pvVar12)) {
          puVar7 = &DAT_00000006;
        }
        else {
          puVar7 = (undefined1 *)(uVar6 * 0x18 + 0x12 + iVar11);
        }
        *puVar7 = 1;
        *(undefined1 *)((int)this + 0x21d3) = 1;
        pvVar2 = *(void **)(*(int *)((int)this + 0x1d54) + 0x1304);
        pvStack_138 = pvVar8;
        pvStack_128 = pvVar12;
        if ((((*(int *)((int)pvVar2 + 0x8e0) != 0) && (pvVar8 != (void *)0x0)) &&
            (iVar11 = FUN_10055a43(*(void **)((int)pvVar2 + 0x8e4),(uint)pvVar8,uStack_12c,0,
                                   *(int *)((int)pvVar2 + 0x8e0),(int)pvVar2,0x10,
                                   *(int *)((int)pvVar2 + 0x938),*(int *)((int)pvVar2 + 0x93c)),
            *(int *)(*(int *)((int)pvVar2 + 0x8e0) + 0x20) != 3)) && (iVar11 != 0x10)) {
          FUN_10051f2d(pvVar2,pvVar8,uStack_12c,iVar11,0x10);
        }
      }
    }
    piVar14 = piStack_11c;
    (**(code **)(*piStack_11c + 0x20))(0);
    iVar11 = piVar14[6];
    iVar9 = (**(code **)(*piVar14 + 0x24))(0);
    fVar15 = (float)((double)iVar9 + (double)(&DAT_100601f0)[-(iVar9 >> 0x1f)]) /
             (float)((double)iVar11 + (double)(&DAT_100601f0)[-(iVar11 >> 0x1f)]);
    if (param_1 != 0) {
      uVar6 = 0;
      do {
        uVar13 = uVar6 + 1;
        iVar11 = *(int *)(param_2 + 4 + uVar6 * 0x10);
        iVar9 = *(int *)(param_2 + 8 + uVar6 * 0x10);
        iVar3 = *(int *)(param_2 + 0xc + uVar6 * 0x10);
        auStack_110[uVar6 * 4] = (int)((float)*(int *)(param_2 + uVar6 * 0x10) * unaff_EBX);
        auStack_110[uVar6 * 4 + 1] = (int)((float)iVar11 * fVar15);
        auStack_110[uVar6 * 4 + 2] = (int)((float)iVar9 * unaff_EBX);
        auStack_110[uVar6 * 4 + 3] = (int)((float)iVar3 * fVar15);
        this = pvStack_138;
        uVar6 = uVar13;
      } while (uVar13 < param_1);
    }
    if ((uStack_12c != 0) &&
       (FUN_10029340(this,param_4,&local_120), *(int *)((int)this + 0x1f6c) != 0)) {
      uVar4 = *(undefined4 *)((int)this + 0x1f54);
      iVar11 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
      iVar9 = *(int *)(iVar11 + 0x8ec);
      if (iVar9 != 0) {
        iVar3 = *(int *)(iVar11 + 0x628);
        uVar5 = *(undefined4 *)(iVar11 + 0x8e8);
        *(int *)(iVar11 + 0x628) = iVar3 + 1;
        if (((iVar3 == 0) && (*(int *)(iVar11 + 0x8e0) != 0)) && (*(int *)(iVar11 + 0x958) != 0)) {
          uVar6 = 0;
          do {
            (**(code **)**(undefined4 **)(*(int *)(iVar11 + 0x954) + uVar6 * 4))();
            uVar6 = uVar6 + 1;
            this = pvStack_138;
          } while (uVar6 < *(uint *)(iVar11 + 0x958));
        }
        (**(code **)(**(int **)(iVar11 + 0x638) + 0x68))(*(int **)(iVar11 + 0x638),iVar9,uVar5);
        *(undefined4 *)(iVar11 + 0x8ec) = 0;
      }
      iVar9 = *(int *)(iVar11 + 0x628);
      *(int *)(iVar11 + 0x628) = iVar9 + 1;
      if (((iVar9 == 0) && (*(int *)(iVar11 + 0x8e0) != 0)) && (*(int *)(iVar11 + 0x958) != 0)) {
        uVar6 = 0;
        do {
          (**(code **)**(undefined4 **)(*(int *)(iVar11 + 0x954) + uVar6 * 4))();
          uVar6 = uVar6 + 1;
          this = pvStack_138;
        } while (uVar6 < *(uint *)(iVar11 + 0x958));
      }
      (**(code **)(**(int **)(iVar11 + 0x638) + 0xc0))
                (*(int **)(iVar11 + 0x638),uVar4,&local_120,param_1,auStack_110);
      cVar1 = *(char *)(iVar11 + 0x620);
      iVar9 = 1;
      *(undefined1 *)(iVar11 + 0x620) = 0;
      if (cVar1 != '\0') {
        iVar9 = 8;
      }
      iVar9 = *(int *)(iVar11 + 0x624) + iVar9;
      *(int *)(iVar11 + 0x624) = iVar9;
      if (((*(int *)(iVar11 + 0x630) <= iVar9) && (*(int *)(iVar11 + 0x8e0) != 0)) &&
         (*(int *)(iVar11 + 0x634) == 0)) {
        FUN_10052215((void *)(iVar11 + 4),'\0');
      }
    }
    if ((pvStack_128 != (void *)0x0) && (*(int *)((int)this + 0x1f7c) != 0)) {
      uVar4 = *(undefined4 *)((int)this + 0x1f64);
      iVar11 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
      iVar9 = *(int *)(iVar11 + 0x8ec);
      if (iVar9 != 0) {
        iVar3 = *(int *)(iVar11 + 0x628);
        uVar5 = *(undefined4 *)(iVar11 + 0x8e8);
        *(int *)(iVar11 + 0x628) = iVar3 + 1;
        if (((iVar3 == 0) && (*(int *)(iVar11 + 0x8e0) != 0)) && (*(int *)(iVar11 + 0x958) != 0)) {
          uVar6 = 0;
          do {
            (**(code **)**(undefined4 **)(*(int *)(iVar11 + 0x954) + uVar6 * 4))();
            uVar6 = uVar6 + 1;
            this = pvStack_138;
          } while (uVar6 < *(uint *)(iVar11 + 0x958));
        }
        (**(code **)(**(int **)(iVar11 + 0x638) + 0x68))(*(int **)(iVar11 + 0x638),iVar9,uVar5);
        *(undefined4 *)(iVar11 + 0x8ec) = 0;
      }
      iVar9 = *(int *)(iVar11 + 0x628);
      *(int *)(iVar11 + 0x628) = iVar9 + 1;
      if (((iVar9 == 0) && (*(int *)(iVar11 + 0x8e0) != 0)) && (*(int *)(iVar11 + 0x958) != 0)) {
        uVar6 = 0;
        do {
          (**(code **)**(undefined4 **)(*(int *)(iVar11 + 0x954) + uVar6 * 4))();
          uVar6 = uVar6 + 1;
          this = pvStack_138;
        } while (uVar6 < *(uint *)(iVar11 + 0x958));
      }
      (**(code **)(**(int **)(iVar11 + 0x638) + 0xbc))
                (*(int **)(iVar11 + 0x638),uVar4,param_3 >> 1 & 3,param_5,param_6 & 0xff,param_1,
                 auStack_110);
      cVar1 = *(char *)(iVar11 + 0x620);
      iVar9 = 1;
      *(undefined1 *)(iVar11 + 0x620) = 0;
      if (cVar1 != '\0') {
        iVar9 = 8;
      }
      iVar9 = *(int *)(iVar11 + 0x624) + iVar9;
      *(int *)(iVar11 + 0x624) = iVar9;
      if (((*(int *)(iVar11 + 0x630) <= iVar9) && (*(int *)(iVar11 + 0x8e0) != 0)) &&
         (*(int *)(iVar11 + 0x634) == 0)) {
        FUN_10052215((void *)(iVar11 + 4),'\0');
      }
    }
    iVar11 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
    piVar14 = (int *)(iVar11 + 0x634);
    *piVar14 = *piVar14 + -1;
    if ((*piVar14 == 0) && (*(int *)(iVar11 + 0x630) <= *(int *)(iVar11 + 0x624))) {
      FUN_10052215((void *)(iVar11 + 4),'\0');
      return;
    }
  }
  else {
    DebugBreak();
  }
  return;
}

