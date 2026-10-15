/*
 * FUN_10096bb0 at 10096bb0
 * undefined FUN_10096bb0(void)
 * Address ranges: 10096bb0-10096eef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096bb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,ulonglong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  code *extraout_w11;
  int extraout_w15;
  uint uVar11;
  int local_50 [2];
  float afStack_48 [2];
  
  iVar8 = FUN_100013c0();
  iVar7 = extraout_w15 * -0x10;
  local_50[extraout_w15 * -4] = param_7;
  local_50[extraout_w15 * -4 + 1] = param_7;
  uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar9,&stack0x00000028 + iVar7);
  iVar3 = *(int *)(&stack0x00000048 + iVar7);
  *(undefined8 *)(iVar8 + 0x1ce38) = 0;
  *(undefined8 *)(iVar8 + 0x1ce74) = 0;
  if (iVar3 == 0x3c) {
    uVar11 = 0x80004010;
    if (cRam1012cd80 != '\0') {
      uVar11 = 0x80000010;
    }
    uVar11 = uVar11 | _DAT_1012ce10 & 0xf;
    FUN_100ff690(&stack0x00000060 + iVar7,0,0x1000);
    iVar3 = local_50[extraout_w15 * -4];
    if (iVar3 != 0) {
      iVar4 = local_50[extraout_w15 * -4 + 1];
      uVar10 = 0;
      do {
        *(float *)(&stack0x00000060 + uVar10 * 0x10 + iVar7) =
             (float)*(byte *)(iVar3 + 2 + uVar10 * 4);
        *(float *)(&stack0x00000064 + uVar10 * 0x10 + iVar7) =
             (float)*(byte *)(iVar3 + 1 + uVar10 * 4);
        *(float *)(&stack0x00000068 + uVar10 * 0x10 + iVar7) = (float)*(byte *)(iVar4 + uVar10 * 4);
        iVar1 = uVar10 * 4;
        iVar2 = uVar10 * 0x10;
        uVar10 = uVar10 + 1;
        *(float *)(&stack0x0000006c + iVar2 + iVar7) = (float)*(byte *)(iVar3 + 3 + iVar1);
      } while (uVar10 < 0x100);
    }
    iVar3 = *(int *)(iVar8 + 0x1cf04);
    local_50[extraout_w15 * -4 + 1] = iVar8 + 0x1cf04;
    uVar9 = *(undefined4 *)(iVar8 + 0x1cf08);
    local_50[extraout_w15 * -4] = iVar8 + 0x1cf08;
    FUN_100e50c8(*(undefined4 *)(iVar3 + 0x1304),uVar9,iVar3 + 0x1430,0x1000,0x2000,
                 &stack0x00000060 + iVar7,0,1);
    if (*(int *)(*(int *)local_50[extraout_w15 * -4 + 1] + 4) == 0x10de) {
      FUN_100e1588(*(undefined4 *)(*(int *)local_50[extraout_w15 * -4 + 1] + 0x1304),
                   *(undefined4 *)local_50[extraout_w15 * -4],0,1,0);
    }
  }
  else if (iVar3 - 0x44U < 2) {
    uVar11 = 0x80004017;
  }
  else if ((iVar3 - 0x46U < 7) && ((0x49U >> (ulonglong)(iVar3 - 0x46U & 0x1f) & 1) != 0)) {
    uVar11 = 0x80000016;
  }
  else {
    uVar11 = 0x80004010;
    if (cRam1012cd80 != '\0') {
      uVar11 = 0x80000010;
    }
    uVar11 = uVar11 | _DAT_1012ce10 & 0xf;
  }
  uVar10 = *(uint *)(&stack0x000010b0 + iVar7);
  *(undefined4 *)(&stack0xffffffd8 + iVar7) = param_3;
  *(undefined4 *)(&stack0xffffffdc + iVar7) = param_4;
  *(undefined4 *)(&stack0xffffffe0 + iVar7) = param_6;
  *(undefined4 *)(&stack0xffffffe4 + iVar7) = param_3;
  *(undefined4 *)(&stack0xffffffe8 + iVar7) = param_4;
  *(undefined4 *)(&stack0xffffffec + iVar7) = param_5;
  *(undefined4 *)(&stack0x00000010 + iVar7) = 0;
  uVar5 = *(uint *)(&stack0x000010b8 + iVar7);
  *(undefined8 *)(&stack0x0000001c + iVar7) = 0;
  uVar6 = *(uint *)(&stack0x000010c0 + iVar7);
  uVar9 = *(undefined4 *)(&stack0x000010c8 + iVar7);
  afStack_48[extraout_w15 * -4] = (float)(param_8 & 0xffffffff);
  afStack_48[extraout_w15 * -4 + 1] = (float)uVar10;
  *(float *)(&stack0xffffffc8 + iVar7) = (float)(param_8 & 0xffffffff);
  *(float *)(&stack0xffffffcc + iVar7) = (float)uVar10;
  *(undefined4 *)(&stack0xfffffff0 + iVar7) = uVar9;
  *(undefined4 *)(&stack0xfffffff4 + iVar7) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar7) = *(undefined4 *)(&stack0x000010e0 + iVar7);
  *(undefined4 *)(&stack0x00000004 + iVar7) = 0;
  *(float *)(&stack0xffffffc0 + iVar7) = (float)uVar5;
  *(float *)(&stack0xffffffc4 + iVar7) = (float)uVar6;
  *(float *)(&stack0xffffffd0 + iVar7) = (float)uVar5;
  *(float *)(&stack0xffffffd4 + iVar7) = (float)uVar6;
  *(undefined4 *)(&stack0x00000018 + iVar7) = *(undefined4 *)(&stack0x000010d8 + iVar7);
  if (*(undefined4 **)(&stack0x000010d0 + iVar7) == (undefined4 *)0x0) {
    *(undefined4 *)(&stack0xfffffff8 + iVar7) = 0;
  }
  else {
    *(undefined4 *)(&stack0xfffffff8 + iVar7) = **(undefined4 **)(&stack0x000010d0 + iVar7);
  }
  *(undefined4 *)(&stack0xfffffffc + iVar7) = 0;
  if (*(undefined4 **)(&stack0x000010e8 + iVar7) == (undefined4 *)0x0) {
    *(undefined4 *)(&stack0x00000008 + iVar7) = 0;
  }
  else {
    *(undefined4 *)(&stack0x00000008 + iVar7) = **(undefined4 **)(&stack0x000010e8 + iVar7);
  }
  *(undefined4 *)(&stack0x0000000c + iVar7) = 0;
  *(undefined4 *)(&stack0x00000014 + iVar7) = 0;
  FUN_100938b8(iVar8,afStack_48 + extraout_w15 * -4,6,0,uVar11,0,0,0);
  return;
}

