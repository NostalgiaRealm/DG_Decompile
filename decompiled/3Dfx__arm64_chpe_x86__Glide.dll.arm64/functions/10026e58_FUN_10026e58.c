/*
 * FUN_10026e58 at 10026e58
 * undefined FUN_10026e58(void)
 * Address ranges: 10026e58-10026f97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10026e58(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined8 uVar8;
  
  piVar1 = (int *)(param_1 + 0xc);
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  iVar6 = FUN_10007848(*puVar2,*(undefined4 *)(*piVar1 + 0x94));
  if (iVar6 != 0) {
    uVar7 = FUN_10007410(iVar6,0,FUN_10007a30);
    *(undefined4 *)(iVar6 + 0x1c) = uVar7;
  }
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar7);
  iVar6 = FUN_10007848(*puVar2,*(undefined4 *)(*piVar1 + 0x94));
  if (iVar6 != 0) {
    FUN_10007410(iVar6,0,*(undefined4 *)(iVar6 + 0x1c));
    *(undefined4 *)(iVar6 + 0x1c) = 0;
  }
  uVar7 = (*pcVar3)();
  cVar4 = (*extraout_w11_00)(uVar7);
  if (((cVar4 == '\0') ||
      (iVar6 = FUN_10007848(*puVar2,*(undefined4 *)(*piVar1 + 0x94)), iVar6 == 0)) ||
     (*(char *)(iVar6 + 0x2d) == '\0')) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  uVar5 = FUN_10026f98(param_1);
  FUN_10026bb0(param_1,uVar8,uVar5);
  *(undefined1 *)(param_1 + 0x8c) = 0;
  return;
}

