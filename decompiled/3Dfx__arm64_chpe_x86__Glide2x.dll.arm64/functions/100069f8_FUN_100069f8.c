/*
 * FUN_100069f8 at 100069f8
 * undefined FUN_100069f8(void)
 * Address ranges: 100069f8-10006a9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100069f8(int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int local_30 [4];
  
  piVar1 = (int *)(param_1 + 0x330);
  iVar4 = (*(code *)PTR_FUN_1009d19c)(*piVar1);
  bVar2 = iVar4 == 1;
  if (iVar4 == 1) {
    local_30[0] = 0;
    (*(code *)PTR_FUN_1009d190)(*piVar1,local_30);
    bVar2 = local_30[0] == *(int *)(param_1 + 0x334);
  }
  if ((*piVar1 == 0) || (bVar2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_10006958(param_1,1);
  }
  return uVar3;
}

