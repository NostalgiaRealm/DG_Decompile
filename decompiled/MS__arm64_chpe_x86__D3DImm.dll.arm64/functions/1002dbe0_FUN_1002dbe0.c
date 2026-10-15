/*
 * FUN_1002dbe0 at 1002dbe0
 * undefined FUN_1002dbe0(void)
 * Address ranges: 1002dbe0-1002dc4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002dbe0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  iVar1 = *param_1;
  uStack_18 = *(undefined8 *)(param_1 + 3);
  local_20 = *(undefined8 *)(param_1 + 1);
  local_10 = *(undefined8 *)(param_1 + 5);
  iVar2 = *(int *)(iVar1 + 0x1f6c);
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar1 + 0x1f7c);
  }
  FUN_100330e8(iVar1,iVar1 + 0x80,iVar1 + 0x1d30,&local_20,iVar2);
  return;
}

