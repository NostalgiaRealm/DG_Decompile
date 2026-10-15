/*
 * FUN_10024b60 at 10024b60
 * undefined FUN_10024b60(void)
 * Address ranges: 10024b60-10024c7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10024b60(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar5 = (*extraout_w11)(iVar1,0);
  if (((iVar5 != 0) &&
      (iVar5 = FUN_10023350(iVar1,*(undefined4 *)(iVar5 + 0xc),iVar2,iVar3),
      iVar5 != -0x7fffbffb && (iVar5 + 0x80000000U & 0x80000000) == 0)) &&
     (uVar6 = FUN_10022620(iVar1), (uVar6 & 1) != 0)) {
    (*pcVar4)();
    (*extraout_w11_00)(iVar1,iVar2,iVar3);
    uVar6 = FUN_10078b38(*(undefined4 *)(*(int *)(iVar1 + 0x40) + 0x172c0),
                         *(undefined4 *)(iVar1 + 0x90));
    if ((uVar6 & 1) == 0) {
      uVar7 = FUN_1007dd50(*(undefined4 *)(*(int *)(iVar1 + 0x44) + 0x1304));
    }
    else {
      uVar7 = 0;
    }
    *(undefined8 *)(iVar1 + 0xe8) = uVar7;
  }
  return;
}

