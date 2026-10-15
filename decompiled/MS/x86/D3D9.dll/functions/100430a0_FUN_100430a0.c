/*
 * FUN_100430a0 at 100430a0
 * undefined __thiscall FUN_100430a0(void * this, uint param_1, int param_2, uint param_3, uint param_4, float param_5, uint param_6, int param_7)
 * Address ranges: 100430a0-1004385f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100430a0(void *this,uint param_1,int param_2,uint param_3,uint param_4,float param_5,
            uint param_6,int param_7)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  int *piVar12;
  uint uVar13;
  float fVar14;
  int *piStack_138;
  float fStack_134;
  uint local_130;
  uint local_124;
  float local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  uint local_110 [67];
  
  local_11c = param_1 * 6;
  if (local_11c < 0x1001) {
    FUN_10040dc0((int)this);
    piVar5 = *(int **)((int)this + 0xfa80);
    if (piVar5 == (int *)0x0) {
      piVar5 = *(int **)((int)this + 0xfa90);
    }
    if ((param_7 != 0) || (piVar5 == (int *)0x0)) {
      FUN_10041e40(this,local_11c,param_3,param_4,param_6,-(uint)(param_7 != 0) & param_7 - 0xc0U);
      *(undefined4 *)((int)this + 0xfd90) = 1;
      *(undefined1 *)((int)this + 0xfd94) = 0;
      FUN_10053dd5(this,param_1,param_2,(byte)param_3,param_4,param_5,(char)param_6);
      return;
    }
    FUN_10042220(this,0,0,0);
    local_124 = 1;
    piVar12 = (int *)(*(int *)(*(int *)((int)this + 0xf6b8) + 0x1304) + 0x634);
    *piVar12 = *piVar12 + 1;
    local_120 = (float)(param_3 & 1);
    if (local_120 != 0.0) {
      uVar13 = 0;
      do {
        piVar12 = *(int **)((int)this + uVar13 * 4 + 0xfa80);
        if (piVar12 != (int *)0x0) {
          iVar8 = *(int *)((int)this + uVar13 * 4 + 0xfa94);
          local_118 = 0;
          local_114 = 0;
          bVar11 = (byte)iVar8;
          local_110[0] = (uint)piVar12[5] >> (bVar11 & 0x1f);
          if (local_110[0] == 0) {
            local_110[0] = local_124;
          }
          local_110[1] = (uint)piVar12[6] >> (bVar11 & 0x1f);
          if (local_110[1] == 0) {
            local_110[1] = 1;
          }
          (**(code **)(*piVar12 + 0xc))
                    (piVar12[0xb] * *(int *)((int)this + uVar13 * 4 + 0xfaa4) + iVar8,&local_118);
          piVar12 = *(int **)((int)this + uVar13 * 4 + 0xfa80);
          fStack_134 = (float)(**(code **)(*piVar12 + 0x84))();
          piStack_138 = (int *)(*(int *)((int)this + uVar13 * 4 + 0xfaa4) * piVar12[0xb] +
                               *(int *)((int)this + uVar13 * 4 + 0xfa94));
          uVar6 = FUN_10043ff0((void *)((int)this + 0xf8f0),(uint)fStack_134,(int)fStack_134 >> 0x1f
                              );
          if (((uVar6 == *(uint *)((int)this + 0xf8f8)) ||
              (iVar8 = *(int *)((int)this + 0xf8f4), *(float *)(iVar8 + uVar6 * 0x18) != fStack_134)
              ) || (*(uint *)(iVar8 + 4 + uVar6 * 0x18) != (int)fStack_134 >> 0x1f)) {
            puVar7 = &DAT_00000007;
          }
          else {
            puVar7 = (undefined1 *)(uVar6 * 0x18 + 0x13 + iVar8);
          }
          *puVar7 = 1;
          *(undefined1 *)((int)this + 0xfd9b) = 1;
          pvVar2 = *(void **)(*(int *)((int)this + 0xf6b8) + 0x1304);
          if (((*(int *)((int)pvVar2 + 0x8e0) != 0) && (fStack_134 != 0.0)) &&
             ((iVar8 = FUN_100c133b(*(void **)((int)pvVar2 + 0x8e4),(uint)fStack_134,
                                    (uint)piStack_138,0,*(int *)((int)pvVar2 + 0x8e0),(int)pvVar2,4,
                                    *(int *)((int)pvVar2 + 0x938),*(int *)((int)pvVar2 + 0x93c)),
              *(int *)(*(int *)((int)pvVar2 + 0x8e0) + 0x20) != 3 && (iVar8 != 4)))) {
            FUN_100ba7a8(pvVar2,fStack_134,piStack_138,iVar8,4);
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < 4);
    }
    local_11c = param_3 & 6;
    if ((local_11c != 0) && (piVar12 = *(int **)((int)this + 0xfa90), piVar12 != (int *)0x0)) {
      local_118 = 0;
      local_114 = 0;
      bVar11 = (byte)*(int *)((int)this + 0xfab4);
      local_110[0] = (uint)piVar12[5] >> (bVar11 & 0x1f);
      if (local_110[0] == 0) {
        local_110[0] = 1;
      }
      local_110[1] = (uint)piVar12[6] >> (bVar11 & 0x1f);
      if (local_110[1] == 0) {
        local_110[1] = 1;
      }
      (**(code **)(*piVar12 + 0xc))
                (piVar12[0xb] * *(int *)((int)this + 0xfab8) + *(int *)((int)this + 0xfab4),
                 &local_118);
      piVar12 = *(int **)((int)this + 0xfa90);
      uVar13 = (**(code **)(*piVar12 + 0x84))();
      uVar6 = (int)uVar13 >> 0x1f;
      if ((param_3 & 2) != 0) {
        fStack_134 = (float)(*(int *)((int)this + 0xfab8) * piVar12[0xb] +
                            *(int *)((int)this + 0xfab4));
        uVar9 = FUN_10043ff0((void *)((int)this + 0xf8f0),uVar13,uVar6);
        if (((uVar9 == *(uint *)((int)this + 0xf8f8)) ||
            (iVar8 = *(int *)((int)this + 0xf8f4), *(uint *)(iVar8 + uVar9 * 0x18) != uVar13)) ||
           (*(uint *)(iVar8 + 4 + uVar9 * 0x18) != uVar6)) {
          puVar7 = &DAT_00000007;
        }
        else {
          puVar7 = (undefined1 *)(uVar9 * 0x18 + 0x13 + iVar8);
        }
        *puVar7 = 1;
        *(undefined1 *)((int)this + 0xfd9b) = 1;
        pvVar2 = *(void **)(*(int *)((int)this + 0xf6b8) + 0x1304);
        piVar12 = piStack_138;
        local_124 = uVar6;
        if (((*(int *)((int)pvVar2 + 0x8e0) != 0) && (uVar13 != 0)) &&
           ((iVar8 = FUN_100c133b(*(void **)((int)pvVar2 + 0x8e4),uVar13,(uint)fStack_134,0,
                                  *(int *)((int)pvVar2 + 0x8e0),(int)pvVar2,0x10,
                                  *(int *)((int)pvVar2 + 0x938),*(int *)((int)pvVar2 + 0x93c)),
            *(int *)(*(int *)((int)pvVar2 + 0x8e0) + 0x20) != 3 && (iVar8 != 0x10)))) {
          FUN_100ba7a8(pvVar2,uVar13,fStack_134,iVar8,0x10);
        }
      }
      if ((param_3 & 4) != 0) {
        fStack_134 = (float)((*(int *)((int)this + 0xfab8) + piVar12[9]) * piVar12[0xb] +
                            *(int *)((int)this + 0xfab4));
        uVar9 = FUN_10043ff0((void *)((int)this + 0xf8f0),uVar13,uVar6);
        if (((uVar9 == *(uint *)((int)this + 0xf8f8)) ||
            (iVar8 = *(int *)((int)this + 0xf8f4), *(uint *)(iVar8 + uVar9 * 0x18) != uVar13)) ||
           (*(uint *)(iVar8 + 4 + uVar9 * 0x18) != uVar6)) {
          puVar7 = &DAT_00000007;
        }
        else {
          puVar7 = (undefined1 *)(uVar9 * 0x18 + 0x13 + iVar8);
        }
        *puVar7 = 1;
        *(undefined1 *)((int)this + 0xfd9b) = 1;
        pvVar2 = *(void **)(*(int *)((int)this + 0xf6b8) + 0x1304);
        local_124 = uVar6;
        if ((((*(int *)((int)pvVar2 + 0x8e0) != 0) && (uVar13 != 0)) &&
            (iVar8 = FUN_100c133b(*(void **)((int)pvVar2 + 0x8e4),uVar13,(uint)fStack_134,0,
                                  *(int *)((int)pvVar2 + 0x8e0),(int)pvVar2,0x10,
                                  *(int *)((int)pvVar2 + 0x938),*(int *)((int)pvVar2 + 0x93c)),
            *(int *)(*(int *)((int)pvVar2 + 0x8e0) + 0x20) != 3)) && (iVar8 != 0x10)) {
          FUN_100ba7a8(pvVar2,uVar13,fStack_134,iVar8,0x10);
        }
      }
    }
    (**(code **)(*piVar5 + 0x20))(0);
    iVar8 = piVar5[6];
    iVar10 = (**(code **)(*piVar5 + 0x24))(0);
    fVar14 = (float)((double)iVar10 + (double)(&DAT_100d97a0)[-(iVar10 >> 0x1f)]) /
             (float)((double)iVar8 + (double)(&DAT_100d97a0)[-(iVar8 >> 0x1f)]);
    if (param_1 != 0) {
      uVar13 = 0;
      do {
        uVar6 = uVar13 + 1;
        iVar8 = *(int *)(param_2 + 4 + uVar13 * 0x10);
        iVar10 = *(int *)(param_2 + 8 + uVar13 * 0x10);
        iVar3 = *(int *)(param_2 + 0xc + uVar13 * 0x10);
        local_110[uVar13 * 4] = (int)((float)*(int *)(param_2 + uVar13 * 0x10) * fStack_134);
        local_110[uVar13 * 4 + 1] = (int)((float)iVar8 * fVar14);
        local_110[uVar13 * 4 + 2] = (int)((float)iVar10 * fStack_134);
        local_110[uVar13 * 4 + 3] = (int)((float)iVar3 * fVar14);
        this = piStack_138;
        uVar13 = uVar6;
      } while (uVar6 < param_1);
    }
    if (piVar5 != (int *)0x0) {
      FUN_1004f390(this,param_4,&local_120);
      local_130 = 0;
      do {
        if (*(int *)((int)this + (local_130 + 0x3ea0) * 4) != 0) {
          iVar8 = *(int *)((int)this + (local_130 + 0x3e79) * 4);
          iVar10 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x1304);
          iVar3 = *(int *)(iVar10 + 0x8ec);
          if (iVar3 != 0) {
            uVar4 = *(undefined4 *)(iVar10 + 0x8e8);
            FUN_100ba94f(iVar10);
            (**(code **)(**(int **)(iVar10 + 0x638) + 0x68))(*(int **)(iVar10 + 0x638),iVar3,uVar4);
            *(undefined4 *)(iVar10 + 0x8ec) = 0;
          }
          FUN_100ba94f(iVar10);
          (**(code **)(**(int **)(iVar10 + 0x638) + 0xc0))
                    (*(int **)(iVar10 + 0x638),iVar8,&local_120,param_1,local_110);
          cVar1 = *(char *)(iVar10 + 0x620);
          iVar8 = 1;
          *(undefined1 *)(iVar10 + 0x620) = 0;
          if (cVar1 != '\0') {
            iVar8 = 8;
          }
          iVar8 = *(int *)(iVar10 + 0x624) + iVar8;
          *(int *)(iVar10 + 0x624) = iVar8;
          this = piStack_138;
          if (((*(int *)(iVar10 + 0x630) <= iVar8) && (*(int *)(iVar10 + 0x8e0) != 0)) &&
             (*(int *)(iVar10 + 0x634) == 0)) {
            FUN_100bad40((void *)(iVar10 + 4),'\0');
          }
        }
        local_130 = local_130 + 1;
      } while (local_130 < 4);
    }
    if ((local_124 != 0) && (*(int *)((int)this + 0xfa90) != 0)) {
      iVar8 = *(int *)((int)this + 0xfa78);
      iVar10 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x1304);
      iVar3 = *(int *)(iVar10 + 0x8ec);
      if (iVar3 != 0) {
        uVar4 = *(undefined4 *)(iVar10 + 0x8e8);
        FUN_100ba94f(iVar10);
        (**(code **)(**(int **)(iVar10 + 0x638) + 0x68))(*(int **)(iVar10 + 0x638),iVar3,uVar4);
        *(undefined4 *)(iVar10 + 0x8ec) = 0;
      }
      FUN_100ba94f(iVar10);
      (**(code **)(**(int **)(iVar10 + 0x638) + 0xbc))
                (*(int **)(iVar10 + 0x638),iVar8,param_3 >> 1 & 3,param_5,param_6 & 0xff,param_1,
                 local_110);
      cVar1 = *(char *)(iVar10 + 0x620);
      iVar8 = 1;
      *(undefined1 *)(iVar10 + 0x620) = 0;
      if (cVar1 != '\0') {
        iVar8 = 8;
      }
      iVar8 = *(int *)(iVar10 + 0x624) + iVar8;
      *(int *)(iVar10 + 0x624) = iVar8;
      if (((*(int *)(iVar10 + 0x630) <= iVar8) && (*(int *)(iVar10 + 0x8e0) != 0)) &&
         (*(int *)(iVar10 + 0x634) == 0)) {
        FUN_100bad40((void *)(iVar10 + 4),'\0');
      }
    }
    iVar8 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x1304);
    piVar5 = (int *)(iVar8 + 0x634);
    *piVar5 = *piVar5 + -1;
    if ((*piVar5 == 0) && (*(int *)(iVar8 + 0x630) <= *(int *)(iVar8 + 0x624))) {
      FUN_100bad40((void *)(iVar8 + 4),'\0');
      return;
    }
  }
  else {
    DebugBreak();
  }
  return;
}

