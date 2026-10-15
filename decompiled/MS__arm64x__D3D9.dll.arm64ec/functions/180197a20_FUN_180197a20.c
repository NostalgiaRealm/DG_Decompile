/*
 * FUN_180197a20 at 180197a20
 * undefined FUN_180197a20(void)
 * Address ranges: 180197a20-180197cc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180197a20(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong extraout_x8;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong extraout_x15;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_8;
  
  auVar15 = FUN_180104f10();
  lVar8 = auVar15._0_8_;
  lVar6 = extraout_x15 * -0x10;
  *(undefined8 *)(&stack0xffffffffffffffb0 + lVar6) = param_5;
  *(undefined8 *)(&stack0xffffffffffffffb8 + lVar6) = param_5;
  *(undefined4 *)(&stack0xffffffffffffffc0 + lVar6) = param_6;
  *(undefined4 *)(&stack0xffffffffffffffc4 + lVar6) = param_7;
  *(undefined4 *)(&stack0xffffffffffffffc8 + lVar6) = param_8;
  uVar13 = auVar15._8_8_ & 0xffffffff;
  FUN_180202728(*(undefined8 *)(lVar8 + 0x1cf10),auVar15._8_8_,lVar8);
  puVar7 = __hybrid_os_arm64x_dispatch_icall;
  uVar9 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar9,&stack0x00000040 + lVar6);
  iVar2 = *(int *)(&stack0x00000050 + lVar6);
  *(undefined8 *)(lVar8 + 0x1ce48) = 0;
  *(undefined8 *)(lVar8 + 0x1ce84) = 0;
  if (iVar2 == 0x3c) {
    uVar14 = 0x80004010;
    if ((&DAT_18022da48)[uVar13] != '\0') {
      uVar14 = 0x80000010;
    }
    uVar14 = uVar14 | *(uint *)(&DAT_18022da80 + uVar13 * 4) & 0xf;
    FUN_180222c50(&stack0x00000070 + lVar6,0,0x1000);
    lVar10 = *(longlong *)(&stack0xffffffffffffffb0 + lVar6);
    if (lVar10 != 0) {
      lVar11 = *(longlong *)(&stack0xffffffffffffffb8 + lVar6);
      uVar12 = 0;
      do {
        lVar5 = uVar12 * 4;
        uVar4 = (int)uVar12 * 4;
        uVar1 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar1;
        bVar3 = *(byte *)(lVar10 + 1 + lVar5);
        *(float *)(&stack0x00000070 + (ulonglong)uVar4 * 4 + lVar6) =
             (float)*(byte *)(lVar10 + 2 + lVar5);
        *(float *)(&stack0x00000070 + (ulonglong)(uVar4 + 1) * 4 + lVar6) = (float)bVar3;
        bVar3 = *(byte *)(lVar10 + 3 + lVar5);
        *(float *)(&stack0x00000070 + (ulonglong)(uVar4 + 2) * 4 + lVar6) =
             (float)*(byte *)(lVar11 + lVar5);
        *(float *)(&stack0x00000070 + (ulonglong)(uVar4 + 3) * 4 + lVar6) = (float)bVar3;
      } while (uVar1 < 0x100);
    }
    uVar9 = (*(code *)puVar7)(lVar8 + 0x1d000);
    (*extraout_x11_00)(uVar9,*(undefined8 *)(extraout_x8 + 0xc0),0,0,&stack0x00000070 + lVar6,0x400,
                       0x400);
  }
  else if (iVar2 - 0x44U < 2) {
    uVar14 = 0x80004017;
  }
  else if ((iVar2 - 0x46U < 7) && ((0x49U >> (ulonglong)(iVar2 - 0x46U & 0x1f) & 1) != 0)) {
    uVar14 = 0x80000016;
  }
  else {
    uVar14 = 0x80004010;
    if ((&DAT_18022da48)[uVar13] != '\0') {
      uVar14 = 0x80000010;
    }
    uVar14 = uVar14 | *(uint *)(&DAT_18022da80 + uVar13 * 4) & 0xf;
  }
  *(undefined4 *)(&stack0xffffffffffffffb0 + lVar6) = param_3;
  *(undefined4 *)(&stack0xffffffffffffffb4 + lVar6) = param_4;
  *(undefined4 *)(&stack0xffffffffffffffb8 + lVar6) = param_3;
  *(undefined4 *)(&stack0xffffffffffffffbc + lVar6) = param_4;
  *(undefined8 *)(&stack0x00000030 + lVar6) = 0;
  *(undefined8 *)(&stack0x00000038 + lVar6) = 0;
  uVar1 = *(uint *)(&stack0xffffffffffffffc8 + lVar6);
  uVar4 = *(uint *)(&stack0x000010c0 + lVar6);
  *(float *)(&stack0xffffffffffffffd0 + lVar6) = (float)*(uint *)(&stack0xffffffffffffffc0 + lVar6);
  *(float *)(&stack0xffffffffffffffd4 + lVar6) = (float)*(uint *)(&stack0xffffffffffffffc4 + lVar6);
  *(float *)(&stack0xffffffffffffffe0 + lVar6) = (float)*(uint *)(&stack0xffffffffffffffc0 + lVar6);
  *(float *)(&stack0xffffffffffffffe4 + lVar6) = (float)*(uint *)(&stack0xffffffffffffffc4 + lVar6);
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar6) =
       *(undefined8 *)(&stack0xffffffffffffffb0 + lVar6);
  (&uStack_8)[extraout_x15 * -2] = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar6);
  *(undefined8 *)(&stack0x00000000 + lVar6) = *(undefined8 *)(&stack0x000010c8 + lVar6);
  *(undefined8 *)(&stack0x00000008 + lVar6) = *(undefined8 *)(&stack0x000010d0 + lVar6);
  *(float *)(&stack0xffffffffffffffd8 + lVar6) = (float)uVar1;
  *(float *)(&stack0xffffffffffffffdc + lVar6) = (float)uVar4;
  *(float *)(&stack0xffffffffffffffe8 + lVar6) = (float)uVar1;
  *(float *)(&stack0xffffffffffffffec + lVar6) = (float)uVar4;
  *(undefined8 *)(&stack0x00000010 + lVar6) = 0;
  *(undefined8 *)(&stack0x00000018 + lVar6) = *(undefined8 *)(&stack0x000010d8 + lVar6);
  *(undefined8 *)(&stack0x00000020 + lVar6) = *(undefined8 *)(&stack0x000010e0 + lVar6);
  *(undefined8 *)(&stack0x00000028 + lVar6) = 0;
  FUN_180190e60(lVar8,&stack0xffffffffffffffd0 + lVar6,6,uVar13,uVar14,0,0);
  thunk_FUN_18022370c(*(longlong *)(lVar8 + 0x1cf10) + 0x620);
  return;
}

