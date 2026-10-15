/*
 * FUN_10007700 at 10007700
 * undefined FUN_10007700(void)
 * Address ranges: 10007700-10007763
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10007700(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 * param_3;
  piVar1 = (int *)(param_1 + 0x9b8);
  if (*(uint *)(param_1 + 0x9bc) < uVar2) {
    FUN_10081dc0(*piVar1);
    *piVar1 = 0;
    *(uint *)(param_1 + 0x9bc) = uVar2;
    iVar3 = FUN_10081da0(uVar2);
    *piVar1 = iVar3;
  }
  return *piVar1 != 0;
}

