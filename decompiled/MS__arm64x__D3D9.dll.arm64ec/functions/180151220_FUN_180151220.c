/*
 * FUN_180151220 at 180151220
 * undefined FUN_180151220(void)
 * Address ranges: 180151220-18015154f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180151220(longlong *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  uVar4 = FUN_180204418();
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar12 = 0;
  if (uVar1 != 0) {
    uVar6 = 0;
    uVar5 = uVar1;
    do {
      uVar12 = uVar5 + uVar6 >> 1;
      uVar11 = *(ulonglong *)(*param_1 + (ulonglong)uVar12 * 0x158);
      uVar2 = uVar12;
      if (uVar11 <= uVar4) {
        if (uVar4 <= uVar11) break;
        uVar6 = uVar12 + 1;
        uVar12 = uVar12 + 1;
        uVar2 = uVar5;
      }
      uVar5 = uVar2;
    } while (uVar5 != uVar6);
  }
  if ((uVar12 == uVar1) ||
     (puVar7 = (ulonglong *)(*param_1 + (ulonglong)uVar12 * 0x158), *puVar7 != uVar4)) {
    FUN_180151550(param_1,uVar12,uVar4,param_2);
    goto LAB_180151530;
  }
  if ((*param_2 == (int)puVar7[1]) && (param_2[1] == *(int *)((longlong)puVar7 + 0xc))) {
    uVar11 = (*(ulonglong *)(param_2 + 2) & 0xff00ff00ff00ff00) >> 8 |
             (*(ulonglong *)(param_2 + 2) & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar11 >> 0x20 | uVar11 << 0x20;
    uVar11 = (puVar7[2] & 0xff00ff00ff00ff00) >> 8 | (puVar7[2] & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
    bVar3 = uVar11 <= uVar10;
    if ((uVar10 == uVar11) &&
       (((uVar11 = (*(ulonglong *)(param_2 + 4) & 0xff00ff00ff00ff00) >> 8 |
                   (*(ulonglong *)(param_2 + 4) & 0xff00ff00ff00ff) << 8,
         uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
         uVar10 = uVar11 >> 0x20 | uVar11 << 0x20,
         uVar11 = (puVar7[3] & 0xff00ff00ff00ff00) >> 8 | (puVar7[3] & 0xff00ff00ff00ff) << 8,
         uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
         uVar11 = uVar11 >> 0x20 | uVar11 << 0x20, bVar3 = uVar11 <= uVar10, uVar10 == uVar11 &&
         (uVar11 = (*(ulonglong *)(param_2 + 6) & 0xff00ff00ff00ff00) >> 8 |
                   (*(ulonglong *)(param_2 + 6) & 0xff00ff00ff00ff) << 8,
         uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
         uVar10 = uVar11 >> 0x20 | uVar11 << 0x20,
         uVar11 = (puVar7[4] & 0xff00ff00ff00ff00) >> 8 | (puVar7[4] & 0xff00ff00ff00ff) << 8,
         uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
         uVar11 = uVar11 >> 0x20 | uVar11 << 0x20, bVar3 = uVar11 <= uVar10, uVar10 == uVar11)) &&
        (uVar11 = (*(ulonglong *)(param_2 + 8) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulonglong *)(param_2 + 8) & 0xff00ff00ff00ff) << 8,
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
        uVar10 = uVar11 >> 0x20 | uVar11 << 0x20,
        uVar11 = (puVar7[5] & 0xff00ff00ff00ff00) >> 8 | (puVar7[5] & 0xff00ff00ff00ff) << 8,
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20, bVar3 = uVar11 <= uVar10, uVar10 == uVar11)))) {
      uVar11 = (*(ulonglong *)(param_2 + 10) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulonglong *)(param_2 + 10) & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar11 = (puVar7[6] & 0xff00ff00ff00ff00) >> 8 | (puVar7[6] & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      bVar3 = uVar11 <= uVar10;
      iVar8 = 0;
      if (uVar10 != uVar11) goto LAB_18015134c;
    }
    else {
LAB_18015134c:
      iVar8 = 1;
      if (!bVar3) {
        iVar8 = -1;
      }
    }
    if (iVar8 == 0) {
      uVar11 = (*(ulonglong *)(param_2 + 0xc) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulonglong *)(param_2 + 0xc) & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar11 = (puVar7[7] & 0xff00ff00ff00ff00) >> 8 | (puVar7[7] & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      bVar3 = uVar11 <= uVar10;
      iVar8 = -1;
      if (((uVar10 == uVar11) &&
          (uVar11 = (*(ulonglong *)(param_2 + 0xe) & 0xff00ff00ff00ff00) >> 8 |
                    (*(ulonglong *)(param_2 + 0xe) & 0xff00ff00ff00ff) << 8,
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
          uVar10 = uVar11 >> 0x20 | uVar11 << 0x20,
          uVar11 = (puVar7[8] & 0xff00ff00ff00ff00) >> 8 | (puVar7[8] & 0xff00ff00ff00ff) << 8,
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
          uVar11 = uVar11 >> 0x20 | uVar11 << 0x20, bVar3 = uVar11 <= uVar10, uVar10 == uVar11)) &&
         ((uVar11 = (*(ulonglong *)(param_2 + 0x10) & 0xff00ff00ff00ff00) >> 8 |
                    (*(ulonglong *)(param_2 + 0x10) & 0xff00ff00ff00ff) << 8,
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
          uVar10 = uVar11 >> 0x20 | uVar11 << 0x20,
          uVar11 = (puVar7[9] & 0xff00ff00ff00ff00) >> 8 | (puVar7[9] & 0xff00ff00ff00ff) << 8,
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
          uVar11 = uVar11 >> 0x20 | uVar11 << 0x20, bVar3 = uVar11 <= uVar10, uVar10 == uVar11 &&
          (uVar11 = (*(ulonglong *)(param_2 + 0x12) & 0xff00ff00ff00ff00) >> 8 |
                    (*(ulonglong *)(param_2 + 0x12) & 0xff00ff00ff00ff) << 8,
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
          uVar10 = uVar11 >> 0x20 | uVar11 << 0x20,
          uVar11 = (puVar7[10] & 0xff00ff00ff00ff00) >> 8 | (puVar7[10] & 0xff00ff00ff00ff) << 8,
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
          uVar11 = uVar11 >> 0x20 | uVar11 << 0x20, bVar3 = uVar11 <= uVar10, uVar10 == uVar11)))) {
        uVar11 = (*(ulonglong *)(param_2 + 0x14) & 0xff00ff00ff00ff00) >> 8 |
                 (*(ulonglong *)(param_2 + 0x14) & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar11 = (puVar7[0xb] & 0xff00ff00ff00ff00) >> 8 | (puVar7[0xb] & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        bVar3 = uVar11 <= uVar10;
        iVar9 = 0;
        if (uVar10 != uVar11) goto LAB_1801513d0;
      }
      else {
LAB_1801513d0:
        iVar9 = 1;
        if (!bVar3) {
          iVar9 = iVar8;
        }
      }
      if (iVar9 == 0) {
        uVar11 = (*(ulonglong *)(param_2 + 0x16) & 0xff00ff00ff00ff00) >> 8 |
                 (*(ulonglong *)(param_2 + 0x16) & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar11 = (puVar7[0xc] & 0xff00ff00ff00ff00) >> 8 | (puVar7[0xc] & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        bVar3 = uVar11 <= uVar10;
        if (((uVar10 == uVar11) &&
            (uVar11 = (*(ulonglong *)(param_2 + 0x18) & 0xff00ff00ff00ff00) >> 8 |
                      (*(ulonglong *)(param_2 + 0x18) & 0xff00ff00ff00ff) << 8,
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
            uVar10 = uVar11 >> 0x20 | uVar11 << 0x20,
            uVar11 = (puVar7[0xd] & 0xff00ff00ff00ff00) >> 8 | (puVar7[0xd] & 0xff00ff00ff00ff) << 8
            , uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
            uVar11 = uVar11 >> 0x20 | uVar11 << 0x20, bVar3 = uVar11 <= uVar10, uVar10 == uVar11))
           && ((uVar11 = (*(ulonglong *)(param_2 + 0x1a) & 0xff00ff00ff00ff00) >> 8 |
                         (*(ulonglong *)(param_2 + 0x1a) & 0xff00ff00ff00ff) << 8,
               uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
               uVar10 = uVar11 >> 0x20 | uVar11 << 0x20,
               uVar11 = (puVar7[0xe] & 0xff00ff00ff00ff00) >> 8 |
                        (puVar7[0xe] & 0xff00ff00ff00ff) << 8,
               uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
               uVar11 = uVar11 >> 0x20 | uVar11 << 0x20, bVar3 = uVar11 <= uVar10, uVar10 == uVar11
               && (uVar11 = (*(ulonglong *)(param_2 + 0x1c) & 0xff00ff00ff00ff00) >> 8 |
                            (*(ulonglong *)(param_2 + 0x1c) & 0xff00ff00ff00ff) << 8,
                  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10
                  , uVar10 = uVar11 >> 0x20 | uVar11 << 0x20,
                  uVar11 = (puVar7[0xf] & 0xff00ff00ff00ff00) >> 8 |
                           (puVar7[0xf] & 0xff00ff00ff00ff) << 8,
                  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10
                  , uVar11 = uVar11 >> 0x20 | uVar11 << 0x20, bVar3 = uVar11 <= uVar10,
                  uVar10 == uVar11)))) {
          uVar11 = (*(ulonglong *)(param_2 + 0x1e) & 0xff00ff00ff00ff00) >> 8 |
                   (*(ulonglong *)(param_2 + 0x1e) & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar10 = uVar11 >> 0x20 | uVar11 << 0x20;
          uVar11 = (puVar7[0x10] & 0xff00ff00ff00ff00) >> 8 | (puVar7[0x10] & 0xff00ff00ff00ff) << 8
          ;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
          bVar3 = uVar11 <= uVar10;
          iVar9 = 0;
          if (uVar10 != uVar11) goto LAB_180151454;
        }
        else {
LAB_180151454:
          iVar9 = 1;
          if (!bVar3) {
            iVar9 = iVar8;
          }
        }
        if (iVar9 == 0) {
          uVar11 = (*(ulonglong *)(param_2 + 0x20) & 0xff00ff00ff00ff00) >> 8 |
                   (*(ulonglong *)(param_2 + 0x20) & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar10 = uVar11 >> 0x20 | uVar11 << 0x20;
          uVar11 = (puVar7[0x11] & 0xff00ff00ff00ff00) >> 8 | (puVar7[0x11] & 0xff00ff00ff00ff) << 8
          ;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
          bVar3 = uVar11 <= uVar10;
          if ((((uVar10 == uVar11) &&
               (uVar11 = (*(ulonglong *)(param_2 + 0x22) & 0xff00ff00ff00ff00) >> 8 |
                         (*(ulonglong *)(param_2 + 0x22) & 0xff00ff00ff00ff) << 8,
               uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
               uVar10 = uVar11 >> 0x20 | uVar11 << 0x20,
               uVar11 = (puVar7[0x12] & 0xff00ff00ff00ff00) >> 8 |
                        (puVar7[0x12] & 0xff00ff00ff00ff) << 8,
               uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
               uVar11 = uVar11 >> 0x20 | uVar11 << 0x20, bVar3 = uVar11 <= uVar10, uVar10 == uVar11)
               ) && (uVar11 = (*(ulonglong *)(param_2 + 0x24) & 0xff00ff00ff00ff00) >> 8 |
                              (*(ulonglong *)(param_2 + 0x24) & 0xff00ff00ff00ff) << 8,
                    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar11 & 0xffff0000ffff) << 0x10,
                    uVar10 = uVar11 >> 0x20 | uVar11 << 0x20,
                    uVar11 = (puVar7[0x13] & 0xff00ff00ff00ff00) >> 8 |
                             (puVar7[0x13] & 0xff00ff00ff00ff) << 8,
                    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar11 & 0xffff0000ffff) << 0x10,
                    uVar11 = uVar11 >> 0x20 | uVar11 << 0x20, bVar3 = uVar11 <= uVar10,
                    uVar10 == uVar11)) &&
             ((uVar11 = (*(ulonglong *)(param_2 + 0x26) & 0xff00ff00ff00ff00) >> 8 |
                        (*(ulonglong *)(param_2 + 0x26) & 0xff00ff00ff00ff) << 8,
              uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
              uVar10 = uVar11 >> 0x20 | uVar11 << 0x20,
              uVar11 = (puVar7[0x14] & 0xff00ff00ff00ff00) >> 8 |
                       (puVar7[0x14] & 0xff00ff00ff00ff) << 8,
              uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
              uVar11 = uVar11 >> 0x20 | uVar11 << 0x20, bVar3 = uVar11 <= uVar10, uVar10 == uVar11
              && (uVar11 = (*(ulonglong *)(param_2 + 0x28) & 0xff00ff00ff00ff00) >> 8 |
                           (*(ulonglong *)(param_2 + 0x28) & 0xff00ff00ff00ff) << 8,
                 uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
                 uVar10 = uVar11 >> 0x20 | uVar11 << 0x20,
                 uVar11 = (puVar7[0x15] & 0xff00ff00ff00ff00) >> 8 |
                          (puVar7[0x15] & 0xff00ff00ff00ff) << 8,
                 uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10,
                 uVar11 = uVar11 >> 0x20 | uVar11 << 0x20, bVar3 = uVar11 <= uVar10,
                 uVar10 == uVar11)))) {
            iVar9 = 0;
          }
          else {
            iVar9 = 1;
            if (!bVar3) {
              iVar9 = iVar8;
            }
          }
          if (iVar9 == 0) goto LAB_180151530;
        }
      }
    }
  }
  uVar11 = puVar7[0x2a];
  FUN_180205908(param_1[2],uVar11);
  FUN_1802229d8(uVar11,0x148);
  FUN_180151760(param_1,uVar12,uVar4,param_2);
LAB_180151530:
  return *(undefined8 *)(*param_1 + (ulonglong)uVar12 * 0x158 + 0x150);
}

