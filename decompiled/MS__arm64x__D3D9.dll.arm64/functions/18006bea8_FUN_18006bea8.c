/*
 * FUN_18006bea8 at 18006bea8
 * undefined FUN_18006bea8(void)
 * Address ranges: 18006bea8-18006c1f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006bea8(void)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong extraout_x1;
  undefined8 uVar4;
  ulonglong uVar5;
  uint *puVar6;
  int extraout_w12;
  int extraout_w12_00;
  int iVar7;
  uint extraout_w12_01;
  uint uVar8;
  undefined8 uVar9;
  undefined8 extraout_x13;
  undefined8 uVar10;
  undefined8 extraout_x14;
  undefined1 auVar11 [16];
  
  auVar11 = FUN_1800764b0();
  auVar11 = func_0x000180184678(*(undefined4 *)(*(longlong *)(auVar11._8_8_ + 0x1b0) + 0x44),
                                auVar11._0_8_,auVar11._8_8_,0,7);
  lVar3 = auVar11._8_8_;
  iVar7 = extraout_w12;
  if ((((*(char *)(lVar3 + 0x1c2) != '\0') || (*(char *)(lVar3 + 0x1c4) != '\0')) ||
      (((uint)*(undefined8 *)(lVar3 + 0x520) >> 9 & 1) != 0)) &&
     ((*(uint *)(lVar3 + 0x1ac) >> 2 & 1) != 0)) {
    auVar11 = func_0x000180184678(auVar11._0_8_,lVar3,3,7);
    iVar7 = extraout_w12_00;
  }
  if (iVar7 != 0) {
    if ((*(uint *)(auVar11._8_8_ + 0x1ac) >> 0x10 & 1) != 0) {
      auVar11 = func_0x000180184678(auVar11._0_8_,auVar11._8_8_,0xf,7);
    }
    lVar3 = auVar11._8_8_;
    if (((*(char *)(lVar3 + 0x1c2) != '\0') || (*(char *)(lVar3 + 0x1c4) != '\0')) &&
       ((*(uint *)(lVar3 + 0x1ac) >> 0x11 & 1) != 0)) {
      auVar11 = func_0x000180184678(auVar11._0_8_,lVar3,0x10,7);
    }
  }
  if ((*(uint *)(auVar11._8_8_ + 0x1ac) >> 0xb & 1) != 0) {
    auVar11 = func_0x000180184678(auVar11._0_8_,auVar11._8_8_,1,1);
  }
  if ((*(uint *)(auVar11._8_8_ + 0x1ac) >> 0xc & 1) != 0) {
    auVar11 = func_0x000180184678(auVar11._0_8_,auVar11._8_8_,1,2);
  }
  if ((*(uint *)(auVar11._8_8_ + 0x1ac) >> 0xd & 1) != 0) {
    auVar11 = func_0x000180184678(auVar11._0_8_,auVar11._8_8_,1,4);
  }
  if ((*(uint *)(auVar11._8_8_ + 0x1ac) >> 1 & 1) != 0) {
    auVar11 = func_0x000180184678(auVar11._0_8_,auVar11._8_8_,6,8);
  }
  uVar8 = 0;
  uVar9 = 8;
  uVar4 = 4;
  uVar10 = 0xf;
  do {
    lVar3 = auVar11._8_8_;
    puVar6 = *(uint **)(lVar3 + 0x1b0);
    if ((((puVar6[8] & puVar6[3]) >> (ulonglong)(uVar8 * 3 & 0x1f) & 7) == 0) &&
       (uVar1 = (puVar6[5] & puVar6[4] & *puVar6) >> (ulonglong)(uVar8 * 3 & 0x1f) & 7,
       (*(uint *)(lVar3 + 0x1ac) & (int)uVar9 << (ulonglong)uVar1) != 0)) {
      auVar11 = func_0x000180184678(auVar11._0_8_,lVar3,uVar1 + 7,
                                    (int)uVar10 >>
                                    ((int)uVar4 -
                                     ((puVar6[6] & puVar6[1]) >> (ulonglong)(uVar1 * 3) & 7) & 0x1f)
                                   );
      uVar9 = extraout_x13;
      uVar10 = extraout_x14;
      uVar8 = extraout_w12_01;
    }
    lVar3 = auVar11._8_8_;
    uVar8 = uVar8 + 1;
  } while (uVar8 < 8);
  if (*(char *)(lVar3 + 0x1c9) == '\0') {
    if ((*(uint *)(lVar3 + 0x1ac) & 1) != 0) {
      auVar11 = func_0x000180184678(auVar11._0_8_,lVar3,5,0xf);
    }
    lVar3 = auVar11._8_8_;
    if ((*(uint *)(lVar3 + 0x1ac) >> 7 & 1) == 0) goto LAB_18006c19c;
LAB_18006c190:
    uVar9 = 7;
  }
  else {
    uVar8 = 0;
    do {
      if ((*(uint *)(*(longlong *)(lVar3 + 0x1b0) + 0x28) >> (ulonglong)(uVar8 * 3 & 0x1f) & 7) != 0
         ) {
        *(undefined1 *)(lVar3 + 0x1ca) = 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 8);
    if ((*(uint *)(lVar3 + 0x1ac) & 1) != 0) {
      if ((*(uint *)(*(longlong *)(lVar3 + 0x1b0) + 0x2c) & 3) == 1) {
        auVar11 = func_0x000180184678(auVar11._0_8_,lVar3,5,7);
      }
      if ((*(uint *)(*(longlong *)(auVar11._8_8_ + 0x1b0) + 0x2c) & 0xc) == 4) {
        auVar11 = func_0x000180184678(auVar11._0_8_,auVar11._8_8_,5,7);
      }
      lVar3 = auVar11._8_8_;
      bVar2 = (*(uint *)(*(longlong *)(lVar3 + 0x1b0) + 0x2c) & 0x30) == 0x10;
      if (*(char *)(lVar3 + 0x1ca) == '\0') {
        if (bVar2) {
          uVar9 = 8;
          goto LAB_18006c0d8;
        }
      }
      else {
        if (bVar2) {
          auVar11 = func_0x000180184678(auVar11._0_8_,lVar3,5,0xf);
        }
        if ((*(uint *)(*(longlong *)(auVar11._8_8_ + 0x1b0) + 0x2c) & 0xc0) == 0x40) {
          uVar9 = 7;
LAB_18006c0d8:
          auVar11 = func_0x000180184678(auVar11._0_8_,auVar11._8_8_,5,uVar9);
        }
      }
    }
    lVar3 = auVar11._8_8_;
    if ((*(uint *)(lVar3 + 0x1ac) >> 1 & 1) == 0) goto LAB_18006c19c;
    if ((*(uint *)(*(longlong *)(lVar3 + 0x1b0) + 0x2c) & 3) == 2) {
      auVar11 = func_0x000180184678(auVar11._0_8_,lVar3,6,7);
    }
    if ((*(uint *)(*(longlong *)(auVar11._8_8_ + 0x1b0) + 0x2c) & 0xc) == 8) {
      auVar11 = func_0x000180184678(auVar11._0_8_,auVar11._8_8_,6,7);
    }
    lVar3 = auVar11._8_8_;
    bVar2 = (*(uint *)(*(longlong *)(lVar3 + 0x1b0) + 0x2c) & 0x30) != 0x20;
    if (*(char *)(lVar3 + 0x1ca) != '\0') {
      if (!bVar2) {
        auVar11 = func_0x000180184678(auVar11._0_8_,lVar3,6,0xf);
      }
      lVar3 = auVar11._8_8_;
      if ((*(uint *)(*(longlong *)(lVar3 + 0x1b0) + 0x2c) & 0xc0) != 0x80) goto LAB_18006c19c;
      goto LAB_18006c190;
    }
    if (bVar2) goto LAB_18006c19c;
    uVar9 = 8;
  }
  func_0x000180184678(auVar11._0_8_,auVar11._8_8_,6,uVar9);
  lVar3 = extraout_x1;
LAB_18006c19c:
  if (((uint)*(undefined8 *)(lVar3 + 0x520) >> 9 & 1) != 0) {
    uVar8 = *(uint *)(lVar3 + 0x158);
    uVar5 = 0;
    if (uVar8 != 0) {
      do {
        if (*(char *)(lVar3 + 0x146 + uVar5) == '\x03') {
          *(undefined1 *)(lVar3 + (ulonglong)uVar8 + 0x146) = 0x11;
          *(int *)(lVar3 + 0x158) = *(int *)(lVar3 + 0x158) + 1;
          *(undefined1 *)(lVar3 + 0x145) = 7;
          return;
        }
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
      } while (uVar1 < uVar8);
    }
  }
  return;
}

