/*
 * FUN_10049410 at 10049410
 * undefined FUN_10049410(void)
 * Address ranges: 10049410-100494ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10049410(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)(param_1 + 0x4c);
  iVar5 = -1;
  piVar2 = (int *)(param_1 + 0x44);
  if (*(uint *)(param_1 + 0x48) < param_3 + *piVar1 + 1U) {
    uVar3 = (param_3 + *piVar1 + 1) * 2;
    iVar4 = FUN_1007dd60(uVar3);
    if (iVar4 != 0) {
      FUN_1007e4a0(iVar4,*piVar2,*piVar1);
      FUN_1007dd80(*piVar2);
    }
    *piVar2 = iVar4;
    *(uint *)(param_1 + 0x48) = uVar3;
  }
  if (*piVar2 != 0) {
    FUN_1007e4a0(*piVar2 + *piVar1,param_2,param_3);
    iVar5 = *piVar1;
    *piVar1 = iVar5 + param_3;
    *(undefined1 *)(*piVar2 + iVar5 + param_3) = 0;
    *piVar1 = *piVar1 + 1;
  }
  return iVar5;
}

