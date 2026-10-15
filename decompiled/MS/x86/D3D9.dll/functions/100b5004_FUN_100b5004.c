/*
 * FUN_100b5004 at 100b5004
 * undefined __thiscall FUN_100b5004(void * this, int param_1, int param_2, undefined4 param_3, int param_4)
 * Address ranges: 100b5004-100b5088
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100b5004(void *this,int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = 0;
  uVar2 = 0;
  iVar5 = param_2;
  do {
    piVar4 = (int *)((int)this + uVar2 * 4 + param_2 * 4 + param_1 * 0x1510 + 0x5d4);
    iVar1 = *(int *)(param_4 + uVar2 * 4);
    if (*piVar4 != iVar1) {
      *piVar4 = iVar1;
      if (iVar3 == 0) {
        iVar3 = 1;
        iVar5 = uVar2 + param_2;
      }
      else {
        iVar3 = param_2 + 1 + (uVar2 - iVar5);
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  if (iVar3 != 0) {
    piVar4 = *(int **)((int)this + param_1 * 0x1510 + 0x514);
    (**(code **)(*piVar4 + 100))
              (piVar4,iVar5,iVar3,(int)this + iVar5 * 4 + param_1 * 0x1510 + 0x5d4);
  }
  return;
}

