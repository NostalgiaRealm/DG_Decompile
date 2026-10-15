/*
 * FUN_180130528 at 180130528
 * undefined FUN_180130528(void)
 * Address ranges: 180130528-1801307ab;1801307bc-1801307f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180130528(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  lVar8 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar8 + 0xa0);
  if (((iVar1 - 3U < 2) || (lVar9 = 0, iVar1 == 5)) &&
     (lVar9 = *(longlong *)(lVar8 + 0x70), iVar1 - 3U < 2)) {
    uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    cVar3 = (*extraout_x11)(uVar4,param_2,lVar9);
    if (cVar3 == '\0') {
      uVar5 = 0;
      uVar10 = 0;
      if (*(int *)(lVar8 + 0x80) != 0) {
        do {
          uVar10 = (uint)uVar5;
          lVar6 = *(longlong *)(lVar8 + 0x78);
          uVar4 = (*(code *)puVar2)();
          cVar3 = (*extraout_x11_01)(uVar4,param_2,*(undefined8 *)(lVar6 + uVar5 * 8));
          if (cVar3 != '\0') break;
          uVar10 = uVar10 + 1;
          uVar5 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)(lVar8 + 0x80));
      }
      if (uVar10 == *(uint *)(lVar8 + 0x80)) {
        uVar4 = (*(code *)puVar2)(0x180224000);
        auVar11 = (*extraout_x11_03)(uVar4,param_2,param_3);
        lVar6 = auVar11._0_8_;
        if (lVar6 != 0) {
          if ((int)*(uint *)(lVar8 + 0x88) < 0) {
            uVar4 = *(undefined8 *)(lVar8 + 0x70);
          }
          else {
            uVar4 = *(undefined8 *)
                     (*(longlong *)(lVar8 + 0x78) + (ulonglong)*(uint *)(lVar8 + 0x88) * 8);
          }
          uVar4 = (*(code *)puVar2)(0x180224000,*(undefined8 *)(lVar8 + 0x68),auVar11._8_8_,uVar4);
          (*extraout_x11_04)(uVar4,lVar6);
          uVar10 = *(uint *)(lVar8 + 0x80);
          if (0xb < uVar10) {
            (*(code *)puVar2)(0x180224000);
            (*extraout_x11_05)();
            uVar7 = *(uint *)(lVar8 + 0x80);
            uVar10 = 0;
            if (uVar7 != 0) {
              uVar10 = 1;
              if (1 < uVar7) {
                do {
                  uVar7 = uVar10 - 1;
                  uVar5 = (ulonglong)uVar10;
                  uVar10 = uVar10 + 1;
                  *(undefined8 *)(*(longlong *)(lVar8 + 0x78) + (ulonglong)uVar7 * 8) =
                       *(undefined8 *)(*(longlong *)(lVar8 + 0x78) + uVar5 * 8);
                  uVar7 = *(uint *)(lVar8 + 0x80);
                } while (uVar10 < uVar7);
              }
              uVar10 = uVar7 - 1;
              *(uint *)(lVar8 + 0x80) = uVar10;
            }
          }
          *(uint *)(lVar8 + 0x88) = uVar10;
          uVar7 = *(uint *)(lVar8 + 0x84);
          lVar9 = lVar6;
          if (uVar10 == uVar7) {
            uVar10 = uVar7 << 1;
            if (uVar7 == 0) {
              uVar10 = 0x10;
            }
            auVar11._8_8_ = 0;
            auVar11._0_8_ = CONCAT44(0,uVar10);
            lVar6 = CONCAT44(0,uVar10) << 3;
            if (SUB168(auVar11 * ZEXT816(8),8) != 0) {
              lVar6 = -1;
            }
            lVar6 = FUN_1802229a8(lVar6);
            if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_180104c48(lVar6,*(undefined8 *)(lVar8 + 0x78),
                                  (ulonglong)*(uint *)(lVar8 + 0x84) << 3);
            }
          }
          else {
            *(longlong *)(*(longlong *)(lVar8 + 0x78) + (ulonglong)*(uint *)(lVar8 + 0x80) * 8) =
                 lVar6;
            *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
          }
        }
      }
      else {
        lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x78) + (ulonglong)uVar10 * 8);
        if ((int)*(uint *)(lVar8 + 0x88) < 0) {
          lVar6 = *(longlong *)(lVar8 + 0x70);
        }
        else {
          lVar6 = *(longlong *)
                   (*(longlong *)(lVar8 + 0x78) + (ulonglong)*(uint *)(lVar8 + 0x88) * 8);
        }
        if (lVar9 != lVar6) {
          uVar4 = (*(code *)puVar2)(0x180224000);
          (*extraout_x11_02)(uVar4,lVar9);
        }
        *(uint *)(lVar8 + 0x88) = uVar10;
      }
    }
    else {
      uVar5 = (ulonglong)*(uint *)(lVar8 + 0x88);
      if (*(uint *)(lVar8 + 0x88) != 0xffffffff) {
        lVar6 = *(longlong *)(lVar8 + 0x78);
        uVar4 = (*(code *)puVar2)(0x180224000);
        (*extraout_x11_00)(uVar4,*(undefined8 *)(lVar8 + 0x70),
                           *(undefined8 *)(lVar6 + (uVar5 & 0xffffffff) * 8));
        *(undefined4 *)(lVar8 + 0x88) = 0xffffffff;
      }
    }
  }
  return lVar9;
}

