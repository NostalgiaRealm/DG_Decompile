/*
 * FUN_18008f088 at 18008f088
 * longlong __fastcall FUN_18008f088(longlong * param_1, byte param_2)
 * Address ranges: 18008f088-18008f3d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18008f088(longlong *param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  uint xRight;
  char cVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  
  uVar9 = 0;
  uVar11 = 0;
  lVar14 = 0x38;
  if (param_1[0x26] == 0) {
    uVar8 = *(uint *)((longlong)param_1 + 0x34);
    lVar12 = lVar14;
    if ((int)param_1[7] == 0) {
      lVar12 = 0x30;
    }
    FUN_18008dfa8(param_1 + 0x23,*(undefined4 *)((longlong)param_1 + 0x24),(int)param_1[5],
                  *(uint *)((longlong)param_1 + lVar12),uVar8,1,0x1b,
                  (-(uint)((&DAT_1800feb38)[*(uint *)((longlong)param_1 + 0x2c)] != '\0') & 3) +
                  0x1c,0x1c,0,0,0x28,0,-(uint)(uVar8 != 1) & 4,0,uVar8 != 1,'\0');
    FUN_18008edb4((longlong)param_1);
  }
  if ((param_2 != 0) || (*(char *)((longlong)param_1 + 0x4d) == '\x01')) {
    FUN_18008e464((longlong)(param_1 + 0x23),0);
  }
  lVar12 = param_1[(ulonglong)param_2 * 2 + 0x28];
  if (param_1[0x26] != 0) {
    uVar8 = 0;
    uVar10 = uVar9;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      do {
        uVar8 = 0;
        uVar11 = uVar10;
        if ((int)param_1[6] != 0) {
          uVar15 = 1 << ((byte)uVar9 & 0x1f);
          do {
            cVar3 = (**(code **)(*param_1 + 8))(param_1,uVar8,uVar9,1);
            uVar11 = uVar15 | uVar10;
            if (cVar3 == '\0') {
              uVar11 = uVar10;
            }
            lVar6 = 0x30;
            if ((int)param_1[7] != 0) {
              lVar6 = lVar14;
            }
            uVar13 = (ulonglong)(uVar9 * *(int *)((longlong)param_1 + lVar6) + uVar8);
            if (*(char *)((longlong)param_1 + 0x169) != '\0') {
              bVar1 = (byte)uVar8 & 0x1f;
              bVar2 = (byte)uVar8 & 0x1f;
              uVar10 = *(uint *)(param_1 + 5) >> bVar1;
              if (*(uint *)(param_1 + 5) >> bVar1 == 0) {
                uVar10 = 1;
              }
              xRight = *(uint *)((longlong)param_1 + 0x24) >> bVar2;
              if (*(uint *)((longlong)param_1 + 0x24) >> bVar2 == 0) {
                xRight = 1;
              }
              SetRect((LPRECT)(param_1[0x29] + uVar13 * 0x28 + 0x18),0,0,xRight,uVar10);
            }
            BVar4 = IsRectEmpty((RECT *)(param_1[0x29] + 0x18 + uVar13 * 0x28));
            if (BVar4 == 0) {
              lVar6 = param_1[0x29];
              FUN_18008d2a0(param_1[0x22],(ulonglong)*(uint *)((longlong)param_1 + 0x2c),uVar8,uVar9
                            ,param_1[2],*(uint *)(lVar6 + 0x18 + uVar13 * 0x28),
                            *(uint *)(lVar6 + 0x1c + uVar13 * 0x28),
                            *(uint *)(lVar6 + 0x20 + uVar13 * 0x28),
                            *(uint *)(lVar6 + 0x24 + uVar13 * 0x28),param_1[0x26],
                            *(undefined8 *)(lVar6 + uVar13 * 0x28),(longlong *)param_1[0xf],
                            param_1[0x11]);
              SetRectEmpty((LPRECT)(param_1[0x29] + 0x18 + uVar13 * 0x28));
              lVar6 = param_1[0x28];
              lVar7 = (ulonglong)*(uint *)(param_1 + 4) * 0x18c0 + param_1[10];
              lVar5 = 0;
              do {
                if (lVar6 == *(longlong *)(lVar7 + 0x870 + lVar5 * 8)) {
                  *(undefined8 *)(lVar7 + 0x870 + lVar5 * 8) = 0;
                }
                lVar5 = lVar5 + 1;
              } while (lVar5 != 0x40);
              uVar11 = uVar15 | uVar11;
            }
            uVar8 = uVar8 + 1;
            uVar10 = uVar11;
          } while (uVar8 < *(uint *)(param_1 + 6));
        }
        uVar8 = *(uint *)((longlong)param_1 + 0x34);
        uVar9 = uVar9 + 1;
        uVar10 = uVar11;
      } while (uVar9 < uVar8);
    }
    *(undefined1 *)((longlong)param_1 + 0x169) = 0;
    if (*(char *)((longlong)param_1 + 0x4d) == '\x01') {
      FUN_18008e2ec(param_1 + 0xc,*(uint *)(param_1 + 6),uVar8);
      *(undefined1 *)((longlong)param_1 + 0x4d) = 2;
    }
    if (uVar11 != 0) {
      if ((int)param_1[7] == 0) {
        lVar14 = 0x30;
      }
      FUN_18008f918(param_1,(ulonglong)(-(uint)(param_1[0x28] != 0) & 0xb8) + 0x60 +
                            (longlong)param_1,0,uVar11,*(int *)((longlong)param_1 + lVar14));
    }
  }
  return lVar12;
}

