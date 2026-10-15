/*
 * FUN_10066810 at 10066810
 * undefined FUN_10066810(void)
 * Address ranges: 10066810-1006686f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10066810(int *param_1)

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
  iVar2 = *(int *)(iVar1 + 0xfa80);
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar1 + 0xfa90);
  }
  FUN_10075858(iVar1,iVar1 + 0x90,iVar1 + 0xf660,&local_20,iVar2);
  return;
}

