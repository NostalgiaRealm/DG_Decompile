/*
 * FUN_100068a0 at 100068a0
 * undefined FUN_100068a0(void)
 * Address ranges: 100068a0-1000694b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100068a0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar4 = (*extraout_w11)(uVar3);
  iVar2 = DAT_100be0c0;
  if (iVar4 != 0) {
    iVar1 = DAT_100be0c0 + 0x318;
    (*(code *)PTR_FUN_100ba0a0)(iVar1);
    if (*(char *)(iVar2 + 0x759) != '\0') {
      (*(code *)PTR_FUN_100ba29c)(iVar4,0x401,0x44454745,param_2);
    }
    (*(code *)PTR_FUN_100ba0f0)(iVar1);
  }
  return;
}

