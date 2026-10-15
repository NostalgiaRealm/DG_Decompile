/*
 * FUN_100244e8 at 100244e8
 * undefined FUN_100244e8(void)
 * Address ranges: 100244e8-1002454b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100244e8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 * param_3;
  piVar1 = (int *)(param_1 + 0xaa8);
  if (*(uint *)(param_1 + 0xaac) < uVar2) {
    FUN_100fed00(*piVar1);
    *piVar1 = 0;
    *(uint *)(param_1 + 0xaac) = uVar2;
    iVar3 = FUN_100fece0(uVar2);
    *piVar1 = iVar3;
  }
  return *piVar1 != 0;
}

