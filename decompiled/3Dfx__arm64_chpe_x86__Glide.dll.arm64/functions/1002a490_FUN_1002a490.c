/*
 * FUN_1002a490 at 1002a490
 * undefined FUN_1002a490(void)
 * Address ranges: 1002a490-1002a4ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1002a490(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  code *extraout_w11;
  
  if (*(int *)*param_1 == -0x7fffffff) {
    piVar4 = (int *)*param_1 + 6;
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar1 = (*extraout_w11)(uVar2,*piVar4);
    iVar3 = -(uint)(cVar1 != '\0');
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

