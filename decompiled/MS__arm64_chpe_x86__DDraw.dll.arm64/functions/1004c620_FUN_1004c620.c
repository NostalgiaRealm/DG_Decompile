/*
 * FUN_1004c620 at 1004c620
 * undefined FUN_1004c620(void)
 * Address ranges: 1004c620-1004c7df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004c620(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  int iStack_4c;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((*(uint *)(param_1 + 0x154) >> 0xb & 1) != 0) {
    if ((*(uint *)(param_1 + 0x19c) >> 2 & 1) == 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x160);
    }
    else {
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
    }
    iVar3 = *(int *)(param_1 + 4);
    uVar4 = *(undefined4 *)(param_1 + 0x174);
    puVar1 = (undefined4 *)(iVar3 + 0x70);
    puVar2 = (undefined4 *)(iVar3 + 0x6c);
    if (*(char *)(iVar3 + 0x48) == '\0') {
      local_58 = 0;
      local_50 = FUN_10007228(iVar3);
      iStack_4c = *(ushort *)(iVar3 + 0xe) - 1;
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar6,*puVar2,*puVar1,uVar4,uVar7,&local_58);
    }
    else {
      local_60 = 0;
      uStack_5c = 0;
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar8 = (*extraout_w11_00)(uVar6,*puVar2,*puVar1,0,1,&uStack_5c,&local_60);
      if ((int)uVar8 == 0) {
        FUN_10007770(uVar8,uVar4,uStack_5c,iVar3 + 0x38,iVar3 + 0x40,*(undefined4 *)(iVar3 + 100),
                     *(undefined4 *)(iVar3 + 0x68),uVar7,local_60);
        uVar7 = (*pcVar5)();
        (*extraout_w11_01)(uVar7,*puVar2,*puVar1);
      }
    }
  }
  FUN_10008940(*(undefined4 *)(param_1 + 4));
  return;
}

