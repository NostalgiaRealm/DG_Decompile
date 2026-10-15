/*
 * FUN_100fc100 at 100fc100
 * undefined FUN_100fc100(void)
 * Address ranges: 100fc100-100fc1b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100fc100(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x308);
  *(int *)(param_1 + 0x308) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x758) = 0;
    DAT_1013d288 = (*(code *)PTR_FUN_1013404c)(0,0,0,0);
    if (DAT_1013d288 != 0) {
      (*(code *)PTR_FUN_101340b8)(param_1 + 0x318);
      uVar2 = (*(code *)PTR_FUN_10134060)(0,0,FUN_100fbf10,param_1,0,param_1 + 0x30c);
      *(undefined4 *)(param_1 + 0x310) = uVar2;
      (*(code *)PTR_FUN_10134138)(DAT_1013d288,0xffffffff);
    }
  }
  return;
}

