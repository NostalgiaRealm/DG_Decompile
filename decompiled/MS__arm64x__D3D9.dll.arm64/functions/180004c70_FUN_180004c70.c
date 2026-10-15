/*
 * FUN_180004c70 at 180004c70
 * undefined FUN_180004c70(void)
 * Address ranges: 180004c70-180004f13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180004c70(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (*(char *)(param_1 + 0xd10) != '\0') {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 8) + 0x70);
    }
    if (*(longlong *)(param_1 + 0x38) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + 0x70);
    }
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 8) + 0x70);
    }
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + 0x70);
    }
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 8) + 0x70);
    }
    uVar6 = 0;
    if (*(longlong *)(param_1 + 0x67e8) == 0) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x1338 + uVar6 * 8);
        if (lVar5 != 0) {
          lVar2 = param_1 + uVar6 * 0x84;
          lVar3 = (ulonglong)*(uint *)(lVar2 + 0x7c4) * 3;
          if ((((((((&DAT_1802308f0)[lVar3] != '\0') && (*(int *)(lVar2 + 0x7c8) == 2)) ||
                 (((&DAT_1802308f1)[lVar3] != '\0' && (*(int *)(lVar2 + 0x7cc) == 2)))) ||
                (((&DAT_1802308f2)[lVar3] != '\0' && (*(int *)(lVar2 + 0x828) == 2)))) ||
               ((lVar3 = (ulonglong)*(uint *)(lVar2 + 2000) * 3, (&DAT_1802308f0)[lVar3] != '\0' &&
                (*(int *)(lVar2 + 0x7d4) == 2)))) ||
              ((((&DAT_1802308f1)[lVar3] != '\0' && (*(int *)(lVar2 + 0x7d8) == 2)) ||
               (((&DAT_1802308f2)[lVar3] != '\0' && (*(int *)(lVar2 + 0x82c) == 2)))))) &&
             (((*(int *)(lVar5 + 0x20) - 3U & 0xfffffffd) == 0 &&
              (lVar5 = *(longlong *)(lVar5 + 0x58), lVar5 != 0)))) {
            bVar4 = (((lVar5 == lVar7 || lVar5 == lVar11) || lVar5 == lVar10) || lVar5 == lVar9) ||
                    lVar5 == lVar8;
            if ((bool)*(char *)(param_1 + uVar6 + 0xcd0) != bVar4) {
              (**(code **)(**(longlong **)(param_1 + 0x28) + 0xd8))
                        (*(longlong **)(param_1 + 0x28),uVar6,0,lVar5,0,0,0,bVar4);
              *(bool *)(param_1 + uVar6 + 0xcd0) = bVar4;
            }
          }
        }
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
      } while (uVar1 < 8);
    }
    else {
      do {
        lVar5 = *(longlong *)(param_1 + 0x1338 + uVar6 * 8);
        if ((((lVar5 != 0) &&
             ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x67e8) + 8) + 0x1214) &
              1 << (ulonglong)((uint)uVar6 & 0x1f)) != 0)) &&
            ((*(int *)(lVar5 + 0x20) - 3U & 0xfffffffd) == 0)) &&
           ((lVar5 = *(longlong *)(lVar5 + 0x58), lVar5 != 0 &&
            (bVar4 = (((lVar5 == lVar7 || lVar5 == lVar11) || lVar5 == lVar10) || lVar5 == lVar9) ||
                     lVar5 == lVar8, (bool)*(char *)(param_1 + 0xcd0 + uVar6) != bVar4)))) {
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0xd8))
                    (*(longlong **)(param_1 + 0x28),uVar6,0,lVar5,0,0,0,bVar4);
          *(bool *)(param_1 + 0xcd0 + uVar6) = bVar4;
        }
        uVar1 = (uint)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
      } while (uVar1 < 0x10);
    }
    *(undefined1 *)(param_1 + 0xd10) = 0;
  }
  return;
}

