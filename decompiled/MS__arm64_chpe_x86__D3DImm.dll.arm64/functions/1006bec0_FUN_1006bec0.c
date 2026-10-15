/*
 * FUN_1006bec0 at 1006bec0
 * undefined FUN_1006bec0(void)
 * Address ranges: 1006bec0-1006bf47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1006bec0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,int param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_7 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_7 + 4);
  }
  if (param_5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_5 + 4);
  }
  uVar1 = 0x80070057;
  if (iVar3 != 0) {
    uVar1 = FUN_10057a90(iVar3,*(undefined4 *)(param_1 + 4),uVar2,param_2,param_3,param_4,param_6,
                         param_8,1);
  }
  return uVar1;
}

