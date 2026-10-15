/*
 * FUN_1003e958 at 1003e958
 * undefined FUN_1003e958(void)
 * Address ranges: 1003e958-1003ea13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1003e958(int param_1,byte param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_40 [8];
  int local_38;
  
  FUN_10058320(*(int *)(param_1 + 0x54) + 0x38,auStack_40,param_2 + 1,0,0);
  iVar2 = local_38;
  if (local_38 != 0) {
    FUN_10058320(*(int *)(param_1 + 0x58) + 0x38,auStack_40,param_3 + 1,0,0);
    if (local_38 != 0) {
      FUN_10048238(param_1,iVar2,local_38,(uint)param_2,(uint)param_3);
      return 1;
    }
    piVar1 = (int *)(*(int *)(param_1 + 0x54) + 0x2c);
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
  }
  return 0;
}

