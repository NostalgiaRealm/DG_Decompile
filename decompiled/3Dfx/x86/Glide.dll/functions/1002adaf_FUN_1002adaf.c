/*
 * FUN_1002adaf at 1002adaf
 * bool __thiscall FUN_1002adaf(void * this, int param_1, char param_2, byte param_3)
 * Address ranges: 1002adaf-1002ae44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1002adaf(void *this,int param_1,char param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_14 [16];
  
  iVar3 = param_1 * 0x104 + 0x13c + (int)this;
  if (param_2 != '\0') {
    FUN_100296b1(this,iVar3,0,0,*(int *)(iVar3 + 0x20),*(int *)(iVar3 + 0x24));
    FUN_10029ee5(iVar3,0,0,0,0,param_3);
  }
  piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 4);
  uVar5 = 0;
  uVar4 = 3;
  iVar2 = (**(code **)(*piVar1 + 0x38))
                    (piVar1,*(undefined4 *)(iVar3 + 0xfc + (uint)param_3 * 4),0,3,0,local_14);
  if (-1 < iVar2) {
    *(undefined4 *)(iVar3 + 0x6c) = uVar4;
    *(undefined4 *)(iVar3 + 0x70) = uVar5;
  }
  return -1 < iVar2;
}

