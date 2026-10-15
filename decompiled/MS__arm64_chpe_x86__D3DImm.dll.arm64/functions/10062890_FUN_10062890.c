/*
 * FUN_10062890 at 10062890
 * undefined FUN_10062890(void)
 * Address ranges: 10062890-1006294b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10062890(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    *(undefined1 *)(param_1 + 0x1efc) = 0;
    FUN_10061ce0(param_1);
    FUN_10062460(param_1);
    FUN_10064f20(param_1 + 4);
    FUN_10061c60(param_1);
    FUN_10081d50(param_1,0x1f00);
  }
  else {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2);
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return;
}

