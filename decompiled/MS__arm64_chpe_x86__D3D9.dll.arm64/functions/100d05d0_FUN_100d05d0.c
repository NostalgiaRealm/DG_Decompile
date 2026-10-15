/*
 * FUN_100d05d0 at 100d05d0
 * undefined FUN_100d05d0(void)
 * Address ranges: 100d05d0-100d0637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d05d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)(param_1 + 0x54);
  *(int *)(param_3 + 4) = param_2;
  *(undefined4 *)(param_3 + 0xe0) = *(undefined4 *)(*piVar1 + param_2 * 0x10);
  iVar2 = *piVar1 + param_2 * 0x10;
  if (*(int *)(iVar2 + 4) == 0) {
    uVar3 = *(undefined4 *)(iVar2 + 8);
  }
  else {
    uVar3 = 0;
  }
  *(undefined4 *)(param_3 + 0xe8) = uVar3;
  *(undefined4 *)(param_3 + 0xe4) = *(undefined4 *)(*piVar1 + param_2 * 0x10 + 4);
  return;
}

