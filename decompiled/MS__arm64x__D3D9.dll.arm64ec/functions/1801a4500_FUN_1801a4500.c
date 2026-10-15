/*
 * FUN_1801a4500 at 1801a4500
 * undefined FUN_1801a4500(void)
 * Address ranges: 1801a4500-1801a4833
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a4500(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,longlong param_7,undefined4 param_8)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  undefined *puVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong extraout_x15;
  ulonglong uVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  float afStack_8 [2];
  
  auVar14 = FUN_180104f10();
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  lVar7 = auVar14._0_8_;
  lVar4 = extraout_x15 * -0x10;
  *(undefined4 *)(&stack0xffffffffffffffb8 + lVar4) = param_6;
  *(undefined4 *)(&stack0xffffffffffffffbc + lVar4) = param_5;
  *(undefined4 *)(&stack0xffffffffffffffb0 + lVar4) = param_8;
  *(undefined4 *)(&stack0xffffffffffffffb4 + lVar4) = param_3;
  uVar10 = auVar14._8_8_ & 0xffffffff;
  uVar8 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar8,&stack0x000000c0 + lVar4);
  iVar6 = *(int *)(&stack0x000000e0 + lVar4);
  *(undefined8 *)(lVar7 + 0x1ce48) = 0;
  *(undefined8 *)(lVar7 + 0x1ce84) = 0;
  if (iVar6 == 0x3c) {
    uVar12 = 0x80004010;
    if ((&DAT_18022da48)[uVar10] != '\0') {
      uVar12 = 0x80000010;
    }
    uVar12 = uVar12 | *(uint *)(&DAT_18022da80 + uVar10 * 4) & 0xf;
    FUN_180222c50(&stack0x000000f8 + lVar4,0,0x1000);
    if (param_7 != 0) {
      uVar9 = 0;
      do {
        lVar13 = uVar9 * 4;
        uVar3 = (int)uVar9 * 4;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar1;
        bVar2 = *(byte *)(param_7 + 1 + lVar13);
        *(float *)(&stack0x000000f8 + (ulonglong)uVar3 * 4 + lVar4) =
             (float)*(byte *)(param_7 + 2 + lVar13);
        *(float *)(&stack0x000000f8 + (ulonglong)(uVar3 + 1) * 4 + lVar4) = (float)bVar2;
        bVar2 = *(byte *)(param_7 + 3 + lVar13);
        *(float *)(&stack0x000000f8 + (ulonglong)(uVar3 + 2) * 4 + lVar4) =
             (float)*(byte *)(param_7 + lVar13);
        *(float *)(&stack0x000000f8 + (ulonglong)(uVar3 + 3) * 4 + lVar4) = (float)bVar2;
      } while (uVar1 < 0x100);
    }
    lVar13 = *(longlong *)(lVar7 + 0x1cf18);
    *(longlong *)(&stack0xffffffffffffffd0 + lVar4) = lVar7 + 0x1c000;
    uVar8 = *(undefined8 *)(lVar7 + 0x1cf20);
    *(longlong *)(afStack_8 + extraout_x15 * -4 + -8) = lVar7 + 0x1c000;
    uVar11 = *(undefined8 *)(lVar13 + 0x1508);
    *(undefined8 *)(&stack0xffffffffffffffc8 + lVar4) = uVar8;
    uVar8 = (*(code *)puVar5)(0x180224000);
    iVar6 = (*extraout_x11_00)(uVar8,&stack0x000000a8 + lVar4,&stack0xffffffffffffffc0 + lVar4);
    if (-1 < iVar6) {
      FUN_18020af80(uVar11,&stack0x00000078 + lVar4,lVar13 + 0x16d0,0x1000,&stack0x000000f8 + lVar4)
      ;
      if (*(longlong *)(&stack0x00000080 + lVar4) != 0) {
        FUN_18020aff8(uVar11,*(undefined8 *)(&stack0xffffffffffffffc8 + lVar4),lVar13 + 0x16d0,
                      &stack0x00000078 + lVar4,0x1000);
      }
    }
    if (*(int *)(*(longlong *)(*(longlong *)(&stack0xffffffffffffffd0 + lVar4) + 0xf18) + 4) ==
        0x10de) {
      FUN_180207cd0(*(undefined8 *)
                     (*(longlong *)(*(longlong *)(&stack0xffffffffffffffd0 + lVar4) + 0xf18) +
                     0x1508),*(undefined8 *)
                              (*(longlong *)(afStack_8 + extraout_x15 * -4 + -8) + 0xf20),0,1,0);
    }
  }
  else if (iVar6 - 0x44U < 2) {
    uVar12 = 0x80004017;
  }
  else if ((iVar6 - 0x46U < 7) && ((0x49U >> (ulonglong)(iVar6 - 0x46U & 0x1f) & 1) != 0)) {
    uVar12 = 0x80000016;
  }
  else {
    uVar12 = 0x80004010;
    if ((&DAT_18022da48)[uVar10] != '\0') {
      uVar12 = 0x80000010;
    }
    uVar12 = uVar12 | *(uint *)(&DAT_18022da80 + uVar10 * 4) & 0xf;
  }
  *(undefined8 *)(&stack0x00000058 + lVar4) = 0;
  *(undefined8 *)(&stack0x0000006c + lVar4) = 0;
  *(undefined4 *)(&stack0x00000000 + lVar4) = *(undefined4 *)(&stack0xffffffffffffffb4 + lVar4);
  *(undefined4 *)(&stack0x00000004 + lVar4) = param_4;
  uVar1 = *(uint *)(&stack0x00001160 + lVar4);
  *(float *)(&stack0xffffffffffffffe0 + lVar4) = (float)*(uint *)(&stack0xffffffffffffffb0 + lVar4);
  *(float *)(&stack0xffffffffffffffe4 + lVar4) = (float)*(uint *)(&stack0x00001150 + lVar4);
  *(float *)(&stack0xfffffffffffffff0 + lVar4) = (float)*(uint *)(&stack0xffffffffffffffb0 + lVar4);
  *(float *)(&stack0xfffffffffffffff4 + lVar4) = (float)*(uint *)(&stack0x00001150 + lVar4);
  *(undefined4 *)(&stack0x00000008 + lVar4) = *(undefined4 *)(&stack0xffffffffffffffb8 + lVar4);
  *(undefined4 *)(&stack0x0000000c + lVar4) = *(undefined4 *)(&stack0xffffffffffffffb4 + lVar4);
  *(undefined4 *)(&stack0x00000010 + lVar4) = param_4;
  *(undefined4 *)(&stack0x00000014 + lVar4) = *(undefined4 *)(&stack0xffffffffffffffbc + lVar4);
  uVar8 = *(undefined8 *)(&stack0x00001168 + lVar4);
  *(float *)(&stack0xffffffffffffffe8 + lVar4) = (float)*(uint *)(&stack0x00001158 + lVar4);
  *(float *)(&stack0xffffffffffffffec + lVar4) = (float)uVar1;
  afStack_8[extraout_x15 * -4] = (float)*(uint *)(&stack0x00001158 + lVar4);
  afStack_8[extraout_x15 * -4 + 1] = (float)uVar1;
  *(undefined8 *)(&stack0x00000018 + lVar4) = uVar8;
  *(undefined8 *)(&stack0x00000020 + lVar4) = 0;
  *(undefined8 *)(&stack0x00000038 + lVar4) = *(undefined8 *)(&stack0x00001180 + lVar4);
  *(undefined8 *)(&stack0x00000040 + lVar4) = 0;
  *(undefined4 *)(&stack0x00000068 + lVar4) = *(undefined4 *)(&stack0x00001178 + lVar4);
  if (*(undefined8 **)(&stack0x00001170 + lVar4) == (undefined8 *)0x0) {
    *(undefined8 *)(&stack0x00000028 + lVar4) = 0;
  }
  else {
    *(undefined8 *)(&stack0x00000028 + lVar4) = **(undefined8 **)(&stack0x00001170 + lVar4);
  }
  *(undefined8 *)(&stack0x00000030 + lVar4) = 0;
  if (*(undefined8 **)(&stack0x00001188 + lVar4) == (undefined8 *)0x0) {
    *(undefined8 *)(&stack0x00000048 + lVar4) = 0;
  }
  else {
    *(undefined8 *)(&stack0x00000048 + lVar4) = **(undefined8 **)(&stack0x00001188 + lVar4);
  }
  *(undefined8 *)(&stack0x00000050 + lVar4) = 0;
  *(undefined8 *)(&stack0x00000060 + lVar4) = 0;
  FUN_1801a0908(lVar7,&stack0xffffffffffffffe0 + lVar4,6,uVar10,uVar12,0,0,0);
  return;
}

