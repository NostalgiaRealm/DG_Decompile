/*
 * FUN_10016240 at 10016240
 * undefined FUN_10016240(void)
 * Address ranges: 10016240-1001628b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10016240(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x94);
  if (iVar2 == *(int *)(param_1 + 0x28)) {
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
  }
  else {
    uVar3 = 0;
  }
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = param_1 + 4;
  }
  FUN_10008b70(*(undefined4 *)(param_1 + 0x1c),iVar2,uVar3,iVar1);
  return;
}

