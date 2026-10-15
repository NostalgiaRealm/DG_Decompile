/*
 * FUN_18010a028 at 18010a028
 * undefined FUN_18010a028(void)
 * Address ranges: 18010a028-18010a317
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18010a028(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  puVar4 = __hybrid_os_arm64x_dispatch_icall;
  if (*(char *)(param_1 + 0xd10) != '\0') {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 8) + 0x70);
    }
    if (*(longlong *)(param_1 + 0x38) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + 0x70);
    }
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 8) + 0x70);
    }
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + 0x70);
    }
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 8) + 0x70);
    }
    uVar9 = 0;
    if (*(longlong *)(param_1 + 0x67e8) == 0) {
      do {
        lVar8 = *(longlong *)(param_1 + 0x1338 + uVar9 * 8);
        if (lVar8 != 0) {
          lVar2 = param_1 + uVar9 * 0x84;
          lVar3 = (ulonglong)*(uint *)(lVar2 + 0x7c4) * 3;
          if ((((((((&DAT_18022a3d0)[lVar3] != '\0') && (*(int *)(lVar2 + 0x7c8) == 2)) ||
                 (((&DAT_18022a3d1)[lVar3] != '\0' && (*(int *)(lVar2 + 0x7cc) == 2)))) ||
                (((&DAT_18022a3d2)[lVar3] != '\0' && (*(int *)(lVar2 + 0x828) == 2)))) ||
               ((lVar3 = (ulonglong)*(uint *)(lVar2 + 2000) * 3, (&DAT_18022a3d0)[lVar3] != '\0' &&
                (*(int *)(lVar2 + 0x7d4) == 2)))) ||
              ((((&DAT_18022a3d1)[lVar3] != '\0' && (*(int *)(lVar2 + 0x7d8) == 2)) ||
               (((&DAT_18022a3d2)[lVar3] != '\0' && (*(int *)(lVar2 + 0x82c) == 2)))))) &&
             (((*(int *)(lVar8 + 0x20) - 3U & 0xfffffffd) == 0 &&
              (lVar8 = *(longlong *)(lVar8 + 0x58), lVar8 != 0)))) {
            bVar5 = (((lVar8 == lVar7 || lVar8 == lVar12) || lVar8 == lVar10) || lVar8 == lVar11) ||
                    lVar8 == lVar13;
            if ((bool)*(char *)(param_1 + uVar9 + 0xcd0) != bVar5) {
              uVar6 = (*(code *)puVar4)();
              (*extraout_x11)(uVar6,uVar9,0);
              *(bool *)(param_1 + uVar9 + 0xcd0) = bVar5;
            }
          }
        }
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar1;
      } while (uVar1 < 8);
    }
    else {
      do {
        lVar8 = *(longlong *)(param_1 + 0x1338 + uVar9 * 8);
        if ((((lVar8 != 0) &&
             ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x67e8) + 8) + 0x1214) &
              1 << (ulonglong)((uint)uVar9 & 0x1f)) != 0)) &&
            ((*(int *)(lVar8 + 0x20) - 3U & 0xfffffffd) == 0)) &&
           (lVar8 = *(longlong *)(lVar8 + 0x58), lVar8 != 0)) {
          bVar5 = (((lVar8 == lVar7 || lVar8 == lVar12) || lVar8 == lVar10) || lVar8 == lVar11) ||
                  lVar8 == lVar13;
          if ((bool)*(char *)(param_1 + 0xcd0 + uVar9) != bVar5) {
            uVar6 = (*(code *)puVar4)();
            (*extraout_x11_00)(uVar6,uVar9,0);
            *(bool *)(param_1 + 0xcd0 + uVar9) = bVar5;
          }
        }
        uVar1 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar1;
      } while (uVar1 < 0x10);
    }
    *(undefined1 *)(param_1 + 0xd10) = 0;
  }
  return;
}

