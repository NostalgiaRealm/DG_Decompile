/*
 * FUN_10030be8 at 10030be8
 * undefined FUN_10030be8(void)
 * Address ranges: 10030be8-10030d93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10030be8(void)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  int extraout_w15;
  uint uVar8;
  int local_50 [4];
  
  iVar4 = FUN_10001280();
  iVar2 = extraout_w15 * -0x10;
  uVar8 = 0;
  uVar1 = **(undefined4 **)(*(int *)(iVar4 + 0x3018) + 0x3308);
  *(undefined8 *)(iVar4 + 0x3024) = 0;
  *(undefined8 *)(iVar4 + 0x301c) = 0;
  *(undefined8 *)(iVar4 + 0x3034) = 0;
  *(undefined8 *)(iVar4 + 0x302c) = 0;
  *(undefined8 *)(iVar4 + 0x3044) = 0;
  *(undefined8 *)(iVar4 + 0x303c) = 0;
  *(undefined8 *)(iVar4 + 0x304c) = 0;
  *(undefined4 *)(iVar4 + 0x3054) = 0;
  *(undefined8 *)(iVar4 + 0x3060) = 0;
  *(undefined8 *)(iVar4 + 0x3058) = 0;
  *(undefined8 *)(iVar4 + 0x3070) = 0;
  *(undefined8 *)(iVar4 + 0x3068) = 0;
  *(undefined8 *)(iVar4 + 0x3080) = 0;
  *(undefined8 *)(iVar4 + 0x3078) = 0;
  *(undefined8 *)(iVar4 + 0x3088) = 0;
  *(undefined4 *)(iVar4 + 0x3090) = 0;
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_50[extraout_w15 * -4] = (int)__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  while( true ) {
    *(undefined8 *)(&stack0xffffffd8 + iVar2) = 0x1000000040;
    uVar7 = 1;
    if (uVar8 - 2 < 3) {
      uVar7 = 2;
    }
    *(undefined4 *)(&stack0xffffffc8 + iVar2) = 0x1000;
    *(undefined4 *)(&stack0xffffffcc + iVar2) = uVar7;
    uVar7 = 0x10000;
    if (2 < uVar8 - 2) {
      uVar7 = 0;
    }
    *(undefined4 *)(&stack0xffffffd0 + iVar2) = 8;
    *(undefined4 *)(&stack0xffffffd4 + iVar2) = uVar7;
    FUN_10036c68(&stack0xfffffff8 + iVar2,uVar8);
    local_50[extraout_w15 * 0xfffffffcU + 2] = (int)(&stack0xfffffff8 + iVar2);
    *(undefined8 *)(local_50 + extraout_w15 * -4 + 3) = 0;
    (*pcVar3)();
    iVar5 = (*extraout_w11)(uVar1,&stack0xffffffc8 + iVar2,local_50 + extraout_w15 * 0xfffffffcU + 2
                           );
    if (iVar5 < 0) break;
    *(undefined8 *)(&stack0xffffffe0 + iVar2) = 0x100000000;
    *(undefined8 *)(&stack0xffffffe8 + iVar2) = 0x10000000000;
    *(undefined8 *)(&stack0xfffffff0 + iVar2) = 0;
    puVar6 = (undefined4 *)(iVar4 + uVar8 * 4 + 0x301c);
    (*(code *)local_50[extraout_w15 * -4])();
    iVar5 = (*extraout_w11_00)(uVar1,*puVar6,&stack0xffffffe0 + iVar2);
    if (iVar5 < 0) break;
    uVar8 = uVar8 + 1;
    if (0xe < uVar8) {
      return 1;
    }
  }
  FUN_100301b8(iVar4);
  return 0;
}

