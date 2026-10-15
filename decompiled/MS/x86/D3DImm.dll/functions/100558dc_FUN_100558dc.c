/*
 * FUN_100558dc at 100558dc
 * int __stdcall FUN_100558dc(int * param_1, undefined4 param_2, int param_3, int param_4)
 * Address ranges: 100558dc-10055961
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100558dc(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = param_1[3];
  uVar4 = (**(code **)(**(int **)(*param_1 + 0xc) + 0x20))(*(int **)(*param_1 + 0xc));
  uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
  if ((uVar2 <= (uint)param_1[5]) &&
     ((uVar2 < (uint)param_1[5] || ((uint)uVar4 < (uint)param_1[4])))) {
    iVar1 = param_1[1];
    if (param_3 == *param_1) {
      if (param_4 == iVar1) {
        iVar3 = param_1[3];
      }
      else if (iVar1 != -1) {
        FUN_10052215((void *)(iVar1 + 4),'\0');
      }
    }
    else {
      if (iVar1 != -1) {
        FUN_10052215((void *)(iVar1 + 4),'\0');
      }
      if (param_4 != -1) {
        FUN_10052215((void *)(param_4 + 4),'\0');
      }
      (**(code **)(**(int **)(param_3 + 8) + 0x3c))
                (*(int **)(param_3 + 8),*(undefined4 *)(*param_1 + 0xc),param_1[4],param_1[5]);
    }
  }
  return iVar3;
}

