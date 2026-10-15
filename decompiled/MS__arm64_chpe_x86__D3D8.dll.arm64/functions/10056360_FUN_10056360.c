/*
 * FUN_10056360 at 10056360
 * undefined FUN_10056360(void)
 * Address ranges: 10056360-100563bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10056360(int *param_1)

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
  iVar2 = *(int *)(iVar1 + 0xdbe4);
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar1 + 0xdbf4);
  }
  FUN_1005fd78(iVar1,iVar1 + 0x90,iVar1 + 0xd970,&local_20,iVar2);
  return;
}

