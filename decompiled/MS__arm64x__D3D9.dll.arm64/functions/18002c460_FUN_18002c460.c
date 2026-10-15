/*
 * FUN_18002c460 at 18002c460
 * undefined FUN_18002c460(void)
 * Address ranges: 18002c460-18002c957
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002c460(undefined4 param_1,longlong param_2,int param_3,int *param_4,uint param_5,
                  uint param_6,int param_7,longlong param_8)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar6;
  uint uVar7;
  longlong in_x9;
  undefined8 uVar8;
  uint in_w10;
  longlong lVar9;
  longlong lVar10;
  uint uStack0000000000000010;
  longlong lStack0000000000000018;
  uint uStack0000000000000020;
  uint uStack0000000000000024;
  undefined8 in_stack_00000028;
  float in_stack_00000030;
  float fStack0000000000000034;
  uint uVar4;
  uint uVar5;
  
  plVar2 = *(longlong **)(param_2 + 0xf9b0);
  uStack0000000000000010 = in_w10;
  lStack0000000000000018 = in_x9;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))
              (plVar2,*(undefined4 *)(param_2 + 0xf9d8),*(undefined4 *)(param_2 + 0xf9e8),0);
  }
  plVar2 = *(longlong **)(param_2 + 0xf9b8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))
              (plVar2,*(undefined4 *)(param_2 + 0xf9dc),*(undefined4 *)(param_2 + 0xf9ec),0);
  }
  plVar2 = *(longlong **)(param_2 + 0xf9c0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))
              (plVar2,*(undefined4 *)(param_2 + 0xf9e0),*(undefined4 *)(param_2 + 0xf9f0),0);
  }
  plVar2 = *(longlong **)(param_2 + 0xf9c8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))
              (plVar2,*(undefined4 *)(param_2 + 0xf9e4),*(undefined4 *)(param_2 + 0xf9f4),0);
  }
  plVar2 = *(longlong **)(param_2 + 0xf9d0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))
              (plVar2,*(undefined4 *)(param_2 + 0xf9f8),*(undefined4 *)(param_2 + 0xf9fc),0);
  }
  lVar10 = 0;
  if (param_8 != 0) {
    lVar10 = (**(code **)(*(longlong *)(param_8 + -0xe0) + 0xc0))(param_8 + -0xe0,0);
  }
  lVar6 = *(longlong *)(param_2 + 0xf9b0);
  lVar9 = lVar6;
  if (lVar6 == 0) {
    lVar9 = *(longlong *)(param_2 + 0xf9d0);
  }
  lVar1 = 0xf9f8;
  if (lVar6 != 0) {
    lVar1 = 0xf9d8;
  }
  if ((((param_8 == 0) && (lVar9 != 0 && param_3 == 1)) && (*param_4 == 0)) && (param_4[1] == 0)) {
    uVar3 = *(uint *)(lVar9 + 0x24) >> (ulonglong)(*(uint *)(param_2 + lVar1) & 0x1f);
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    if (param_4[2] == uVar3) {
      uVar3 = *(uint *)(lVar9 + 0x28) >> (ulonglong)(*(uint *)(param_2 + lVar1) & 0x1f);
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      if (param_4[3] == uVar3) {
        FUN_18002a810(param_2,0,0,0);
        if ((param_5 & 1) != 0) {
          if (*(int *)(lStack0000000000000018 + 0x299c) == 0) {
            uVar5 = param_6 >> 0x10 & 0xff;
            uVar4 = param_6 >> 8 & 0xff;
            uVar7 = 0xff;
            uVar3 = param_6 & 0xff;
          }
          else {
            uVar5 = *(uint *)(lStack0000000000000018 + 0x29b0) & param_6 >> 0x10;
            uVar4 = *(uint *)(lStack0000000000000018 + 0x29b4) & param_6 >> 8;
            uVar7 = *(uint *)(lStack0000000000000018 + 0x29bc);
            uVar3 = *(uint *)(lStack0000000000000018 + 0x29b8) & param_6;
          }
          in_stack_00000028 = CONCAT44((float)uVar4 / 255.0,(float)uVar5 / 255.0);
          in_stack_00000030 = (float)uVar3 / 255.0;
          fStack0000000000000034 = (float)(uVar7 & param_6 >> 0x18) / 255.0;
          if (*(longlong *)(param_2 + 0xfb00) != 0) {
            plVar2 = *(longlong **)(param_2 + 0xf9b0);
            uVar3 = *(uint *)(param_2 + 0xf9d8);
            lStack0000000000000018 = 0;
            uStack0000000000000020 = *(uint *)((longlong)plVar2 + 0x24) >> (ulonglong)(uVar3 & 0x1f)
            ;
            if (uStack0000000000000020 == 0) {
              uStack0000000000000020 = 1;
            }
            uStack0000000000000024 = *(uint *)(plVar2 + 5) >> (ulonglong)(uVar3 & 0x1f);
            if (uStack0000000000000024 == 0) {
              uStack0000000000000024 = 1;
            }
            (**(code **)(*plVar2 + 0x18))
                      (plVar2,uVar3 + *(int *)((longlong)plVar2 + 0x3c) * *(int *)(param_2 + 0xf9e8)
                       ,&stack0x00000018);
            plVar2 = *(longlong **)(*(longlong *)(param_2 + 0xf6d8) + 8);
            (**(code **)(*plVar2 + 400))(plVar2,*(undefined8 *)(param_2 + 0xfb00),&stack0x00000028);
          }
          if (*(longlong *)(param_2 + 0xfb08) != 0) {
            plVar2 = *(longlong **)(param_2 + 0xf9b8);
            uVar3 = *(uint *)(param_2 + 0xf9dc);
            lStack0000000000000018 = 0;
            uStack0000000000000020 = *(uint *)((longlong)plVar2 + 0x24) >> (ulonglong)(uVar3 & 0x1f)
            ;
            if (uStack0000000000000020 == 0) {
              uStack0000000000000020 = 1;
            }
            uStack0000000000000024 = *(uint *)(plVar2 + 5) >> (ulonglong)(uVar3 & 0x1f);
            if (uStack0000000000000024 == 0) {
              uStack0000000000000024 = 1;
            }
            (**(code **)(*plVar2 + 0x18))
                      (plVar2,uVar3 + *(int *)((longlong)plVar2 + 0x3c) * *(int *)(param_2 + 0xf9ec)
                       ,&stack0x00000018);
            plVar2 = *(longlong **)(*(longlong *)(param_2 + 0xf6d8) + 8);
            (**(code **)(*plVar2 + 400))(plVar2,*(undefined8 *)(param_2 + 0xfb08),&stack0x00000028);
          }
          if (*(longlong *)(param_2 + 0xfb10) != 0) {
            uVar3 = *(uint *)(param_2 + 0xf9e0);
            plVar2 = *(longlong **)(param_2 + 0xf9c0);
            lStack0000000000000018 = 0;
            uStack0000000000000020 = *(uint *)((longlong)plVar2 + 0x24) >> (ulonglong)(uVar3 & 0x1f)
            ;
            if (uStack0000000000000020 == 0) {
              uStack0000000000000020 = 1;
            }
            uStack0000000000000024 = *(uint *)(plVar2 + 5) >> (ulonglong)(uVar3 & 0x1f);
            if (uStack0000000000000024 == 0) {
              uStack0000000000000024 = 1;
            }
            (**(code **)(*plVar2 + 0x18))
                      (plVar2,uVar3 + *(int *)((longlong)plVar2 + 0x3c) * *(int *)(param_2 + 0xf9f0)
                       ,&stack0x00000018);
            plVar2 = *(longlong **)(*(longlong *)(param_2 + 0xf6d8) + 8);
            (**(code **)(*plVar2 + 400))(plVar2,*(undefined8 *)(param_2 + 0xfb10),&stack0x00000028);
          }
          if (*(longlong *)(param_2 + 0xfb18) != 0) {
            uVar3 = *(uint *)(param_2 + 0xf9e4);
            plVar2 = *(longlong **)(param_2 + 0xf9c8);
            lStack0000000000000018 = 0;
            uStack0000000000000020 = *(uint *)((longlong)plVar2 + 0x24) >> (ulonglong)(uVar3 & 0x1f)
            ;
            if (uStack0000000000000020 == 0) {
              uStack0000000000000020 = 1;
            }
            uStack0000000000000024 = *(uint *)(plVar2 + 5) >> (ulonglong)(uVar3 & 0x1f);
            if (uStack0000000000000024 == 0) {
              uStack0000000000000024 = 1;
            }
            (**(code **)(*plVar2 + 0x18))
                      (plVar2,uVar3 + *(int *)((longlong)plVar2 + 0x3c) * *(int *)(param_2 + 0xf9f4)
                       ,&stack0x00000018);
            plVar2 = *(longlong **)(*(longlong *)(param_2 + 0xf6d8) + 8);
            (**(code **)(*plVar2 + 400))(plVar2,*(undefined8 *)(param_2 + 0xfb18),&stack0x00000028);
          }
        }
        if ((param_5 & 6) == 0) {
          return;
        }
        if (*(longlong *)(param_2 + 0xfcb0) == 0) {
          return;
        }
        plVar2 = *(longlong **)(param_2 + 0xf9d0);
        uVar3 = *(uint *)(param_2 + 0xf9f8);
        in_stack_00000028 = 0;
        in_stack_00000030 = (float)(*(uint *)((longlong)plVar2 + 0x24) >> (ulonglong)(uVar3 & 0x1f))
        ;
        if (in_stack_00000030 == 0.0) {
          in_stack_00000030 = 1.4013e-45;
        }
        fStack0000000000000034 = (float)(*(uint *)(plVar2 + 5) >> (ulonglong)(uVar3 & 0x1f));
        if (fStack0000000000000034 == 0.0) {
          fStack0000000000000034 = 1.4013e-45;
        }
        (**(code **)(*plVar2 + 0x18))
                  (plVar2,uVar3 + *(int *)((longlong)plVar2 + 0x3c) * *(int *)(param_2 + 0xf9fc),
                   &stack0x00000028);
        plVar2 = *(longlong **)(*(longlong *)(param_2 + 0xf6d8) + 8);
        (**(code **)(*plVar2 + 0x1a8))
                  (param_1,plVar2,*(undefined8 *)(param_2 + 0xfcb0),param_5 >> 1 & 3,param_7);
        return;
      }
    }
  }
  if ((((*(char *)(param_2 + 0x7662) == '\0') || (param_5 != *(uint *)(param_2 + 0x7640))) ||
      ((param_6 != *(uint *)(lStack0000000000000018 + 0x3644) ||
       ((param_7 != *(int *)(lStack0000000000000018 + 0x3648) ||
        (lVar10 != *(longlong *)(param_2 + 0xf9a8))))))) ||
     ((uint)((0x1000 - *(int *)(param_2 + 0x74)) - *(int *)(param_2 + 0x70)) <
      uStack0000000000000010)) {
    FUN_18002a810(param_2,(uint)((0x1000 - *(int *)(param_2 + 0x74)) - *(int *)(param_2 + 0x70)) <
                          uStack0000000000000010,0,0x14);
    if ((((*(char *)(param_2 + 0x7662) == '\0') || (param_5 != *(uint *)(param_2 + 0x7640))) ||
        (lVar10 != *(longlong *)(param_2 + 0xf9a8))) ||
       ((*(int *)(param_2 + 0xfe8) != 0x14 ||
        (*(int *)(param_2 + 0x102c) != *(int *)(param_2 + 0x7c))))) {
      *(uint *)(param_2 + 0x7640) = param_5;
      if (*(char *)(param_2 + 0x7662) == '\0') {
        *(undefined1 *)(param_2 + 0xf68e) = 1;
      }
      if (*(longlong *)(param_2 + 0xfcd8) != *(longlong *)(param_2 + 0xf718)) {
        *(longlong *)(param_2 + 0xfcd8) = *(longlong *)(param_2 + 0xf718);
        *(undefined1 *)(param_2 + 0xf68f) = 1;
      }
      if (*(int *)(param_2 + 0xfe8) != 0x14) {
        *(undefined4 *)(param_2 + 0xfe8) = 0x14;
        *(undefined1 *)(param_2 + 0xf68f) = 1;
      }
      if (*(int *)(param_2 + 0x102c) != *(int *)(param_2 + 0x7c)) {
        *(int *)(param_2 + 0x102c) = *(int *)(param_2 + 0x7c);
        *(undefined1 *)(param_2 + 0xf68f) = 1;
      }
      if ((lVar10 != 0) && (lVar10 != *(longlong *)(param_2 + 0xf9a8))) {
        *(undefined1 *)(param_2 + 0xf689) = 1;
        *(byte *)(param_2 + 0xf684) = *(byte *)(param_2 + 0xf684) | 1;
      }
      *(longlong *)(param_2 + 0xf9a8) = lVar10;
      *(undefined8 *)(param_2 + 0xfcb8) = *(undefined8 *)(*(longlong *)(param_2 + 0xf6e0) + 0x228);
      uVar8 = *(undefined8 *)(*(longlong *)(param_2 + 0xf6e0) + 0x230);
      *(undefined8 *)(param_2 + 0xfcd0) = 0;
      *(undefined1 *)(param_2 + 0xf688) = 1;
      *(undefined8 *)(param_2 + 0xfcc0) = uVar8;
      *(undefined4 *)(param_2 + 0xfd80) = 4;
      *(undefined1 *)(param_2 + 0x10588) = 1;
      *(undefined1 *)(param_2 + 0x7668) = 0;
      if (*(char *)(param_2 + 0x7662) == '\0') {
        *(undefined1 *)(param_2 + 0x7662) = 1;
        FUN_180054430(param_2);
      }
    }
  }
  FUN_180058818(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

