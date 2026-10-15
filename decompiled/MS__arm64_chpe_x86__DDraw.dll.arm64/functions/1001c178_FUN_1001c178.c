/*
 * FUN_1001c178 at 1001c178
 * undefined FUN_1001c178(void)
 * Address ranges: 1001c178-1001c4af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001c178(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,ulonglong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong extraout_x1;
  uint uVar7;
  code *extraout_w11;
  int extraout_w15;
  int iVar8;
  uint uVar9;
  int local_50 [4];
  
  iVar5 = FUN_10001280();
  iVar4 = extraout_w15 * -0x10;
  local_50[extraout_w15 * -4] = param_7;
  local_50[extraout_w15 * -4 + 1] = param_7;
  local_50[extraout_w15 * -4 + 2] = iVar5 + 0xc000;
  uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar6,&stack0x00000030 + iVar4);
  iVar3 = *(int *)(&stack0x00000050 + iVar4);
  *(undefined8 *)(iVar5 + 0xce38) = 0;
  *(undefined8 *)(iVar5 + 0xce74) = 0;
  iVar8 = (int)extraout_x1;
  if (iVar3 == 0x3c) {
    uVar9 = 0x80004010;
    if (*(char *)(iVar8 + 0x100b3590) != '\0') {
      uVar9 = 0x80000010;
    }
    uVar9 = uVar9 | *(uint *)(&DAT_100b3620 + iVar8 * 4) & 0xf;
    FUN_100917d0(&stack0x00000068 + iVar4,0,0x1000);
    iVar3 = local_50[extraout_w15 * -4];
    if (iVar3 != 0) {
      iVar8 = local_50[extraout_w15 * -4 + 1];
      uVar7 = 0;
      do {
        *(float *)(&stack0x00000068 + uVar7 * 0x10 + iVar4) =
             (float)*(byte *)(iVar3 + 2 + uVar7 * 4);
        *(float *)(&stack0x0000006c + uVar7 * 0x10 + iVar4) =
             (float)*(byte *)(iVar3 + 1 + uVar7 * 4);
        *(float *)(&stack0x00000070 + uVar7 * 0x10 + iVar4) = (float)*(byte *)(iVar8 + uVar7 * 4);
        iVar1 = uVar7 * 4;
        iVar2 = uVar7 * 0x10;
        uVar7 = uVar7 + 1;
        *(float *)(&stack0x00000074 + iVar2 + iVar4) = (float)*(byte *)(iVar3 + 3 + iVar1);
      } while (uVar7 < 0x100);
    }
    iVar3 = local_50[extraout_w15 * -4 + 2];
    local_50[extraout_w15 * -4] = iVar3;
    FUN_100811f8(*(undefined4 *)(*(int *)(iVar3 + 0xf04) + 0x1304),*(undefined4 *)(iVar3 + 0xf08),
                 *(int *)(iVar3 + 0xf04) + 0x1430,0x1000,0x2000,&stack0x00000068 + iVar4,0,1);
    if (*(int *)(*(int *)(local_50[extraout_w15 * -4] + 0xf04) + 4) == 0x10de) {
      FUN_1007d820(*(undefined4 *)(*(int *)(local_50[extraout_w15 * -4] + 0xf04) + 0x1304),
                   *(undefined4 *)(local_50[extraout_w15 * -4] + 0xf08),0,1,0);
    }
  }
  else if (iVar3 - 0x44U < 2) {
    uVar9 = 0x80004017;
  }
  else if ((iVar3 - 0x46U < 7) && ((0x49U >> (ulonglong)(iVar3 - 0x46U & 0x1f) & 1) != 0)) {
    uVar9 = 0x80000016;
  }
  else {
    uVar9 = 0x80004010;
    if (*(char *)(iVar8 + 0x100b3590) != '\0') {
      uVar9 = 0x80000010;
    }
    uVar9 = uVar9 | *(uint *)(&DAT_100b3620 + iVar8 * 4) & 0xf;
  }
  *(undefined4 *)(&stack0xffffffe0 + iVar4) = param_3;
  *(undefined4 *)(&stack0xffffffe4 + iVar4) = param_4;
  *(undefined4 *)(&stack0xffffffe8 + iVar4) = param_6;
  *(undefined4 *)(&stack0xffffffec + iVar4) = param_3;
  *(undefined4 *)(&stack0xfffffff0 + iVar4) = param_4;
  *(undefined4 *)(&stack0xfffffff4 + iVar4) = param_5;
  *(undefined4 *)(&stack0x00000018 + iVar4) = 0;
  *(undefined8 *)(&stack0x00000024 + iVar4) = 0;
  *(float *)(&stack0xffffffc0 + iVar4) = (float)(param_8 & 0xffffffff);
  *(float *)(&stack0xffffffc4 + iVar4) = (float)*(uint *)(&stack0x000010c0 + iVar4);
  *(float *)(&stack0xffffffd0 + iVar4) = (float)(param_8 & 0xffffffff);
  *(float *)(&stack0xffffffd4 + iVar4) = (float)*(uint *)(&stack0x000010c0 + iVar4);
  *(undefined4 *)(&stack0xfffffff8 + iVar4) = *(undefined4 *)(&stack0x000010d8 + iVar4);
  *(undefined4 *)(&stack0xfffffffc + iVar4) = 0;
  *(undefined4 *)(&stack0x00000008 + iVar4) = *(undefined4 *)(&stack0x000010f0 + iVar4);
  *(undefined4 *)(&stack0x0000000c + iVar4) = 0;
  *(float *)(&stack0xffffffc8 + iVar4) = (float)*(uint *)(&stack0x000010c8 + iVar4);
  *(float *)(&stack0xffffffcc + iVar4) = (float)*(uint *)(&stack0x000010d0 + iVar4);
  *(float *)(&stack0xffffffd8 + iVar4) = (float)*(uint *)(&stack0x000010c8 + iVar4);
  *(float *)(&stack0xffffffdc + iVar4) = (float)*(uint *)(&stack0x000010d0 + iVar4);
  *(undefined4 *)(&stack0x00000020 + iVar4) = *(undefined4 *)(&stack0x000010e8 + iVar4);
  if (*(undefined4 **)(&stack0x000010e0 + iVar4) == (undefined4 *)0x0) {
    *(undefined4 *)(&stack0x00000000 + iVar4) = 0;
  }
  else {
    *(undefined4 *)(&stack0x00000000 + iVar4) = **(undefined4 **)(&stack0x000010e0 + iVar4);
  }
  *(undefined4 *)(&stack0x00000004 + iVar4) = 0;
  if (*(undefined4 **)(&stack0x000010f8 + iVar4) == (undefined4 *)0x0) {
    *(undefined4 *)(&stack0x00000010 + iVar4) = 0;
  }
  else {
    *(undefined4 *)(&stack0x00000010 + iVar4) = **(undefined4 **)(&stack0x000010f8 + iVar4);
  }
  *(undefined4 *)(&stack0x00000014 + iVar4) = 0;
  *(undefined4 *)(&stack0x0000001c + iVar4) = 0;
  FUN_100190f8(iVar5,&stack0xffffffc0 + iVar4,6,extraout_x1 & 0xffffffff,uVar9,0,0,0);
  return;
}

