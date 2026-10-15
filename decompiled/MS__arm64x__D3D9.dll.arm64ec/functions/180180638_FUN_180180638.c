/*
 * FUN_180180638 at 180180638
 * undefined FUN_180180638(void)
 * Address ranges: 180180638-180180827
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180180638(void)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 in_x3;
  undefined4 in_w4;
  longlong *in_x5;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong extraout_x15;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_8;
  
  auVar13 = FUN_180104f10();
  lVar5 = extraout_x15 * -0x10;
  FUN_18017f7c0(auVar13._0_8_,&stack0x00000840 + lVar5);
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar5) = in_x3;
  (&uStack_8)[extraout_x15 * -2] = 0;
  *(undefined1 **)(&stack0x00000000 + lVar5) = &stack0x00000840 + lVar5;
  *(undefined8 *)(&stack0x00000008 + lVar5) = 0;
  FUN_180222c50(&stack0x0000001c + lVar5,0,0x464);
  FUN_180222c50(&stack0x00000480 + lVar5,0,0x3c0);
  *(longlong *)(&stack0x00000510 + lVar5) = auVar13._8_8_;
  (&stack0x00000064)[lVar5] = 0;
  *(undefined8 *)(&stack0x00000038 + lVar5) = 0;
  *(undefined8 *)(&stack0x00000030 + lVar5) = 0;
  *(undefined8 *)(&stack0x00000048 + lVar5) = 0;
  *(undefined8 *)(&stack0x00000040 + lVar5) = 0;
  *(undefined1 **)(&stack0x00000040 + lVar5) = &stack0x00000066 + lVar5;
  *(undefined2 *)(&stack0x00000048 + lVar5) = 0x40;
  *(undefined8 *)(&stack0xffffffffffffffc0 + lVar5) = 0x43425844;
  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5) = 0;
  *(undefined8 *)(&stack0x00000018 + lVar5) = 0;
  *(undefined8 *)(&stack0x00000010 + lVar5) = 0;
  *(undefined8 *)(&stack0x00000028 + lVar5) = 0;
  *(undefined8 *)(&stack0x00000020 + lVar5) = 0;
  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0x100000000;
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar5) = 0x300000000;
  *(undefined4 *)(&stack0x00000010 + lVar5) = in_w4;
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar5) = 0;
  *(undefined4 *)(&stack0xffffffffffffffe8 + lVar5) = 0;
  uVar7 = FUN_180214fe8(in_x5,&stack0xffffffffffffffc0 + lVar5,0x2c);
  uVar12 = 0;
  bVar6 = false;
  *(int *)(*in_x5 + 0x20) = (int)in_x5[1] - (int)*in_x5;
  (&stack0x0000052e)[lVar5] = 0;
  if (((uint)*(undefined8 *)(&stack0x00000510 + lVar5) >> 9 & 1) != 0) {
    uVar11 = 0xffffffff;
    uVar8 = 0;
    uVar9 = 0xffffffff;
    do {
      pcVar1 = (char *)(*(longlong *)(&stack0x00000000 + lVar5) + uVar8);
      cVar4 = *pcVar1;
      uVar10 = uVar9;
      if (cVar4 == '\0') {
        if (pcVar1[0x10] != '\0') {
          uVar11 = uVar8;
        }
      }
      else {
        uVar10 = (uint)uVar8;
        if (cVar4 != '0') {
          uVar10 = uVar9;
        }
      }
      uVar3 = (uint)uVar8 + 1;
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar10;
    } while (uVar3 < 0x10);
    if ((int)uVar11 != -1 && uVar10 != 0xffffffff) {
      bVar6 = true;
      *(uint *)(&stack0x00000518 + lVar5) = uVar10;
      (&stack0x0000052e)[lVar5] = 1;
      goto LAB_180180778;
    }
  }
  uVar10 = *(uint *)(&stack0x00000518 + lVar5);
LAB_180180778:
  (&stack0x0000052c)[lVar5] = 0;
  if (bVar6) {
    lVar2 = *(longlong *)(&stack0x00000000 + lVar5) + (ulonglong)uVar10;
    (&stack0x0000052c)[lVar5] = *(undefined1 *)(lVar2 + 0x10);
    *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) | 7;
  }
  uVar11 = FUN_18018aff0(uVar7,in_x5,&stack0xfffffffffffffff0 + lVar5);
  if ((uVar11 & 1) != 0) {
    *(int *)(*in_x5 + 0x24) = (int)in_x5[1] - (int)*in_x5;
    if ((&stack0x0000052e)[lVar5] != '\0') {
      *(undefined1 *)
       (*(longlong *)(&stack0x00000000 + lVar5) + (ulonglong)*(uint *)(&stack0x00000518 + lVar5) +
       0x10) = (&stack0x0000052c)[lVar5];
    }
    uVar11 = FUN_18017f880(uVar11,in_x5,&stack0xfffffffffffffff0 + lVar5);
    if ((uVar11 & 1) != 0) {
      *(int *)(*in_x5 + 0x28) = (int)in_x5[1] - (int)*in_x5;
      uVar11 = FUN_18017fa38(auVar13._0_8_,in_x5,&stack0xfffffffffffffff0 + lVar5);
      if ((uVar11 & 1) != 0) {
        FUN_180212ef0(in_x5);
        uVar12 = 1;
      }
    }
  }
  return uVar12;
}

