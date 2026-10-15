/*
 * FUN_180039600 at 180039600
 * undefined __fastcall FUN_180039600(longlong param_1, uint param_2, int * param_3, uint param_4, uint param_5, float param_6, uint param_7, longlong param_8)
 * Address ranges: 180039600-180039c0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039600(longlong param_1,uint param_2,int *param_3,uint param_4,uint param_5,
                  float param_6,uint param_7,longlong param_8)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_48;
  uint local_40;
  uint local_3c;
  float local_38 [2];
  uint local_30;
  uint local_2c;
  
  uVar4 = param_2 * 6;
  if (uVar4 < 0x1001) {
    plVar1 = *(longlong **)(param_1 + 0xf9b0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))
                (plVar1,*(undefined4 *)(param_1 + 0xf9d8),*(undefined4 *)(param_1 + 0xf9e8));
    }
    plVar1 = *(longlong **)(param_1 + 0xf9b8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))
                (plVar1,*(undefined4 *)(param_1 + 0xf9dc),*(undefined4 *)(param_1 + 0xf9ec));
    }
    plVar1 = *(longlong **)(param_1 + 0xf9c0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))
                (plVar1,*(undefined4 *)(param_1 + 0xf9e0),*(undefined4 *)(param_1 + 0xf9f0));
    }
    plVar1 = *(longlong **)(param_1 + 0xf9c8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))
                (plVar1,*(undefined4 *)(param_1 + 0xf9e4),*(undefined4 *)(param_1 + 0xf9f4));
    }
    plVar1 = *(longlong **)(param_1 + 0xf9d0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))
                (plVar1,*(undefined4 *)(param_1 + 0xf9f8),*(undefined4 *)(param_1 + 0xf9fc));
    }
    lVar6 = 0;
    if (param_8 != 0) {
      lVar6 = (**(code **)(*(longlong *)(param_8 + -0xe0) + 0xc0))((longlong *)(param_8 + -0xe0),0);
    }
    lVar2 = *(longlong *)(param_1 + 0xf9b0);
    lVar9 = lVar2;
    if (lVar2 == 0) {
      lVar9 = *(longlong *)(param_1 + 0xf9d0);
    }
    lVar8 = 0xf9d8;
    if (lVar2 == 0) {
      lVar8 = 0xf9f8;
    }
    if ((((param_8 == 0) && (lVar9 != 0)) && (param_2 == 1)) &&
       ((*param_3 == 0 && (param_3[1] == 0)))) {
      bVar7 = (byte)*(undefined4 *)(param_1 + lVar8);
      bVar3 = bVar7 & 0x1f;
      uVar5 = *(uint *)(lVar9 + 0x24) >> bVar3;
      if (*(uint *)(lVar9 + 0x24) >> bVar3 == 0) {
        uVar5 = 1;
      }
      if (param_3[2] == uVar5) {
        bVar7 = bVar7 & 0x1f;
        uVar5 = *(uint *)(lVar9 + 0x28) >> bVar7;
        if (*(uint *)(lVar9 + 0x28) >> bVar7 == 0) {
          uVar5 = 1;
        }
        if (param_3[3] == uVar5) {
          FUN_180038960(param_1,0,0,0);
          if ((param_4 & 1) != 0) {
            FUN_18005b010(param_1,param_5,local_38);
            if (*(longlong *)(param_1 + 0xfb00) != 0) {
              plVar1 = *(longlong **)(param_1 + 0xf9b0);
              local_48 = 0;
              bVar7 = (byte)*(int *)(param_1 + 0xf9d8);
              bVar3 = bVar7 & 0x1f;
              local_40 = *(uint *)((longlong)plVar1 + 0x24) >> bVar3;
              if (*(uint *)((longlong)plVar1 + 0x24) >> bVar3 == 0) {
                local_40 = 1;
              }
              bVar7 = bVar7 & 0x1f;
              local_3c = *(uint *)(plVar1 + 5) >> bVar7;
              if (*(uint *)(plVar1 + 5) >> bVar7 == 0) {
                local_3c = 1;
              }
              (**(code **)(*plVar1 + 0x18))
                        (plVar1,*(int *)((longlong)plVar1 + 0x3c) * *(int *)(param_1 + 0xf9e8) +
                                *(int *)(param_1 + 0xf9d8),&local_48);
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
              (**(code **)(*plVar1 + 400))(plVar1,*(undefined8 *)(param_1 + 0xfb00),local_38);
            }
            if (*(longlong *)(param_1 + 0xfb08) != 0) {
              plVar1 = *(longlong **)(param_1 + 0xf9b8);
              local_48 = 0;
              bVar7 = (byte)*(int *)(param_1 + 0xf9dc);
              bVar3 = bVar7 & 0x1f;
              local_40 = *(uint *)((longlong)plVar1 + 0x24) >> bVar3;
              if (*(uint *)((longlong)plVar1 + 0x24) >> bVar3 == 0) {
                local_40 = 1;
              }
              bVar7 = bVar7 & 0x1f;
              local_3c = *(uint *)(plVar1 + 5) >> bVar7;
              if (*(uint *)(plVar1 + 5) >> bVar7 == 0) {
                local_3c = 1;
              }
              (**(code **)(*plVar1 + 0x18))
                        (plVar1,*(int *)((longlong)plVar1 + 0x3c) * *(int *)(param_1 + 0xf9ec) +
                                *(int *)(param_1 + 0xf9dc),&local_48);
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
              (**(code **)(*plVar1 + 400))(plVar1,*(undefined8 *)(param_1 + 0xfb08),local_38);
            }
            if (*(longlong *)(param_1 + 0xfb10) != 0) {
              plVar1 = *(longlong **)(param_1 + 0xf9c0);
              local_48 = 0;
              bVar7 = (byte)*(int *)(param_1 + 0xf9e0);
              bVar3 = bVar7 & 0x1f;
              local_40 = *(uint *)((longlong)plVar1 + 0x24) >> bVar3;
              if (*(uint *)((longlong)plVar1 + 0x24) >> bVar3 == 0) {
                local_40 = 1;
              }
              bVar7 = bVar7 & 0x1f;
              local_3c = *(uint *)(plVar1 + 5) >> bVar7;
              if (*(uint *)(plVar1 + 5) >> bVar7 == 0) {
                local_3c = 1;
              }
              (**(code **)(*plVar1 + 0x18))
                        (plVar1,*(int *)((longlong)plVar1 + 0x3c) * *(int *)(param_1 + 0xf9f0) +
                                *(int *)(param_1 + 0xf9e0),&local_48);
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
              (**(code **)(*plVar1 + 400))(plVar1,*(undefined8 *)(param_1 + 0xfb10),local_38);
            }
            if (*(longlong *)(param_1 + 0xfb18) != 0) {
              plVar1 = *(longlong **)(param_1 + 0xf9c8);
              local_48 = 0;
              bVar7 = (byte)*(int *)(param_1 + 0xf9e4);
              bVar3 = bVar7 & 0x1f;
              local_40 = *(uint *)((longlong)plVar1 + 0x24) >> bVar3;
              if (*(uint *)((longlong)plVar1 + 0x24) >> bVar3 == 0) {
                local_40 = 1;
              }
              bVar7 = bVar7 & 0x1f;
              local_3c = *(uint *)(plVar1 + 5) >> bVar7;
              if (*(uint *)(plVar1 + 5) >> bVar7 == 0) {
                local_3c = 1;
              }
              (**(code **)(*plVar1 + 0x18))
                        (plVar1,*(int *)((longlong)plVar1 + 0x3c) * *(int *)(param_1 + 0xf9f4) +
                                *(int *)(param_1 + 0xf9e4),&local_48);
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
              (**(code **)(*plVar1 + 400))(plVar1,*(undefined8 *)(param_1 + 0xfb18),local_38);
            }
          }
          if ((param_4 & 6) == 0) {
            return;
          }
          if (*(longlong *)(param_1 + 0xfcb0) == 0) {
            return;
          }
          plVar1 = *(longlong **)(param_1 + 0xf9d0);
          local_38[0] = 0.0;
          local_38[1] = 0.0;
          bVar7 = (byte)*(int *)(param_1 + 0xf9f8);
          bVar3 = bVar7 & 0x1f;
          local_30 = *(uint *)((longlong)plVar1 + 0x24) >> bVar3;
          if (*(uint *)((longlong)plVar1 + 0x24) >> bVar3 == 0) {
            local_30 = 1;
          }
          bVar7 = bVar7 & 0x1f;
          local_2c = *(uint *)(plVar1 + 5) >> bVar7;
          if (*(uint *)(plVar1 + 5) >> bVar7 == 0) {
            local_2c = 1;
          }
          (**(code **)(*plVar1 + 0x18))
                    (plVar1,*(int *)((longlong)plVar1 + 0x3c) * *(int *)(param_1 + 0xf9fc) +
                            *(int *)(param_1 + 0xf9f8),local_38);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
          (**(code **)(*plVar1 + 0x1a8))
                    (plVar1,*(undefined8 *)(param_1 + 0xfcb0),param_4 >> 1 & 3,param_6,
                     param_7 & 0xff);
          return;
        }
      }
    }
    if (((*(char *)(param_1 + 0x7662) == '\0') || (param_4 != *(uint *)(param_1 + 0x7640))) ||
       ((param_5 != *(uint *)(param_1 + 0x7644) ||
        (((param_7 != *(uint *)(param_1 + 0x7648) || (lVar6 != *(longlong *)(param_1 + 0xf9a8))) ||
         ((uint)((0x1000 - *(int *)(param_1 + 0x74)) - *(int *)(param_1 + 0x70)) < uVar4)))))) {
      FUN_180038960(param_1,CONCAT71((int7)((ulonglong)lVar9 >> 8),
                                     (uint)((0x1000 - *(int *)(param_1 + 0x74)) -
                                           *(int *)(param_1 + 0x70)) < uVar4),0,0x14);
      if (((*(char *)(param_1 + 0x7662) == '\0') || (param_4 != *(uint *)(param_1 + 0x7640))) ||
         ((lVar6 != *(longlong *)(param_1 + 0xf9a8) ||
          ((*(int *)(param_1 + 0xfe8) != 0x14 ||
           (*(int *)(param_1 + 0x102c) != *(int *)(param_1 + 0x7c))))))) {
        *(uint *)(param_1 + 0x7640) = param_4;
        if (*(char *)(param_1 + 0x7662) == '\0') {
          *(undefined1 *)(param_1 + 0xf68e) = 1;
        }
        if (*(longlong *)(param_1 + 0xfcd8) != *(longlong *)(param_1 + 0xf718)) {
          *(longlong *)(param_1 + 0xfcd8) = *(longlong *)(param_1 + 0xf718);
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
        if ((lVar6 != 0) && (lVar6 != *(longlong *)(param_1 + 0xf9a8))) {
          *(undefined1 *)(param_1 + 0xf689) = 1;
          *(uint *)(param_1 + 0xf684) = *(uint *)(param_1 + 0xf684) | 1;
        }
        *(longlong *)(param_1 + 0xf9a8) = lVar6;
        *(undefined8 *)(param_1 + 0xfcb8) = *(undefined8 *)(*(longlong *)(param_1 + 0xf6e0) + 0x228)
        ;
        *(undefined8 *)(param_1 + 0xfcc0) = *(undefined8 *)(*(longlong *)(param_1 + 0xf6e0) + 0x230)
        ;
        *(undefined8 *)(param_1 + 0xfcd0) = 0;
        *(undefined1 *)(param_1 + 0xf688) = 1;
        *(undefined4 *)(param_1 + 0xfd80) = 4;
        *(undefined1 *)(param_1 + 0x10588) = 1;
        *(undefined1 *)(param_1 + 0x7668) = 0;
        if (*(char *)(param_1 + 0x7662) == '\0') {
          *(undefined1 *)(param_1 + 0x7662) = 1;
          FUN_18005a5c0(param_1);
        }
      }
    }
    FUN_18005f88c(param_1,param_2,(longlong)param_3,(ulonglong)param_4,param_5,param_6,
                  (undefined1)param_7);
  }
  else {
    DebugBreak();
  }
  return;
}

