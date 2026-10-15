/*
 * FUN_18004a980 at 18004a980
 * undefined __fastcall FUN_18004a980(longlong param_1, uint param_2, longlong param_3, uint param_4, uint param_5, float param_6, int param_7, longlong param_8)
 * Address ranges: 18004a980-18004b5b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a980(longlong param_1,uint param_2,longlong param_3,uint param_4,uint param_5,
                  float param_6,int param_7,longlong param_8)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong *plVar19;
  float fVar20;
  float fVar21;
  undefined8 local_170;
  uint local_168;
  uint local_164;
  uint local_160;
  float local_158 [2];
  uint local_150;
  uint local_14c;
  int local_148 [68];
  
  uVar18 = param_2 * 6;
  if (uVar18 < 0x1001) {
    FUN_180048cf0(param_1);
    plVar19 = *(longlong **)(param_1 + 0xfcc0);
    lVar15 = param_8 + -0x100;
    if (param_8 == 0) {
      lVar15 = 0;
    }
    if (plVar19 == (longlong *)0x0) {
      plVar19 = *(longlong **)(param_1 + 0xfce0);
    }
    if ((param_8 == 0) && (plVar19 != (longlong *)0x0)) {
      FUN_180049b30(param_1,0,0,0);
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508) + 0x684);
      *piVar1 = *piVar1 + 1;
      local_160 = param_4 & 1;
      if (local_160 != 0) {
        lVar15 = 0;
        do {
          plVar5 = *(longlong **)(param_1 + 0xfcc0 + lVar15 * 8);
          if (plVar5 != (longlong *)0x0) {
            iVar10 = *(int *)(param_1 + 0xfce8 + lVar15 * 4);
            local_170 = 0;
            bVar14 = (byte)iVar10;
            bVar9 = bVar14 & 0x1f;
            local_168 = *(uint *)((longlong)plVar5 + 0x24) >> bVar9;
            if (*(uint *)((longlong)plVar5 + 0x24) >> bVar9 == 0) {
              local_168 = 1;
            }
            bVar14 = bVar14 & 0x1f;
            local_164 = *(uint *)(plVar5 + 5) >> bVar14;
            if (*(uint *)(plVar5 + 5) >> bVar14 == 0) {
              local_164 = 1;
            }
            (**(code **)(*plVar5 + 0x18))
                      (plVar5,*(int *)(param_1 + 0xfcf8 + lVar15 * 4) *
                              *(int *)((longlong)plVar5 + 0x3c) + iVar10,&local_170);
            plVar5 = *(longlong **)(param_1 + 0xfcc0 + lVar15 * 8);
            uVar12 = (**(code **)(*plVar5 + 0x108))(plVar5);
            iVar10 = *(int *)(param_1 + 0xfcf8 + lVar15 * 4);
            iVar16 = *(int *)((longlong)plVar5 + 0x3c);
            iVar3 = *(int *)(param_1 + 0xfce8 + lVar15 * 4);
            uVar13 = uVar12;
            FUN_1800442b0(param_1,uVar12);
            *(undefined1 *)(param_1 + 0x1018b) = 1;
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
            if ((*(longlong *)(lVar6 + 0xb10) != 0) && (uVar12 != 0)) {
              uVar18 = iVar16 * iVar10 + iVar3;
              iVar10 = FUN_1800ea5c8(*(longlong **)(lVar6 + 0xb18),uVar13,(ulonglong)uVar18,0,
                                     *(longlong *)(lVar6 + 0xb10),lVar6,4,
                                     *(longlong *)(lVar6 + 0xb78));
              if ((*(int *)(*(longlong *)(lVar6 + 0xb10) + 0x30) != 3) && (iVar10 != 4)) {
                FUN_1800e23ec(lVar6,uVar12,uVar18,iVar10,4);
              }
            }
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 != 4);
      }
      local_170 = CONCAT44(local_170._4_4_,param_4) & 0xffffffff00000006;
      if (((param_4 & 6) != 0) &&
         (plVar5 = *(longlong **)(param_1 + 0xfce0), plVar5 != (longlong *)0x0)) {
        local_158[0] = 0.0;
        local_158[1] = 0.0;
        bVar14 = (byte)*(int *)(param_1 + 0xfd08);
        bVar9 = bVar14 & 0x1f;
        local_150 = *(uint *)((longlong)plVar5 + 0x24) >> bVar9;
        if (*(uint *)((longlong)plVar5 + 0x24) >> bVar9 == 0) {
          local_150 = 1;
        }
        bVar14 = bVar14 & 0x1f;
        local_14c = *(uint *)(plVar5 + 5) >> bVar14;
        if (*(uint *)(plVar5 + 5) >> bVar14 == 0) {
          local_14c = 1;
        }
        (**(code **)(*plVar5 + 0x18))
                  (plVar5,*(int *)(param_1 + 0xfd0c) * *(int *)((longlong)plVar5 + 0x3c) +
                          *(int *)(param_1 + 0xfd08),local_158);
        plVar5 = *(longlong **)(param_1 + 0xfce0);
        uVar13 = (**(code **)(*plVar5 + 0x108))(plVar5);
        if ((param_4 & 2) != 0) {
          iVar10 = *(int *)((longlong)plVar5 + 0x3c);
          iVar16 = *(int *)(param_1 + 0xfd0c);
          iVar3 = *(int *)(param_1 + 0xfd08);
          FUN_1800442b0(param_1,uVar13);
          *(undefined1 *)(param_1 + 0x1018b) = 1;
          lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
          if ((*(longlong *)(lVar15 + 0xb10) != 0) && (uVar13 != 0)) {
            uVar18 = iVar3 + iVar16 * iVar10;
            iVar10 = FUN_1800ea5c8(*(longlong **)(lVar15 + 0xb18),uVar13,(ulonglong)uVar18,0,
                                   *(longlong *)(lVar15 + 0xb10),lVar15,0x10,
                                   *(longlong *)(lVar15 + 0xb78));
            if ((*(int *)(*(longlong *)(lVar15 + 0xb10) + 0x30) != 3) && (iVar10 != 0x10)) {
              FUN_1800e23ec(lVar15,uVar13,uVar18,iVar10,0x10);
            }
          }
        }
        if ((param_4 & 4) != 0) {
          iVar10 = *(int *)((longlong)plVar5 + 0x34);
          iVar16 = *(int *)(param_1 + 0xfd0c);
          iVar3 = *(int *)((longlong)plVar5 + 0x3c);
          iVar17 = *(int *)(param_1 + 0xfd08);
          uVar12 = uVar13;
          FUN_1800442b0(param_1,uVar13);
          *(undefined1 *)(param_1 + 0x1018b) = 1;
          lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
          if ((*(longlong *)(lVar15 + 0xb10) != 0) && (uVar13 != 0)) {
            uVar18 = iVar3 * (iVar10 + iVar16) + iVar17;
            iVar10 = FUN_1800ea5c8(*(longlong **)(lVar15 + 0xb18),uVar12,(ulonglong)uVar18,0,
                                   *(longlong *)(lVar15 + 0xb10),lVar15,0x10,
                                   *(longlong *)(lVar15 + 0xb78));
            if ((*(int *)(*(longlong *)(lVar15 + 0xb10) + 0x30) != 3) && (iVar10 != 0x10)) {
              FUN_1800e23ec(lVar15,uVar13,uVar18,iVar10,0x10);
            }
          }
        }
      }
      uVar18 = *(uint *)((longlong)plVar19 + 0x24);
      uVar11 = (**(code **)(*plVar19 + 0x40))(plVar19);
      uVar4 = *(uint *)(plVar19 + 5);
      fVar21 = (float)uVar11 / (float)uVar18;
      uVar18 = (**(code **)(*plVar19 + 0x48))(plVar19);
      uVar13 = 0;
      fVar20 = (float)uVar18 / (float)uVar4;
      if (3 < param_2) {
        do {
          iVar17 = (int)uVar13;
          iVar10 = *(int *)(param_3 + 8 + uVar13 * 0x10);
          iVar16 = *(int *)(param_3 + 4 + uVar13 * 0x10);
          iVar3 = *(int *)(param_3 + 0xc + uVar13 * 0x10);
          local_148[uVar13 * 4] = (int)((float)*(int *)(param_3 + uVar13 * 0x10) * fVar21);
          local_148[uVar13 * 4 + 1] = (int)((float)iVar16 * fVar20);
          local_148[uVar13 * 4 + 2] = (int)((float)iVar10 * fVar21);
          local_148[uVar13 * 4 + 3] = (int)((float)iVar3 * fVar20);
          uVar13 = (ulonglong)(iVar17 + 1);
          iVar10 = *(int *)(param_3 + 8 + uVar13 * 0x10);
          iVar16 = *(int *)(param_3 + 4 + uVar13 * 0x10);
          iVar3 = *(int *)(param_3 + 0xc + uVar13 * 0x10);
          local_148[uVar13 * 4] = (int)((float)*(int *)(param_3 + uVar13 * 0x10) * fVar21);
          local_148[uVar13 * 4 + 1] = (int)((float)iVar16 * fVar20);
          local_148[uVar13 * 4 + 2] = (int)((float)iVar10 * fVar21);
          local_148[uVar13 * 4 + 3] = (int)((float)iVar3 * fVar20);
          uVar13 = (ulonglong)(iVar17 + 2);
          iVar10 = *(int *)(param_3 + 8 + uVar13 * 0x10);
          iVar16 = *(int *)(param_3 + 4 + uVar13 * 0x10);
          iVar3 = *(int *)(param_3 + 0xc + uVar13 * 0x10);
          local_148[uVar13 * 4] = (int)((float)*(int *)(param_3 + uVar13 * 0x10) * fVar21);
          local_148[uVar13 * 4 + 1] = (int)((float)iVar16 * fVar20);
          local_148[uVar13 * 4 + 2] = (int)((float)iVar10 * fVar21);
          local_148[uVar13 * 4 + 3] = (int)((float)iVar3 * fVar20);
          uVar12 = (ulonglong)(iVar17 + 3);
          iVar10 = *(int *)(param_3 + 4 + uVar12 * 0x10);
          iVar16 = *(int *)(param_3 + 8 + uVar12 * 0x10);
          iVar3 = *(int *)(param_3 + 0xc + uVar12 * 0x10);
          uVar13 = (ulonglong)(iVar17 + 4U);
          local_148[uVar12 * 4] = (int)((float)*(int *)(param_3 + uVar12 * 0x10) * fVar21);
          local_148[uVar12 * 4 + 1] = (int)((float)iVar10 * fVar20);
          local_148[uVar12 * 4 + 2] = (int)((float)iVar16 * fVar21);
          local_148[uVar12 * 4 + 3] = (int)((float)iVar3 * fVar20);
        } while (iVar17 + 4U < param_2 - 3);
      }
      uVar18 = (uint)uVar13;
      while (uVar18 < param_2) {
        uVar18 = (int)uVar13 + 1;
        iVar10 = *(int *)(param_3 + 8 + uVar13 * 0x10);
        iVar16 = *(int *)(param_3 + 4 + uVar13 * 0x10);
        iVar3 = *(int *)(param_3 + 0xc + uVar13 * 0x10);
        local_148[uVar13 * 4] = (int)((float)*(int *)(param_3 + uVar13 * 0x10) * fVar21);
        local_148[uVar13 * 4 + 1] = (int)((float)iVar16 * fVar20);
        local_148[uVar13 * 4 + 2] = (int)((float)iVar10 * fVar21);
        local_148[uVar13 * 4 + 3] = (int)((float)iVar3 * fVar20);
        uVar13 = (ulonglong)uVar18;
      }
      if (local_160 != 0) {
        FUN_18005b010(param_1,param_5,local_158);
        lVar15 = 0;
        do {
          if (*(longlong *)(param_1 + 0xfcc0 + lVar15 * 8) != 0) {
            uVar7 = *(undefined8 *)(param_1 + 0xfba0 + lVar15 * 8);
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
            iVar10 = *(int *)(lVar6 + 0xb28);
            if (iVar10 != 0) {
              iVar16 = *(int *)(lVar6 + 0x67c);
              uVar8 = *(undefined8 *)(lVar6 + 0xb20);
              *(int *)(lVar6 + 0x67c) = iVar16 + 1;
              if (((iVar16 == 0) && (*(longlong *)(lVar6 + 0xb10) != 0)) &&
                 (uVar13 = 0, *(int *)(lVar6 + 0xba8) != 0)) {
                do {
                  (**(code **)**(undefined8 **)(*(longlong *)(lVar6 + 0xba0) + uVar13 * 8))();
                  uVar18 = (int)uVar13 + 1;
                  uVar13 = (ulonglong)uVar18;
                } while (uVar18 < *(uint *)(lVar6 + 0xba8));
              }
              (**(code **)(**(longlong **)(lVar6 + 0x688) + 0xd0))
                        (*(longlong **)(lVar6 + 0x688),iVar10,uVar8);
              *(undefined4 *)(lVar6 + 0xb28) = 0;
            }
            iVar10 = *(int *)(lVar6 + 0x67c);
            *(int *)(lVar6 + 0x67c) = iVar10 + 1;
            if (((iVar10 == 0) && (*(longlong *)(lVar6 + 0xb10) != 0)) &&
               (uVar13 = 0, *(int *)(lVar6 + 0xba8) != 0)) {
              do {
                (**(code **)**(undefined8 **)(*(longlong *)(lVar6 + 0xba0) + uVar13 * 8))();
                uVar18 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar18;
              } while (uVar18 < *(uint *)(lVar6 + 0xba8));
            }
            (**(code **)(**(longlong **)(lVar6 + 0x688) + 0x180))
                      (*(longlong **)(lVar6 + 0x688),uVar7,local_158,param_2,local_148);
            cVar2 = *(char *)(lVar6 + 0x674);
            *(undefined1 *)(lVar6 + 0x674) = 0;
            iVar10 = 1;
            if (cVar2 != '\0') {
              iVar10 = 8;
            }
            *(int *)(lVar6 + 0x678) = *(int *)(lVar6 + 0x678) + iVar10;
            if (((*(int *)(lVar6 + 0x680) <= *(int *)(lVar6 + 0x678)) &&
                (*(longlong *)(lVar6 + 0xb10) != 0)) && (*(int *)(lVar6 + 0x684) == 0)) {
              FUN_1800e2ae8(lVar6 + 8,'\0');
            }
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 != 4);
      }
      if (((int)local_170 != 0) && (*(longlong *)(param_1 + 0xfce0) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0xfcb0);
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
        iVar10 = *(int *)(lVar15 + 0xb28);
        if (iVar10 != 0) {
          iVar16 = *(int *)(lVar15 + 0x67c);
          local_170 = *(ulonglong *)(lVar15 + 0xb20);
          *(int *)(lVar15 + 0x67c) = iVar16 + 1;
          if (((iVar16 == 0) && (*(longlong *)(lVar15 + 0xb10) != 0)) &&
             (uVar13 = 0, *(int *)(lVar15 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar15 + 0xba0) + uVar13 * 8))();
              uVar18 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar18;
            } while (uVar18 < *(uint *)(lVar15 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar15 + 0x688) + 0xd0))
                    (*(longlong **)(lVar15 + 0x688),iVar10,local_170);
          *(undefined4 *)(lVar15 + 0xb28) = 0;
        }
        iVar10 = *(int *)(lVar15 + 0x67c);
        *(int *)(lVar15 + 0x67c) = iVar10 + 1;
        if (((iVar10 == 0) && (*(longlong *)(lVar15 + 0xb10) != 0)) &&
           (uVar13 = 0, *(int *)(lVar15 + 0xba8) != 0)) {
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar15 + 0xba0) + uVar13 * 8))();
            uVar18 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar18;
          } while (uVar18 < *(uint *)(lVar15 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar15 + 0x688) + 0x178))
                  (*(longlong **)(lVar15 + 0x688),uVar7,param_4 >> 1 & 3,param_6,(undefined1)param_7
                   ,param_2,local_148);
        cVar2 = *(char *)(lVar15 + 0x674);
        *(undefined1 *)(lVar15 + 0x674) = 0;
        iVar10 = 1;
        if (cVar2 != '\0') {
          iVar10 = 8;
        }
        *(int *)(lVar15 + 0x678) = *(int *)(lVar15 + 0x678) + iVar10;
        if (((*(int *)(lVar15 + 0x680) <= *(int *)(lVar15 + 0x678)) &&
            (*(longlong *)(lVar15 + 0xb10) != 0)) && (*(int *)(lVar15 + 0x684) == 0)) {
          FUN_1800e2ae8(lVar15 + 8,'\0');
        }
      }
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
      piVar1 = (int *)(lVar15 + 0x684);
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && (*(int *)(lVar15 + 0x680) <= *(int *)(lVar15 + 0x678))) {
        FUN_1800e2ae8(lVar15 + 8,'\0');
      }
    }
    else {
      if ((*(char *)(param_1 + 0x7662) == '\0') ||
         ((((param_4 != *(uint *)(param_1 + 0x7640) || (param_5 != *(uint *)(param_1 + 0x7644))) ||
           (param_7 != *(int *)(param_1 + 0x7648))) ||
          ((lVar15 != *(longlong *)(param_1 + 0xfcb8) ||
           ((uint)((0x1000 - *(int *)(param_1 + 0x74)) - *(int *)(param_1 + 0x70)) < uVar18)))))) {
        FUN_180049b30(param_1,(uint)((0x1000 - *(int *)(param_1 + 0x74)) - *(int *)(param_1 + 0x70))
                              < uVar18,0,0x14);
        if ((*(char *)(param_1 + 0x7662) == '\0') ||
           (((param_4 != *(uint *)(param_1 + 0x7640) || (lVar15 != *(longlong *)(param_1 + 0xfcb8)))
            || ((*(int *)(param_1 + 0xfe8) != 0x14 ||
                (*(int *)(param_1 + 0x102c) != *(int *)(param_1 + 0x7c))))))) {
          *(uint *)(param_1 + 0x7640) = param_4;
          if (*(char *)(param_1 + 0x7662) == '\0') {
            *(undefined1 *)(param_1 + 0xf68e) = 1;
          }
          if (*(longlong *)(param_1 + 0xff38) != *(longlong *)(param_1 + 0xf718)) {
            *(longlong *)(param_1 + 0xff38) = *(longlong *)(param_1 + 0xf718);
            *(undefined1 *)(param_1 + 0xf68f) = 1;
          }
          if (*(int *)(param_1 + 0xfe8) != 0x14) {
            *(undefined4 *)(param_1 + 0xfe8) = 0x14;
            *(undefined1 *)(param_1 + 0xf68f) = 1;
          }
          if (*(int *)(param_1 + 0x102c) != *(int *)(param_1 + 0x7c)) {
            *(int *)(param_1 + 0x102c) = *(int *)(param_1 + 0x7c);
            *(undefined1 *)(param_1 + 0xf68f) = 1;
          }
          if ((lVar15 != 0) && (lVar15 != *(longlong *)(param_1 + 0xfcb8))) {
            FUN_1800438c0(param_1,*(ulonglong *)(param_1 + 0xfe90));
            *(undefined1 *)(param_1 + 0xf689) = 1;
          }
          *(longlong *)(param_1 + 0xfcb8) = lVar15;
          *(undefined8 *)(param_1 + 0xf940) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xf6f8) + 0x158);
          *(undefined8 *)(param_1 + 0xf8f0) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xf6f8) + 0x160);
          *(undefined8 *)(param_1 + 0xf910) = 0;
          *(undefined4 *)(param_1 + 0xf94c) = 3;
          *(undefined4 *)(param_1 + 0xffc4) = 4;
          *(undefined1 *)(param_1 + 0x7668) = 0;
          *(undefined1 *)(param_1 + 0xf688) = 1;
          if (*(char *)(param_1 + 0x7662) == '\0') {
            *(undefined1 *)(param_1 + 0x7662) = 1;
            FUN_18005a5c0(param_1);
          }
          *(undefined2 *)(param_1 + 0x10189) = 0x101;
          *(undefined1 *)(param_1 + 0x10188) = 1;
        }
      }
      *(undefined4 *)(param_1 + 0x10180) = 1;
      *(undefined1 *)(param_1 + 0x10184) = 0;
      FUN_18005f88c(param_1,param_2,param_3,(ulonglong)param_4,param_5,param_6,(undefined1)param_7);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018004b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}

