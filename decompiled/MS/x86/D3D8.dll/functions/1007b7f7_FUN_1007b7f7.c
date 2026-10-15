/*
 * FUN_1007b7f7 at 1007b7f7
 * undefined __stdcall FUN_1007b7f7(int param_1, int param_2)
 * Address ranges: 1007b7f7-1007b863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007b7f7(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = param_2;
  iVar2 = param_1;
  if (param_2 != 0) {
    FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
    iVar1 = **(int **)(iVar2 + -0x4e10);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar1 + 0xa8);
    }
    (**(code **)(**(int **)(iVar2 + -0x4dbc) + 0x4c))
              (uVar4,iVar3,iVar3 + 0x200,iVar3 + 0x400,0x437f0000);
    FUN_10003881((char *)((int)&param_1 + 3));
  }
  return;
}

