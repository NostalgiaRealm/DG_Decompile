/*
 * FUN_180040fa4 at 180040fa4
 * undefined FUN_180040fa4(void)
 * Address ranges: 180040fa4-18004169f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180040fa4(longlong param_1,undefined4 param_2,longlong param_3,uint param_4,
                  longlong param_5,uint param_6,uint param_7,undefined4 param_8,longlong param_9)

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
  ulonglong uVar10;
  uint uVar11;
  longlong in_x9;
  longlong lVar12;
  undefined4 in_w10;
  longlong lVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  float fVar18;
  uint uStack0000000000000014;
  uint uStack0000000000000018;
  longlong *in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  longlong in_stack_00000038;
  longlong lStack0000000000000040;
  longlong lStack0000000000000048;
  undefined8 in_stack_00000050;
  uint uStack0000000000000058;
  uint uStack000000000000005c;
  
  uStack0000000000000018 = in_w10;
  lStack0000000000000040 = param_1;
  lStack0000000000000048 = in_x9;
  FUN_18003dea0();
  lVar12 = 0;
  if (param_9 != 0) {
    lVar12 = param_9 + -0x100;
  }
  lVar1 = param_3 + 0xfcc0;
  plVar14 = *(longlong **)(param_3 + 0xfcc0);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = *(longlong **)(param_3 + 0xfce0);
  }
  if ((param_9 == 0) && (plVar14 != (longlong *)0x0)) {
    FUN_18003feb0(param_3,0,0,0);
    lVar12 = *(longlong *)(*(longlong *)(param_3 + 0xf6e0) + 0x1508);
    *(int *)(lVar12 + 0x684) = *(int *)(lVar12 + 0x684) + 1;
    uStack0000000000000018 = param_6 & 1;
    if ((param_6 & 1) != 0) {
      lVar12 = 0;
      uStack0000000000000014 = param_7;
      in_stack_00000028 = plVar14;
      in_stack_00000038 = param_5;
      do {
        plVar14 = *(longlong **)(lVar1 + lVar12 * 8);
        if (plVar14 != (longlong *)0x0) {
          in_stack_00000050 = 0;
          uVar5 = *(uint *)(param_3 + 0xfce8 + lVar12 * 4);
          uStack0000000000000058 = *(uint *)((longlong)plVar14 + 0x24) >> (ulonglong)(uVar5 & 0x1f);
          if (uStack0000000000000058 == 0) {
            uStack0000000000000058 = 1;
          }
          uStack000000000000005c = *(uint *)(plVar14 + 5) >> (ulonglong)(uVar5 & 0x1f);
          if (uStack000000000000005c == 0) {
            uStack000000000000005c = 1;
          }
          (**(code **)(*plVar14 + 0x18))
                    (plVar14,uVar5 + *(int *)((longlong)plVar14 + 0x3c) *
                                     *(int *)(param_3 + 0xfcf8 + lVar12 * 4),&stack0x00000050);
          plVar14 = *(longlong **)(lVar1 + lVar12 * 8);
          lVar6 = (**(code **)(*plVar14 + 0x108))(plVar14);
          iVar7 = *(int *)(param_3 + 0xfcf8 + lVar12 * 4);
          iVar3 = *(int *)((longlong)plVar14 + 0x3c);
          iVar8 = *(int *)(param_3 + 0xfce8 + lVar12 * 4);
          FUN_1800395e0(param_3,lVar6);
          *(undefined1 *)(param_3 + 0x1018b) = 1;
          lVar13 = *(longlong *)(*(longlong *)(param_3 + 0xf6e0) + 0x1508);
          if ((*(longlong *)(lVar13 + 0xb10) != 0) && (lVar6 != 0)) {
            iVar8 = iVar8 + iVar7 * iVar3;
            iVar3 = FUN_1800f1b78(*(undefined8 *)(lVar13 + 0xb18),extraout_x1,iVar8,0,
                                  *(longlong *)(lVar13 + 0xb10),lVar13,4,
                                  *(undefined8 *)(lVar13 + 0xb78));
            if (*(int *)(*(longlong *)(lVar13 + 0xb10) + 0x30) != 3 && iVar3 != 4) {
              FUN_1800e7f80(lVar13,lVar6,iVar8,iVar3,4);
            }
          }
        }
        lVar12 = lVar12 + 1;
        param_5 = in_stack_00000038;
        plVar14 = in_stack_00000028;
        param_7 = uStack0000000000000014;
      } while (lVar12 != 4);
    }
    uStack0000000000000014 = param_6 & 6;
    if (((param_6 & 6) != 0) && (*(longlong *)(param_3 + 0xfce0) != 0)) {
      FUN_180038d70(param_3);
      plVar17 = *(longlong **)(param_3 + 0xfce0);
      in_stack_00000028 = plVar17;
      in_stack_00000038 = (**(code **)(*plVar17 + 0x108))(plVar17);
      lVar12 = param_3 + 0x10000;
      if ((param_6 >> 1 & 1) != 0) {
        FUN_1800395e0(param_3,in_stack_00000038,
                      *(int *)(lStack0000000000000048 + 0x3d08) +
                      *(int *)(lStack0000000000000048 + 0x3d0c) * *(int *)((longlong)plVar17 + 0x3c)
                     );
        *(undefined1 *)(lVar12 + 0x18b) = 1;
        FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_3 + 0xf6e0) + 0x1508));
      }
      if ((param_6 >> 2 & 1) != 0) {
        FUN_1800395e0(param_3,in_stack_00000038,
                      *(int *)(lStack0000000000000048 + 0x3d08) +
                      (*(int *)(lStack0000000000000048 + 0x3d0c) +
                      *(int *)((longlong)in_stack_00000028 + 0x34)) *
                      *(int *)((longlong)in_stack_00000028 + 0x3c));
        *(undefined1 *)(param_3 + 0x1018b) = 1;
        FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_3 + 0xf6e0) + 0x1508));
      }
    }
    uVar5 = *(uint *)((longlong)plVar14 + 0x24);
    uVar4 = (**(code **)(*plVar14 + 0x40))(plVar14,0);
    uVar9 = *(uint *)(plVar14 + 5);
    fVar18 = (float)uVar4 / (float)uVar5;
    uVar5 = (**(code **)(*plVar14 + 0x48))(plVar14,0);
    uVar10 = 0;
    if (param_4 != 0) {
      do {
        lVar12 = uVar10 * 0x10;
        iVar3 = *(int *)(param_5 + 4 + lVar12);
        uVar4 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar4;
        iVar7 = *(int *)(param_5 + 0xc + lVar12);
        iVar8 = *(int *)(param_5 + 8 + lVar12);
        *(int *)(&stack0x00000060 + lVar12) = (int)((float)*(int *)(param_5 + lVar12) * fVar18);
        *(int *)(&stack0x00000064 + lVar12) = (int)((float)iVar3 * ((float)uVar5 / (float)uVar9));
        *(int *)(&stack0x00000068 + lVar12) = (int)((float)iVar8 * fVar18);
        *(int *)(&stack0x0000006c + lVar12) = (int)((float)iVar7 * ((float)uVar5 / (float)uVar9));
      } while (uVar4 < param_4);
    }
    if (uStack0000000000000018 != 0) {
      if (*(int *)(lStack0000000000000040 + 0x299c) == 0) {
        uVar9 = param_7 >> 0x10 & 0xff;
        uVar4 = param_7 >> 8 & 0xff;
        uVar11 = 0xff;
        uVar5 = param_7 & 0xff;
      }
      else {
        uVar9 = *(uint *)(lStack0000000000000040 + 0x29b0) & param_7 >> 0x10;
        uVar4 = *(uint *)(lStack0000000000000040 + 0x29b4) & param_7 >> 8;
        uVar11 = *(uint *)(lStack0000000000000040 + 0x29bc);
        uVar5 = *(uint *)(lStack0000000000000040 + 0x29b8) & param_7;
      }
      lVar12 = 0;
      in_stack_00000028 = (longlong *)CONCAT44((float)uVar4 / 255.0,(float)uVar9 / 255.0);
      fStack0000000000000030 = (float)uVar5 / 255.0;
      fStack0000000000000034 = (float)(uVar11 & param_7 >> 0x18) / 255.0;
      do {
        if (*(longlong *)(lVar1 + lVar12 * 8) != 0) {
          uVar15 = *(undefined8 *)(param_3 + 0xfba0 + lVar12 * 8);
          lVar6 = *(longlong *)(*(longlong *)(param_3 + 0xf6e0) + 0x1508);
          iVar3 = *(int *)(lVar6 + 0xb28);
          if (iVar3 != 0) {
            iVar7 = *(int *)(lVar6 + 0x67c);
            lVar13 = *(longlong *)(lVar6 + 0xb20);
            *(int *)(lVar6 + 0x67c) = iVar7 + 1;
            if (((iVar7 == 0) && (*(longlong *)(lVar6 + 0xb10) != 0)) &&
               (*(int *)(lVar6 + 0xba8) != 0)) {
              uVar10 = 0;
              lStack0000000000000040 = lVar13;
              do {
                (**(code **)**(undefined8 **)(*(longlong *)(lVar6 + 0xba0) + uVar10 * 8))();
                uVar5 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar5;
                lVar13 = lStack0000000000000040;
              } while (uVar5 < *(uint *)(lVar6 + 0xba8));
            }
            (**(code **)(**(longlong **)(lVar6 + 0x688) + 0xd0))
                      (*(longlong **)(lVar6 + 0x688),iVar3,lVar13);
            *(undefined4 *)(lVar6 + 0xb28) = 0;
          }
          iVar3 = *(int *)(lVar6 + 0x67c);
          *(int *)(lVar6 + 0x67c) = iVar3 + 1;
          if (((iVar3 == 0) && (*(longlong *)(lVar6 + 0xb10) != 0)) &&
             (uVar10 = 0, *(int *)(lVar6 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar6 + 0xba0) + uVar10 * 8))();
              uVar5 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar5;
            } while (uVar5 < *(uint *)(lVar6 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar6 + 0x688) + 0x180))
                    (*(longlong **)(lVar6 + 0x688),uVar15,&stack0x00000028,param_4,&stack0x00000060)
          ;
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
        lVar12 = lVar12 + 1;
      } while (lVar12 != 4);
    }
    if ((uStack0000000000000014 != 0) && (*(longlong *)(param_3 + 0xfce0) != 0)) {
      uVar15 = *(undefined8 *)(param_3 + 0xfcb0);
      lVar12 = *(longlong *)(*(longlong *)(param_3 + 0xf6e0) + 0x1508);
      iVar3 = *(int *)(lVar12 + 0xb28);
      if (iVar3 != 0) {
        iVar7 = *(int *)(lVar12 + 0x67c);
        uVar16 = *(undefined8 *)(lVar12 + 0xb20);
        *(int *)(lVar12 + 0x67c) = iVar7 + 1;
        if (((iVar7 == 0) && (*(longlong *)(lVar12 + 0xb10) != 0)) &&
           (uVar10 = 0, *(int *)(lVar12 + 0xba8) != 0)) {
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar12 + 0xba0) + uVar10 * 8))();
            uVar5 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar5;
          } while (uVar5 < *(uint *)(lVar12 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar12 + 0x688) + 0xd0))
                  (*(longlong **)(lVar12 + 0x688),iVar3,uVar16);
        *(undefined4 *)(lVar12 + 0xb28) = 0;
      }
      iVar3 = *(int *)(lVar12 + 0x67c);
      *(int *)(lVar12 + 0x67c) = iVar3 + 1;
      if (((iVar3 == 0) && (*(longlong *)(lVar12 + 0xb10) != 0)) &&
         (uVar10 = 0, *(int *)(lVar12 + 0xba8) != 0)) {
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar12 + 0xba0) + uVar10 * 8))();
          uVar5 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(lVar12 + 0xba8));
      }
      (**(code **)(**(longlong **)(lVar12 + 0x688) + 0x178))
                (param_2,*(longlong **)(lVar12 + 0x688),uVar15,param_6 >> 1 & 3,param_8,param_4,
                 &stack0x00000060);
      cVar2 = *(char *)(lVar12 + 0x674);
      *(undefined1 *)(lVar12 + 0x674) = 0;
      iVar3 = 8;
      if (cVar2 == '\0') {
        iVar3 = 1;
      }
      iVar3 = iVar3 + *(int *)(lVar12 + 0x678);
      *(int *)(lVar12 + 0x678) = iVar3;
      if (((*(int *)(lVar12 + 0x680) <= iVar3) && (*(longlong *)(lVar12 + 0xb10) != 0)) &&
         (*(int *)(lVar12 + 0x684) == 0)) {
        FUN_1800e8548(lVar12 + 8,0);
      }
    }
    lVar12 = *(longlong *)(*(longlong *)(param_3 + 0xf6e0) + 0x1508);
    iVar3 = *(int *)(lVar12 + 0x684) + -1;
    *(int *)(lVar12 + 0x684) = iVar3;
    if ((iVar3 == 0) && (*(int *)(lVar12 + 0x680) <= *(int *)(lVar12 + 0x678))) {
      FUN_1800e8548(lVar12 + 8,0);
    }
  }
  else {
    FUN_18003fb50(param_3,uStack0000000000000018,param_6,param_7,param_8,lVar12);
    *(undefined4 *)(param_3 + 0x10180) = 1;
    *(undefined1 *)(param_3 + 0x10184) = 0;
    FUN_180058818(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

