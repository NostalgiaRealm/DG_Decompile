/*
 * FUN_1001555e at 1001555e
 * uint __thiscall FUN_1001555e(void * this, int param_1, undefined4 param_2, uint param_3)
 * Address ranges: 1001555e-100155de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1001555e(void *this,int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = param_3;
  iVar4 = (int)this + param_1 * 0x120 + 0x140;
  if ((char)param_2 == '\0') {
    FUN_10014b03(this,iVar4);
  }
  else {
    FUN_10014b9b(this,param_1,0,0,*(int *)(iVar4 + 0x20),*(int **)(iVar4 + 0x24),0,0,0,0,param_3);
  }
  iVar5 = (uVar3 & 0xff) * 0x20;
  piVar1 = *(int **)(iVar5 + 0xe4 + iVar4);
  param_2 = 0;
  uVar3 = (**(code **)(*piVar1 + 0x20))(piVar1,0,0,&param_2);
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    *(undefined4 *)(iVar4 + 0x6c) = param_2;
    uVar2 = *(undefined4 *)(iVar5 + 0xf8 + iVar4);
    *(undefined4 *)(iVar4 + 0x70) = uVar2;
    uVar3 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar3;
}

