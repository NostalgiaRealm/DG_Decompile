/*
 * FUN_100aa5b0 at 100aa5b0
 * undefined FUN_100aa5b0(void)
 * Address ranges: 100aa5b0-100aa8af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aa5b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,ulonglong param_8)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  int extraout_w15;
  uint uVar11;
  int local_50 [2];
  undefined8 uStack_48;
  
  iVar8 = FUN_100013c0();
  iVar6 = extraout_w15 * -0x10;
  local_50[extraout_w15 * -4] = param_5;
  *(undefined4 *)(&uStack_48 + extraout_w15 * -2) = param_5;
  *(undefined4 *)(&stack0xffffffc0 + iVar6) = param_6;
  *(undefined4 *)(&stack0xffffffc4 + iVar6) = param_7;
  FUN_1010f6c0(*(int *)(iVar8 + 0x1cf00),0,iVar8);
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar9,&stack0x00000018 + iVar6);
  iVar4 = *(int *)(&stack0x00000028 + iVar6);
  *(undefined8 *)(iVar8 + 0x1ce38) = 0;
  *(undefined8 *)(iVar8 + 0x1ce74) = 0;
  if (iVar4 == 0x3c) {
    uVar11 = 0x80004010;
    if (cRam10162cc8 != '\0') {
      uVar11 = 0x80000010;
    }
    uVar11 = uVar11 | _DAT_10162d00 & 0xf;
    FUN_101325d0(&stack0x00000048 + iVar6,0,0x1000);
    iVar4 = local_50[extraout_w15 * -4];
    if (iVar4 != 0) {
      iVar5 = *(int *)(&uStack_48 + extraout_w15 * -2);
      uVar10 = 0;
      do {
        *(float *)(&stack0x00000048 + uVar10 * 0x10 + iVar6) =
             (float)*(byte *)(iVar4 + 2 + uVar10 * 4);
        *(float *)(&stack0x0000004c + uVar10 * 0x10 + iVar6) =
             (float)*(byte *)(iVar4 + 1 + uVar10 * 4);
        *(float *)(&stack0x00000050 + uVar10 * 0x10 + iVar6) = (float)*(byte *)(iVar5 + uVar10 * 4);
        iVar1 = uVar10 * 4;
        iVar2 = uVar10 * 0x10;
        uVar10 = uVar10 + 1;
        *(float *)(&stack0x00000054 + iVar2 + iVar6) = (float)*(byte *)(iVar4 + 3 + iVar1);
      } while (uVar10 < 0x100);
    }
    uVar9 = (*pcVar7)();
    (*extraout_w11_00)(uVar9,*extraout_w8,0,0,&stack0x00000048 + iVar6,0x400,0x400);
  }
  else if (iVar4 - 0x44U < 2) {
    uVar11 = 0x80004017;
  }
  else if ((iVar4 - 0x46U < 7) && ((0x49U >> (ulonglong)(iVar4 - 0x46U & 0x1f) & 1) != 0)) {
    uVar11 = 0x80000016;
  }
  else {
    uVar11 = 0x80004010;
    if (cRam10162cc8 != '\0') {
      uVar11 = 0x80000010;
    }
    uVar11 = uVar11 | _DAT_10162d00 & 0xf;
  }
  uVar10 = *(uint *)(&stack0xffffffc0 + iVar6);
  local_50[extraout_w15 * -4] = param_3;
  local_50[extraout_w15 * -4 + 1] = param_4;
  *(undefined4 *)(&uStack_48 + extraout_w15 * -2) = param_3;
  *(int *)((int)&uStack_48 + iVar6 + 4) = param_4;
  *(undefined8 *)(&stack0x0000000c + iVar6) = 0;
  *(undefined4 *)(&stack0x00000014 + iVar6) = 0;
  uVar3 = *(undefined8 *)(local_50 + extraout_w15 * -4);
  *(undefined8 *)(&stack0xffffffe8 + iVar6) = (&uStack_48)[extraout_w15 * -2];
  *(undefined8 *)(&stack0xfffffff0 + iVar6) = uVar3;
  *(float *)(&stack0xffffffc8 + iVar6) = (float)uVar10;
  *(float *)(&stack0xffffffcc + iVar6) = (float)*(uint *)(&stack0xffffffc4 + iVar6);
  *(float *)(&stack0xffffffd8 + iVar6) = (float)uVar10;
  *(float *)(&stack0xffffffdc + iVar6) = (float)*(uint *)(&stack0xffffffc4 + iVar6);
  *(undefined4 *)(&stack0xfffffff8 + iVar6) = *(undefined4 *)(&stack0x000010a8 + iVar6);
  *(undefined4 *)(&stack0xfffffffc + iVar6) = *(undefined4 *)(&stack0x000010b0 + iVar6);
  *(float *)(&stack0xffffffd0 + iVar6) = (float)(param_8 & 0xffffffff);
  *(float *)(&stack0xffffffd4 + iVar6) = (float)*(uint *)(&stack0x000010a0 + iVar6);
  *(float *)(&stack0xffffffe0 + iVar6) = (float)(param_8 & 0xffffffff);
  *(float *)(&stack0xffffffe4 + iVar6) = (float)*(uint *)(&stack0x000010a0 + iVar6);
  *(undefined4 *)(&stack0x00000000 + iVar6) = 0;
  *(undefined4 *)(&stack0x00000004 + iVar6) = *(undefined4 *)(&stack0x000010b8 + iVar6);
  *(undefined4 *)(&stack0x00000008 + iVar6) = *(undefined4 *)(&stack0x000010c0 + iVar6);
  FUN_100a6218(iVar8,&stack0xffffffc8 + iVar6,6,0,uVar11,0,0);
  (*(code *)PTR_FUN_1016c0c0)(*(int *)(iVar8 + 0x1cf00) + 0x4a0);
  return;
}

