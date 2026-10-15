/*
 * FUN_18008dce0 at 18008dce0
 * undefined FUN_18008dce0(void)
 * Address ranges: 18008dce0-18008dffb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008dce0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,longlong param_7,ulonglong param_8)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong extraout_x15;
  ulonglong uVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  
  auVar14 = FUN_180001640();
  lVar6 = auVar14._0_8_;
  lVar4 = extraout_x15 * -0x10;
  uVar10 = auVar14._8_8_ & 0xffffffff;
  (**(code **)(**(longlong **)(&stack0x00001170 + lVar4) + 0x50))
            (*(longlong **)(&stack0x00001170 + lVar4),&stack0x000000a0 + lVar4);
  iVar5 = *(int *)(&stack0x000000c0 + lVar4);
  *(undefined8 *)(lVar6 + 0x1ce48) = 0;
  *(undefined8 *)(lVar6 + 0x1ce84) = 0;
  if (iVar5 == 0x3c) {
    uVar12 = 0x80004010;
    if ((&DAT_180231518)[uVar10] != '\0') {
      uVar12 = 0x80000010;
    }
    uVar12 = uVar12 | *(uint *)(&DAT_180231550 + uVar10 * 4) & 0xf;
    func_0x000180222c50(&stack0x000000d8 + lVar4,0,0x1000);
    if (param_7 != 0) {
      uVar8 = 0;
      do {
        lVar9 = uVar8 * 4;
        uVar3 = (int)uVar8 * 4;
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar1;
        bVar2 = *(byte *)(param_7 + 1 + lVar9);
        *(float *)(&stack0x000000d8 + (ulonglong)uVar3 * 4 + lVar4) =
             (float)*(byte *)(param_7 + 2 + lVar9);
        *(float *)(&stack0x000000d8 + (ulonglong)(uVar3 + 1) * 4 + lVar4) = (float)bVar2;
        *(float *)(&stack0x000000d8 + (ulonglong)(uVar3 + 2) * 4 + lVar4) =
             (float)*(byte *)(param_7 + lVar9);
        *(float *)(&stack0x000000d8 + (ulonglong)(uVar3 + 3) * 4 + lVar4) =
             (float)*(byte *)(param_7 + 3 + lVar9);
      } while (uVar1 < 0x100);
    }
    lVar13 = *(longlong *)(lVar6 + 0x1cf18);
    *(longlong *)(&stack0xffffffffffffffb0 + lVar4) = lVar6 + 0x1c000;
    plVar7 = *(longlong **)(lVar6 + 0x1cf20);
    *(longlong *)(&stack0xffffffffffffffb8 + lVar4) = lVar6 + 0x1c000;
    uVar11 = *(undefined8 *)(lVar13 + 0x1508);
    lVar9 = *plVar7;
    *(longlong **)(&stack0xffffffffffffffa8 + lVar4) = plVar7;
    iVar5 = (**(code **)(lVar9 + 0x70))
                      (plVar7,&stack0x00000088 + lVar4,&stack0xffffffffffffffa0 + lVar4);
    if ((-1 < iVar5) &&
       (FUN_1800eb578(uVar11,&stack0x00000058 + lVar4,lVar13 + 0x16d0,0x1000,
                      &stack0x000000d8 + lVar4), *(longlong *)(&stack0x00000060 + lVar4) != 0)) {
      FUN_1800eb5f0(uVar11,*(undefined8 *)(&stack0xffffffffffffffa8 + lVar4),lVar13 + 0x16d0,
                    &stack0x00000058 + lVar4,0x1000);
    }
    if (*(int *)(*(longlong *)(*(longlong *)(&stack0xffffffffffffffb0 + lVar4) + 0xf18) + 4) ==
        0x10de) {
      FUN_1800e8bb8(*(undefined8 *)
                     (*(longlong *)(*(longlong *)(&stack0xffffffffffffffb0 + lVar4) + 0xf18) +
                     0x1508),*(undefined8 *)
                              (*(longlong *)(&stack0xffffffffffffffb8 + lVar4) + 0xf20),0,1,0);
    }
  }
  else if (iVar5 - 0x44U < 2) {
    uVar12 = 0x80004017;
  }
  else if ((iVar5 - 0x46U < 7) && ((0x49U >> (ulonglong)(iVar5 - 0x46U & 0x1f) & 1) != 0)) {
    uVar12 = 0x80000016;
  }
  else {
    uVar12 = 0x80004010;
    if ((&DAT_180231518)[uVar10] != '\0') {
      uVar12 = 0x80000010;
    }
    uVar12 = uVar12 | *(uint *)(&DAT_180231550 + uVar10 * 4) & 0xf;
  }
  *(undefined4 *)(&stack0xffffffffffffffe0 + lVar4) = param_3;
  *(undefined4 *)(&stack0xffffffffffffffe4 + lVar4) = param_4;
  *(undefined4 *)(&stack0xffffffffffffffe8 + lVar4) = param_6;
  *(undefined4 *)(&stack0xffffffffffffffec + lVar4) = param_3;
  *(undefined4 *)(&stack0xfffffffffffffff0 + lVar4) = param_4;
  *(undefined4 *)(&stack0xfffffffffffffff4 + lVar4) = param_5;
  *(undefined8 *)(&stack0x00000038 + lVar4) = 0;
  *(undefined8 *)(&stack0x0000004c + lVar4) = 0;
  *(float *)(&stack0xffffffffffffffc0 + lVar4) = (float)(param_8 & 0xffffffff);
  *(float *)(&stack0xffffffffffffffc4 + lVar4) = (float)*(uint *)(&stack0x00001140 + lVar4);
  *(float *)(&stack0xffffffffffffffd0 + lVar4) = (float)(param_8 & 0xffffffff);
  *(float *)(&stack0xffffffffffffffd4 + lVar4) = (float)*(uint *)(&stack0x00001140 + lVar4);
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar4) = *(undefined8 *)(&stack0x00001158 + lVar4);
  *(undefined8 *)(&stack0x00000000 + lVar4) = 0;
  *(undefined8 *)(&stack0x00000018 + lVar4) = *(undefined8 *)(&stack0x00001170 + lVar4);
  *(undefined8 *)(&stack0x00000020 + lVar4) = 0;
  *(float *)(&stack0xffffffffffffffc8 + lVar4) = (float)*(uint *)(&stack0x00001148 + lVar4);
  *(float *)(&stack0xffffffffffffffcc + lVar4) = (float)*(uint *)(&stack0x00001150 + lVar4);
  *(float *)(&stack0xffffffffffffffd8 + lVar4) = (float)*(uint *)(&stack0x00001148 + lVar4);
  *(float *)(&stack0xffffffffffffffdc + lVar4) = (float)*(uint *)(&stack0x00001150 + lVar4);
  *(undefined4 *)(&stack0x00000048 + lVar4) = *(undefined4 *)(&stack0x00001168 + lVar4);
  if (*(undefined8 **)(&stack0x00001160 + lVar4) == (undefined8 *)0x0) {
    *(undefined8 *)(&stack0x00000008 + lVar4) = 0;
  }
  else {
    *(undefined8 *)(&stack0x00000008 + lVar4) = **(undefined8 **)(&stack0x00001160 + lVar4);
  }
  *(undefined8 *)(&stack0x00000010 + lVar4) = 0;
  if (*(undefined8 **)(&stack0x00001178 + lVar4) == (undefined8 *)0x0) {
    *(undefined8 *)(&stack0x00000028 + lVar4) = 0;
  }
  else {
    *(undefined8 *)(&stack0x00000028 + lVar4) = **(undefined8 **)(&stack0x00001178 + lVar4);
  }
  *(undefined8 *)(&stack0x00000030 + lVar4) = 0;
  *(undefined8 *)(&stack0x00000040 + lVar4) = 0;
  FUN_18008a4a0(lVar6,&stack0xffffffffffffffc0 + lVar4,6,uVar10,uVar12,0,0,0);
  return;
}

