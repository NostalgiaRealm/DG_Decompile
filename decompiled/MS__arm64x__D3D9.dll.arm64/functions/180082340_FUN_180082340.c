/*
 * FUN_180082340 at 180082340
 * undefined FUN_180082340(void)
 * Address ranges: 180082340-1800825c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180082340(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong extraout_x15;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  
  auVar12 = FUN_180001640();
  lVar7 = auVar12._0_8_;
  lVar6 = extraout_x15 * -0x10;
  uVar10 = auVar12._8_8_ & 0xffffffff;
  FUN_1800e5470(*(undefined8 *)(lVar7 + 0x1cf10),auVar12._8_8_,lVar7);
  (**(code **)(**(longlong **)(&stack0x000010c8 + lVar6) + 0x50))
            (*(longlong **)(&stack0x000010c8 + lVar6),&stack0x00000020 + lVar6);
  iVar2 = *(int *)(&stack0x00000030 + lVar6);
  *(undefined8 *)(lVar7 + 0x1ce48) = 0;
  *(undefined8 *)(lVar7 + 0x1ce84) = 0;
  if (iVar2 == 0x3c) {
    uVar11 = 0x80004010;
    if ((&DAT_180231518)[uVar10] != '\0') {
      uVar11 = 0x80000010;
    }
    uVar11 = uVar11 | *(uint *)(&DAT_180231550 + uVar10 * 4) & 0xf;
    func_0x000180222c50(&stack0x00000050 + lVar6,0,0x1000);
    if (param_5 != 0) {
      uVar9 = 0;
      do {
        lVar5 = uVar9 * 4;
        uVar4 = (int)uVar9 * 4;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar1;
        bVar3 = *(byte *)(param_5 + 1 + lVar5);
        *(float *)(&stack0x00000050 + (ulonglong)uVar4 * 4 + lVar6) =
             (float)*(byte *)(param_5 + 2 + lVar5);
        *(float *)(&stack0x00000050 + (ulonglong)(uVar4 + 1) * 4 + lVar6) = (float)bVar3;
        *(float *)(&stack0x00000050 + (ulonglong)(uVar4 + 2) * 4 + lVar6) =
             (float)*(byte *)(param_5 + lVar5);
        *(float *)(&stack0x00000050 + (ulonglong)(uVar4 + 3) * 4 + lVar6) =
             (float)*(byte *)(param_5 + 3 + lVar5);
      } while (uVar1 < 0x100);
    }
    plVar8 = *(longlong **)(*(longlong *)(lVar7 + 0x1cf18) + 8);
    (**(code **)(*plVar8 + 0x180))
              (plVar8,*(undefined8 *)(lVar7 + 0x1d0c0),0,0,&stack0x00000050 + lVar6,0x400,0x400);
  }
  else if (iVar2 - 0x44U < 2) {
    uVar11 = 0x80004017;
  }
  else if ((iVar2 - 0x46U < 7) && ((0x49U >> (ulonglong)(iVar2 - 0x46U & 0x1f) & 1) != 0)) {
    uVar11 = 0x80000016;
  }
  else {
    uVar11 = 0x80004010;
    if ((&DAT_180231518)[uVar10] != '\0') {
      uVar11 = 0x80000010;
    }
    uVar11 = uVar11 | *(uint *)(&DAT_180231550 + uVar10 * 4) & 0xf;
  }
  *(undefined4 *)(&stack0xffffffffffffffa0 + lVar6) = param_3;
  *(undefined4 *)(&stack0xffffffffffffffa4 + lVar6) = param_4;
  *(undefined4 *)(&stack0xffffffffffffffa8 + lVar6) = param_3;
  *(undefined4 *)(&stack0xffffffffffffffac + lVar6) = param_4;
  *(undefined8 *)(&stack0x00000010 + lVar6) = 0;
  *(undefined8 *)(&stack0x00000018 + lVar6) = 0;
  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar6) =
       *(undefined8 *)(&stack0xffffffffffffffa0 + lVar6);
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar6) =
       *(undefined8 *)(&stack0xffffffffffffffa8 + lVar6);
  *(float *)(&stack0xffffffffffffffb0 + lVar6) = (float)(param_6 & 0xffffffff);
  *(float *)(&stack0xffffffffffffffb4 + lVar6) = (float)(param_7 & 0xffffffff);
  *(float *)(&stack0xffffffffffffffc0 + lVar6) = (float)(param_6 & 0xffffffff);
  *(float *)(&stack0xffffffffffffffc4 + lVar6) = (float)(param_7 & 0xffffffff);
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar6) = *(undefined8 *)(&stack0x000010b8 + lVar6);
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar6) = *(undefined8 *)(&stack0x000010c0 + lVar6);
  *(float *)(&stack0xffffffffffffffb8 + lVar6) = (float)(param_8 & 0xffffffff);
  *(float *)(&stack0xffffffffffffffbc + lVar6) = (float)*(uint *)(&stack0x000010b0 + lVar6);
  *(float *)(&stack0xffffffffffffffc8 + lVar6) = (float)(param_8 & 0xffffffff);
  *(float *)(&stack0xffffffffffffffcc + lVar6) = (float)*(uint *)(&stack0x000010b0 + lVar6);
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar6) = 0;
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar6) = *(undefined8 *)(&stack0x000010c8 + lVar6);
  *(undefined8 *)(&stack0x00000000 + lVar6) = *(undefined8 *)(&stack0x000010d0 + lVar6);
  *(undefined8 *)(&stack0x00000008 + lVar6) = 0;
  FUN_18007c448(lVar7,&stack0xffffffffffffffb0 + lVar6,6,uVar10,uVar11,0,0);
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(lVar7 + 0x1cf10) + 0x620);
  return;
}

