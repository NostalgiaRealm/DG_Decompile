/*
 * FUN_1002e2d8 at 1002e2d8
 * undefined FUN_1002e2d8(void)
 * Address ranges: 1002e2d8-1002e393
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1002e2d8(int param_1,byte param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_40 [8];
  int local_38;
  
  FUN_1005bfb0(*(int *)(param_1 + 0x208) + 0x38,auStack_40,param_2 + 1,0,0);
  iVar2 = local_38;
  if (local_38 != 0) {
    FUN_1005bfb0(*(int *)(param_1 + 0x20c) + 0x38,auStack_40,param_3 + 1,0,0);
    if (local_38 != 0) {
      FUN_10018cc0(param_1,iVar2,local_38,(uint)param_2,(uint)param_3);
      return 1;
    }
    piVar1 = (int *)(*(int *)(param_1 + 0x208) + 0x2c);
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
  }
  return 0;
}

