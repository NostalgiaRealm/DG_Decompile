/*
 * FUN_18017e8e8 at 18017e8e8
 * undefined FUN_18017e8e8(void)
 * Address ranges: 18017e8e8-18017ec37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18017e8e8(void)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong extraout_x1;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulonglong uVar8;
  int extraout_w12;
  int extraout_w12_00;
  int iVar9;
  uint extraout_w12_01;
  uint uVar10;
  undefined1 auVar11 [16];
  
  auVar11 = FUN_18018a398();
  auVar11 = FUN_180184678(*(undefined4 *)(*(longlong *)(auVar11._8_8_ + 0x1b0) + 0x44),auVar11._0_8_
                          ,auVar11._8_8_,0,7);
  lVar3 = auVar11._8_8_;
  iVar9 = extraout_w12;
  if ((((*(char *)(lVar3 + 0x1c2) != '\0') || (*(char *)(lVar3 + 0x1c4) != '\0')) ||
      (((uint)*(undefined8 *)(lVar3 + 0x520) >> 9 & 1) != 0)) &&
     ((*(uint *)(lVar3 + 0x1ac) >> 2 & 1) != 0)) {
    auVar11 = FUN_180184678(auVar11._0_8_,lVar3,3,7);
    iVar9 = extraout_w12_00;
  }
  if (iVar9 != 0) {
    if ((*(uint *)(auVar11._8_8_ + 0x1ac) >> 0x10 & 1) != 0) {
      auVar11 = FUN_180184678(auVar11._0_8_,auVar11._8_8_,0xf,7);
    }
    lVar3 = auVar11._8_8_;
    if (((*(char *)(lVar3 + 0x1c2) != '\0') || (*(char *)(lVar3 + 0x1c4) != '\0')) &&
       ((*(uint *)(lVar3 + 0x1ac) >> 0x11 & 1) != 0)) {
      auVar11 = FUN_180184678(auVar11._0_8_,lVar3,0x10,7);
    }
  }
  if ((*(uint *)(auVar11._8_8_ + 0x1ac) >> 0xb & 1) != 0) {
    auVar11 = FUN_180184678(auVar11._0_8_,auVar11._8_8_,1,1);
  }
  if ((*(uint *)(auVar11._8_8_ + 0x1ac) >> 0xc & 1) != 0) {
    auVar11 = FUN_180184678(auVar11._0_8_,auVar11._8_8_,1,2);
  }
  if ((*(uint *)(auVar11._8_8_ + 0x1ac) >> 0xd & 1) != 0) {
    auVar11 = FUN_180184678(auVar11._0_8_,auVar11._8_8_,1,4);
  }
  if ((*(uint *)(auVar11._8_8_ + 0x1ac) >> 1 & 1) != 0) {
    auVar11 = FUN_180184678(auVar11._0_8_,auVar11._8_8_,6,8);
  }
  uVar10 = 0;
  uVar4 = 8;
  uVar6 = 4;
  uVar5 = 0xf;
  do {
    lVar3 = auVar11._8_8_;
    puVar7 = *(uint **)(lVar3 + 0x1b0);
    if ((((puVar7[8] & puVar7[3]) >> (ulonglong)(uVar10 * 3 & 0x1f) & 7) == 0) &&
       (uVar1 = (puVar7[5] & puVar7[4] & *puVar7) >> (ulonglong)(uVar10 * 3 & 0x1f) & 7,
       (*(uint *)(lVar3 + 0x1ac) & (int)uVar4 << (ulonglong)uVar1) != 0)) {
      auVar11 = FUN_180184678(auVar11._0_8_,lVar3,uVar1 + 7,
                              (int)uVar5 >>
                              ((int)uVar6 - ((puVar7[6] & puVar7[1]) >> (ulonglong)(uVar1 * 3) & 7)
                              & 0x1f));
      uVar10 = extraout_w12_01;
    }
    lVar3 = auVar11._8_8_;
    uVar10 = uVar10 + 1;
  } while (uVar10 < 8);
  if (*(char *)(lVar3 + 0x1c9) == '\0') {
    if ((*(uint *)(lVar3 + 0x1ac) & 1) != 0) {
      auVar11 = FUN_180184678(auVar11._0_8_,lVar3,5,0xf);
    }
    lVar3 = auVar11._8_8_;
    if ((*(uint *)(lVar3 + 0x1ac) >> 7 & 1) == 0) goto LAB_18017ebdc;
LAB_18017ebd0:
    uVar4 = 7;
  }
  else {
    uVar10 = 0;
    do {
      if ((*(uint *)(*(longlong *)(lVar3 + 0x1b0) + 0x28) >> (ulonglong)(uVar10 * 3 & 0x1f) & 7) !=
          0) {
        *(undefined1 *)(lVar3 + 0x1ca) = 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 8);
    if ((*(uint *)(lVar3 + 0x1ac) & 1) != 0) {
      if ((*(uint *)(*(longlong *)(lVar3 + 0x1b0) + 0x2c) & 3) == 1) {
        auVar11 = FUN_180184678(auVar11._0_8_,lVar3,5,7);
      }
      if ((*(uint *)(*(longlong *)(auVar11._8_8_ + 0x1b0) + 0x2c) & 0xc) == 4) {
        auVar11 = FUN_180184678(auVar11._0_8_,auVar11._8_8_,5,7);
      }
      lVar3 = auVar11._8_8_;
      bVar2 = (*(uint *)(*(longlong *)(lVar3 + 0x1b0) + 0x2c) & 0x30) == 0x10;
      if (*(char *)(lVar3 + 0x1ca) == '\0') {
        if (bVar2) {
          uVar4 = 8;
          goto LAB_18017eb18;
        }
      }
      else {
        if (bVar2) {
          auVar11 = FUN_180184678(auVar11._0_8_,lVar3,5,0xf);
        }
        if ((*(uint *)(*(longlong *)(auVar11._8_8_ + 0x1b0) + 0x2c) & 0xc0) == 0x40) {
          uVar4 = 7;
LAB_18017eb18:
          auVar11 = FUN_180184678(auVar11._0_8_,auVar11._8_8_,5,uVar4);
        }
      }
    }
    lVar3 = auVar11._8_8_;
    if ((*(uint *)(lVar3 + 0x1ac) >> 1 & 1) == 0) goto LAB_18017ebdc;
    if ((*(uint *)(*(longlong *)(lVar3 + 0x1b0) + 0x2c) & 3) == 2) {
      auVar11 = FUN_180184678(auVar11._0_8_,lVar3,6,7);
    }
    if ((*(uint *)(*(longlong *)(auVar11._8_8_ + 0x1b0) + 0x2c) & 0xc) == 8) {
      auVar11 = FUN_180184678(auVar11._0_8_,auVar11._8_8_,6,7);
    }
    lVar3 = auVar11._8_8_;
    bVar2 = (*(uint *)(*(longlong *)(lVar3 + 0x1b0) + 0x2c) & 0x30) != 0x20;
    if (*(char *)(lVar3 + 0x1ca) != '\0') {
      if (!bVar2) {
        auVar11 = FUN_180184678(auVar11._0_8_,lVar3,6,0xf);
      }
      lVar3 = auVar11._8_8_;
      if ((*(uint *)(*(longlong *)(lVar3 + 0x1b0) + 0x2c) & 0xc0) != 0x80) goto LAB_18017ebdc;
      goto LAB_18017ebd0;
    }
    if (bVar2) goto LAB_18017ebdc;
    uVar4 = 8;
  }
  FUN_180184678(auVar11._0_8_,auVar11._8_8_,6,uVar4);
  lVar3 = extraout_x1;
LAB_18017ebdc:
  if (((uint)*(undefined8 *)(lVar3 + 0x520) >> 9 & 1) != 0) {
    uVar10 = *(uint *)(lVar3 + 0x158);
    uVar8 = 0;
    if (uVar10 != 0) {
      do {
        if (*(char *)(lVar3 + 0x146 + uVar8) == '\x03') {
          *(undefined1 *)(lVar3 + (ulonglong)uVar10 + 0x146) = 0x11;
          *(int *)(lVar3 + 0x158) = *(int *)(lVar3 + 0x158) + 1;
          *(undefined1 *)(lVar3 + 0x145) = 7;
          return;
        }
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar1;
      } while (uVar1 < uVar10);
    }
  }
  return;
}

