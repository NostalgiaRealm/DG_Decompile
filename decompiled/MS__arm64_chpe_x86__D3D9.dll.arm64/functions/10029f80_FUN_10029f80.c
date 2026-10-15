/*
 * FUN_10029f80 at 10029f80
 * undefined FUN_10029f80(void)
 * Address ranges: 10029f80-10029fe3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10029f80(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 * param_3;
  piVar1 = (int *)(param_1 + 0xd6c);
  if (*(uint *)(param_1 + 0xd70) < uVar2) {
    FUN_101322d0(*piVar1);
    *piVar1 = 0;
    *(uint *)(param_1 + 0xd70) = uVar2;
    iVar3 = FUN_101322b0(uVar2);
    *piVar1 = iVar3;
  }
  return *piVar1 != 0;
}

