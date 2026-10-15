/*
 * FUN_10005fe8 at 10005fe8
 * undefined FUN_10005fe8(void)
 * Address ranges: 10005fe8-1000615f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10005fe8(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar6 = 0;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(param_1);
  (*pcVar1)();
  iVar4 = (*extraout_w11_00)(param_1);
  if ((iVar3 != 0) && ((&DAT_100be150)[iVar4 * 0x8a] != 0)) {
    uVar5 = (*pcVar1)();
    iVar3 = (*extraout_w11_01)(uVar5,iVar3,0,0,4,2,2,0,0);
    if (iVar3 == 0) {
      uVar6 = 1;
    }
    else {
      (*pcVar1)();
      cVar2 = (*extraout_w11_02)(iVar3);
      if (cVar2 != '\0') {
        (*pcVar1)();
        cVar2 = (*extraout_w11_03)(iVar3);
        uVar6 = 1;
        if (cVar2 != '\0') {
          uVar6 = 2;
        }
      }
      (*pcVar1)();
      (*extraout_w11_04)(iVar3);
    }
  }
  return uVar6;
}

