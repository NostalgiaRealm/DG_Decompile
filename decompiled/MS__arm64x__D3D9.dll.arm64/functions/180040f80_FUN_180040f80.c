/*
 * FUN_180040f80 at 180040f80
 * undefined FUN_180040f80(void)
 * Address ranges: 180040f80-180040fa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180040f80(undefined4 param_1,longlong param_2,uint param_3,longlong param_4,uint param_5,
                  uint param_6,undefined4 param_7,longlong param_8)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 extraout_x1;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  float fVar18;
  undefined8 uStack_198;
  float fStack_190;
  float fStack_18c;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_178;
  undefined8 uStack_170;
  uint uStack_168;
  uint uStack_164;
  int aiStack_160 [64];
  
  lStack_178 = param_2 + 0xc000;
  lStack_180 = param_2 + 0x4000;
  if (param_3 * 6 < 0x1001) {
    FUN_18003dea0();
    lVar11 = 0;
    if (param_8 != 0) {
      lVar11 = param_8 + -0x100;
    }
    lVar1 = param_2 + 0xfcc0;
    plVar13 = *(longlong **)(param_2 + 0xfcc0);
    if (plVar13 == (longlong *)0x0) {
      plVar13 = *(longlong **)(param_2 + 0xfce0);
    }
    if ((param_8 == 0) && (plVar13 != (longlong *)0x0)) {
      FUN_18003feb0(param_2,0,0,0);
      lVar11 = *(longlong *)(*(longlong *)(param_2 + 0xf6e0) + 0x1508);
      *(int *)(lVar11 + 0x684) = *(int *)(lVar11 + 0x684) + 1;
      if ((param_5 & 1) != 0) {
        lVar11 = 0;
        uStack_198 = plVar13;
        lStack_188 = param_4;
        do {
          plVar13 = *(longlong **)(lVar1 + lVar11 * 8);
          if (plVar13 != (longlong *)0x0) {
            uStack_170 = 0;
            uVar5 = *(uint *)(param_2 + 0xfce8 + lVar11 * 4);
            uStack_168 = *(uint *)((longlong)plVar13 + 0x24) >> (ulonglong)(uVar5 & 0x1f);
            if (uStack_168 == 0) {
              uStack_168 = 1;
            }
            uStack_164 = *(uint *)(plVar13 + 5) >> (ulonglong)(uVar5 & 0x1f);
            if (uStack_164 == 0) {
              uStack_164 = 1;
            }
            (**(code **)(*plVar13 + 0x18))
                      (plVar13,uVar5 + *(int *)((longlong)plVar13 + 0x3c) *
                                       *(int *)(param_2 + 0xfcf8 + lVar11 * 4),&uStack_170);
            plVar13 = *(longlong **)(lVar1 + lVar11 * 8);
            lVar6 = (**(code **)(*plVar13 + 0x108))(plVar13);
            iVar7 = *(int *)(param_2 + 0xfcf8 + lVar11 * 4);
            iVar3 = *(int *)((longlong)plVar13 + 0x3c);
            iVar8 = *(int *)(param_2 + 0xfce8 + lVar11 * 4);
            FUN_1800395e0(param_2,lVar6);
            *(undefined1 *)(param_2 + 0x1018b) = 1;
            lVar12 = *(longlong *)(*(longlong *)(param_2 + 0xf6e0) + 0x1508);
            if ((*(longlong *)(lVar12 + 0xb10) != 0) && (lVar6 != 0)) {
              iVar8 = iVar8 + iVar7 * iVar3;
              iVar3 = FUN_1800f1b78(*(undefined8 *)(lVar12 + 0xb18),extraout_x1,iVar8,0,
                                    *(longlong *)(lVar12 + 0xb10),lVar12,4,
                                    *(undefined8 *)(lVar12 + 0xb78));
              if (*(int *)(*(longlong *)(lVar12 + 0xb10) + 0x30) != 3 && iVar3 != 4) {
                FUN_1800e7f80(lVar12,lVar6,iVar8,iVar3,4);
              }
            }
          }
          lVar11 = lVar11 + 1;
          param_4 = lStack_188;
          plVar13 = uStack_198;
        } while (lVar11 != 4);
      }
      if (((param_5 & 6) != 0) && (*(longlong *)(param_2 + 0xfce0) != 0)) {
        FUN_180038d70(param_2);
        plVar17 = *(longlong **)(param_2 + 0xfce0);
        uStack_198 = plVar17;
        lStack_188 = (**(code **)(*plVar17 + 0x108))(plVar17);
        lVar11 = param_2 + 0x10000;
        if ((param_5 >> 1 & 1) != 0) {
          FUN_1800395e0(param_2,lStack_188,
                        *(int *)(lStack_178 + 0x3d08) +
                        *(int *)(lStack_178 + 0x3d0c) * *(int *)((longlong)plVar17 + 0x3c));
          *(undefined1 *)(lVar11 + 0x18b) = 1;
          FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_2 + 0xf6e0) + 0x1508));
        }
        if ((param_5 >> 2 & 1) != 0) {
          FUN_1800395e0(param_2,lStack_188,
                        *(int *)(lStack_178 + 0x3d08) +
                        (*(int *)(lStack_178 + 0x3d0c) + *(int *)((longlong)uStack_198 + 0x34)) *
                        *(int *)((longlong)uStack_198 + 0x3c));
          *(undefined1 *)(param_2 + 0x1018b) = 1;
          FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_2 + 0xf6e0) + 0x1508));
        }
      }
      uVar5 = *(uint *)((longlong)plVar13 + 0x24);
      uVar4 = (**(code **)(*plVar13 + 0x40))(plVar13,0);
      uVar9 = *(uint *)(plVar13 + 5);
      fVar18 = (float)uVar4 / (float)uVar5;
      uVar5 = (**(code **)(*plVar13 + 0x48))(plVar13,0);
      if (param_3 != 0) {
        uVar14 = 0;
        do {
          lVar11 = uVar14 * 0x10;
          iVar3 = *(int *)(param_4 + 4 + lVar11);
          uVar4 = (int)uVar14 + 1;
          iVar7 = *(int *)(param_4 + 0xc + lVar11);
          iVar8 = *(int *)(param_4 + 8 + lVar11);
          aiStack_160[uVar14 * 4] = (int)((float)*(int *)(param_4 + lVar11) * fVar18);
          aiStack_160[uVar14 * 4 + 1] = (int)((float)iVar3 * ((float)uVar5 / (float)uVar9));
          aiStack_160[uVar14 * 4 + 2] = (int)((float)iVar8 * fVar18);
          aiStack_160[uVar14 * 4 + 3] = (int)((float)iVar7 * ((float)uVar5 / (float)uVar9));
          uVar14 = (ulonglong)uVar4;
        } while (uVar4 < param_3);
      }
      if ((param_5 & 1) != 0) {
        if (*(int *)(lStack_180 + 0x299c) == 0) {
          uVar9 = param_6 >> 0x10 & 0xff;
          uVar4 = param_6 >> 8 & 0xff;
          uVar10 = 0xff;
          uVar5 = param_6 & 0xff;
        }
        else {
          uVar9 = *(uint *)(lStack_180 + 0x29b0) & param_6 >> 0x10;
          uVar4 = *(uint *)(lStack_180 + 0x29b4) & param_6 >> 8;
          uVar10 = *(uint *)(lStack_180 + 0x29bc);
          uVar5 = *(uint *)(lStack_180 + 0x29b8) & param_6;
        }
        lVar11 = 0;
        uStack_198 = (longlong *)CONCAT44((float)uVar4 / 255.0,(float)uVar9 / 255.0);
        fStack_190 = (float)uVar5 / 255.0;
        fStack_18c = (float)(uVar10 & param_6 >> 0x18) / 255.0;
        do {
          if (*(longlong *)(lVar1 + lVar11 * 8) != 0) {
            uVar15 = *(undefined8 *)(param_2 + 0xfba0 + lVar11 * 8);
            lVar6 = *(longlong *)(*(longlong *)(param_2 + 0xf6e0) + 0x1508);
            iVar3 = *(int *)(lVar6 + 0xb28);
            if (iVar3 != 0) {
              iVar7 = *(int *)(lVar6 + 0x67c);
              lVar12 = *(longlong *)(lVar6 + 0xb20);
              *(int *)(lVar6 + 0x67c) = iVar7 + 1;
              if (((iVar7 == 0) && (*(longlong *)(lVar6 + 0xb10) != 0)) &&
                 (*(int *)(lVar6 + 0xba8) != 0)) {
                uVar14 = 0;
                lStack_180 = lVar12;
                do {
                  (**(code **)**(undefined8 **)(*(longlong *)(lVar6 + 0xba0) + uVar14 * 8))();
                  uVar5 = (int)uVar14 + 1;
                  uVar14 = (ulonglong)uVar5;
                  lVar12 = lStack_180;
                } while (uVar5 < *(uint *)(lVar6 + 0xba8));
              }
              (**(code **)(**(longlong **)(lVar6 + 0x688) + 0xd0))
                        (*(longlong **)(lVar6 + 0x688),iVar3,lVar12);
              *(undefined4 *)(lVar6 + 0xb28) = 0;
            }
            iVar3 = *(int *)(lVar6 + 0x67c);
            *(int *)(lVar6 + 0x67c) = iVar3 + 1;
            if (((iVar3 == 0) && (*(longlong *)(lVar6 + 0xb10) != 0)) &&
               (uVar14 = 0, *(int *)(lVar6 + 0xba8) != 0)) {
              do {
                (**(code **)**(undefined8 **)(*(longlong *)(lVar6 + 0xba0) + uVar14 * 8))();
                uVar5 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar5;
              } while (uVar5 < *(uint *)(lVar6 + 0xba8));
            }
            (**(code **)(**(longlong **)(lVar6 + 0x688) + 0x180))
                      (*(longlong **)(lVar6 + 0x688),uVar15,&uStack_198,param_3,aiStack_160);
            cVar2 = *(char *)(lVar6 + 0x674);
            *(undefined1 *)(lVar6 + 0x674) = 0;
            iVar3 = 8;
            if (cVar2 == '\0') {
              iVar3 = 1;
            }
            iVar3 = iVar3 + *(int *)(lVar6 + 0x678);
            *(int *)(lVar6 + 0x678) = iVar3;
            if (((*(int *)(lVar6 + 0x680) <= iVar3) && (*(longlong *)(lVar6 + 0xb10) != 0)) &&
               (*(int *)(lVar6 + 0x684) == 0)) {
              FUN_1800e8548(lVar6 + 8,0);
            }
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 != 4);
      }
      if (((param_5 & 6) != 0) && (*(longlong *)(param_2 + 0xfce0) != 0)) {
        uVar15 = *(undefined8 *)(param_2 + 0xfcb0);
        lVar11 = *(longlong *)(*(longlong *)(param_2 + 0xf6e0) + 0x1508);
        iVar3 = *(int *)(lVar11 + 0xb28);
        if (iVar3 != 0) {
          iVar7 = *(int *)(lVar11 + 0x67c);
          uVar16 = *(undefined8 *)(lVar11 + 0xb20);
          *(int *)(lVar11 + 0x67c) = iVar7 + 1;
          if (((iVar7 == 0) && (*(longlong *)(lVar11 + 0xb10) != 0)) &&
             (uVar14 = 0, *(int *)(lVar11 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar11 + 0xba0) + uVar14 * 8))();
              uVar5 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar5;
            } while (uVar5 < *(uint *)(lVar11 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar11 + 0x688) + 0xd0))
                    (*(longlong **)(lVar11 + 0x688),iVar3,uVar16);
          *(undefined4 *)(lVar11 + 0xb28) = 0;
        }
        iVar3 = *(int *)(lVar11 + 0x67c);
        *(int *)(lVar11 + 0x67c) = iVar3 + 1;
        if (((iVar3 == 0) && (*(longlong *)(lVar11 + 0xb10) != 0)) &&
           (uVar14 = 0, *(int *)(lVar11 + 0xba8) != 0)) {
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar11 + 0xba0) + uVar14 * 8))();
            uVar5 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar5;
          } while (uVar5 < *(uint *)(lVar11 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar11 + 0x688) + 0x178))
                  (param_1,*(longlong **)(lVar11 + 0x688),uVar15,param_5 >> 1 & 3,param_7,param_3,
                   aiStack_160);
        cVar2 = *(char *)(lVar11 + 0x674);
        *(undefined1 *)(lVar11 + 0x674) = 0;
        iVar3 = 8;
        if (cVar2 == '\0') {
          iVar3 = 1;
        }
        iVar3 = iVar3 + *(int *)(lVar11 + 0x678);
        *(int *)(lVar11 + 0x678) = iVar3;
        if (((*(int *)(lVar11 + 0x680) <= iVar3) && (*(longlong *)(lVar11 + 0xb10) != 0)) &&
           (*(int *)(lVar11 + 0x684) == 0)) {
          FUN_1800e8548(lVar11 + 8,0);
        }
      }
      lVar11 = *(longlong *)(*(longlong *)(param_2 + 0xf6e0) + 0x1508);
      iVar3 = *(int *)(lVar11 + 0x684) + -1;
      *(int *)(lVar11 + 0x684) = iVar3;
      if ((iVar3 == 0) && (*(int *)(lVar11 + 0x680) <= *(int *)(lVar11 + 0x678))) {
        FUN_1800e8548(lVar11 + 8,0);
      }
    }
    else {
      FUN_18003fb50(param_2,param_3 * 6,param_5,param_6,param_7,lVar11);
      *(undefined4 *)(param_2 + 0x10180) = 1;
      *(undefined1 *)(param_2 + 0x10184) = 0;
      FUN_180058818(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    return;
  }
  (*__imp_KERNEL32_dll_DebugBreak)();
  return;
}

