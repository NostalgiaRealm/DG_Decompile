/*
 * FUN_100fcb80 at 100fcb80
 * undefined FUN_100fcb80(void)
 * Address ranges: 100fcb80-100fcc6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100fcb80(int param_1,undefined4 param_2,int param_3)

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
    iVar4 = FUN_101322b0(uVar3);
    if (iVar4 != 0) {
      FUN_101325a0(iVar4,*piVar2,*piVar1);
      FUN_101322d0(*piVar2);
    }
    *piVar2 = iVar4;
    *(uint *)(param_1 + 0x48) = uVar3;
  }
  if (*piVar2 != 0) {
    FUN_101325a0(*piVar2 + *piVar1,param_2,param_3);
    iVar5 = *piVar1;
    *piVar1 = iVar5 + param_3;
    *(undefined1 *)(*piVar2 + iVar5 + param_3) = 0;
    *piVar1 = *piVar1 + 1;
  }
  return iVar5;
}

