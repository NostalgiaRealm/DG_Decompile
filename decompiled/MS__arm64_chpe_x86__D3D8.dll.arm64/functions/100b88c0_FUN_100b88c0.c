/*
 * FUN_100b88c0 at 100b88c0
 * undefined FUN_100b88c0(void)
 * Address ranges: 100b88c0-100b8917
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b88c0(undefined8 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar1 = (int *)&DAT_00000048;
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 + 0x40);
  }
  piVar2 = (int *)&DAT_0000003c;
  if (param_2 != 0) {
    piVar2 = (int *)(param_2 + 0x34);
  }
  iVar3 = 0;
  if (*piVar1 != 0) {
    iVar3 = *piVar1 + 0x5c;
  }
  iVar4 = 0;
  if (*piVar2 != 0) {
    iVar4 = *piVar2 + 0x5c;
  }
  puVar5 = (undefined4 *)&DAT_000000ec;
  if (param_2 != 0) {
    puVar5 = (undefined4 *)(param_2 + 0xe4);
  }
  FUN_100b1ca0(*puVar5,iVar4,iVar3);
  return;
}

