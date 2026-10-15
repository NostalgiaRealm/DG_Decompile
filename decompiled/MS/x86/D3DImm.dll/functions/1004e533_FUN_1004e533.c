/*
 * FUN_1004e533 at 1004e533
 * undefined4 __stdcall FUN_1004e533(int param_1, int * param_2)
 * Address ranges: 1004e533-1004e55d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004e533(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80070057;
  if ((param_2 != (int *)0x0) && (*param_2 == 0x10)) {
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = 0;
    *param_2 = *(int *)(iVar1 + 0x6c);
    param_2[1] = *(int *)(iVar1 + 0x70);
    param_2[2] = *(int *)(iVar1 + 0x74);
    param_2[3] = *(int *)(iVar1 + 0x78);
  }
  return uVar2;
}

