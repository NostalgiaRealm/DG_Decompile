/*
 * FUN_180023c90 at 180023c90
 * undefined FUN_180023c90(void)
 * Address ranges: 180023c90-180023ef3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180023c90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  lVar7 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar7 + 0xa0);
  if (((iVar1 - 3U < 2) || (lVar8 = 0, iVar1 == 5)) &&
     (lVar8 = *(longlong *)(lVar7 + 0x70), iVar1 - 3U < 2)) {
    cVar3 = (**(code **)(**(longlong **)(lVar7 + 0x68) + 0x70))
                      (*(longlong **)(lVar7 + 0x68),param_2,lVar8);
    if (cVar3 == '\0') {
      uVar10 = 0;
      uVar9 = 0;
      if (*(int *)(lVar7 + 0x80) != 0) {
        do {
          uVar9 = (uint)uVar10;
          cVar3 = (**(code **)(**(longlong **)(lVar7 + 0x68) + 0x70))
                            (*(longlong **)(lVar7 + 0x68),param_2,
                             *(undefined8 *)(*(longlong *)(lVar7 + 0x78) + uVar10 * 8));
          if (cVar3 != '\0') break;
          uVar9 = uVar9 + 1;
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(lVar7 + 0x80));
      }
      if (uVar9 == *(uint *)(lVar7 + 0x80)) {
        lVar4 = (**(code **)(**(longlong **)(lVar7 + 0x68) + 0x78))
                          (*(longlong **)(lVar7 + 0x68),param_2,param_3);
        if (lVar4 != 0) {
          if ((int)*(uint *)(lVar7 + 0x88) < 0) {
            uVar5 = *(undefined8 *)(lVar7 + 0x70);
          }
          else {
            uVar5 = *(undefined8 *)
                     (*(longlong *)(lVar7 + 0x78) + (ulonglong)*(uint *)(lVar7 + 0x88) * 8);
          }
          (**(code **)(**(longlong **)(lVar7 + 0x68) + 0x80))
                    (*(longlong **)(lVar7 + 0x68),lVar4,uVar5);
          uVar9 = *(uint *)(lVar7 + 0x80);
          if (0xb < uVar9) {
            (**(code **)(*(longlong *)**(undefined8 **)(lVar7 + 0x78) + 0x20))();
            uVar6 = *(uint *)(lVar7 + 0x80);
            uVar9 = 0;
            if (uVar6 != 0) {
              uVar9 = 1;
              if (1 < uVar6) {
                do {
                  uVar6 = uVar9 - 1;
                  uVar10 = (ulonglong)uVar9;
                  uVar9 = uVar9 + 1;
                  *(undefined8 *)(*(longlong *)(lVar7 + 0x78) + (ulonglong)uVar6 * 8) =
                       *(undefined8 *)(*(longlong *)(lVar7 + 0x78) + uVar10 * 8);
                  uVar6 = *(uint *)(lVar7 + 0x80);
                } while (uVar9 < uVar6);
              }
              uVar9 = uVar6 - 1;
              *(uint *)(lVar7 + 0x80) = uVar9;
            }
          }
          *(uint *)(lVar7 + 0x88) = uVar9;
          uVar6 = *(uint *)(lVar7 + 0x84);
          if (uVar9 == uVar6) {
            uVar9 = uVar6 << 1;
            if (uVar6 == 0) {
              uVar9 = 0x10;
            }
            auVar2._8_8_ = 0;
            auVar2._0_8_ = CONCAT44(0,uVar9);
            lVar8 = CONCAT44(0,uVar9) << 3;
            if (SUB168(auVar2 * ZEXT816(8),8) != 0) {
              lVar8 = -1;
            }
            lVar8 = thunk_FUN_180102f80(lVar8);
            if (lVar8 == 0) {
              return lVar4;
            }
            thunk_FUN_180001218(lVar8,*(undefined8 *)(lVar7 + 0x78),
                                (ulonglong)*(uint *)(lVar7 + 0x84) << 3);
            thunk_FUN_180102fc0(*(undefined8 *)(lVar7 + 0x78));
            *(longlong *)(lVar7 + 0x78) = lVar8;
            *(uint *)(lVar7 + 0x84) = uVar9;
          }
          *(longlong *)(*(longlong *)(lVar7 + 0x78) + (ulonglong)*(uint *)(lVar7 + 0x80) * 8) =
               lVar4;
          *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
          lVar8 = lVar4;
        }
      }
      else {
        lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x78) + (ulonglong)uVar9 * 8);
        if ((int)*(uint *)(lVar7 + 0x88) < 0) {
          lVar4 = *(longlong *)(lVar7 + 0x70);
        }
        else {
          lVar4 = *(longlong *)
                   (*(longlong *)(lVar7 + 0x78) + (ulonglong)*(uint *)(lVar7 + 0x88) * 8);
        }
        if (lVar8 != lVar4) {
          (**(code **)(**(longlong **)(lVar7 + 0x68) + 0x80))(*(longlong **)(lVar7 + 0x68),lVar8);
        }
        *(uint *)(lVar7 + 0x88) = uVar9;
      }
    }
    else if (*(uint *)(lVar7 + 0x88) != 0xffffffff) {
      (**(code **)(**(longlong **)(lVar7 + 0x68) + 0x80))
                (*(longlong **)(lVar7 + 0x68),*(undefined8 *)(lVar7 + 0x70),
                 *(undefined8 *)
                  (*(longlong *)(lVar7 + 0x78) + (ulonglong)*(uint *)(lVar7 + 0x88) * 8));
      *(undefined4 *)(lVar7 + 0x88) = 0xffffffff;
    }
  }
  return lVar8;
}

