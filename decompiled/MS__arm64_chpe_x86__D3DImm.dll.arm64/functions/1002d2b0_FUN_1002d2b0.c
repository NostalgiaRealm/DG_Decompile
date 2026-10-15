/*
 * FUN_1002d2b0 at 1002d2b0
 * undefined FUN_1002d2b0(void)
 * Address ranges: 1002d2b0-1002d387
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002d2b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)*param_1;
  iVar2 = param_1[1];
  uVar3 = *puVar1;
  iVar4 = param_1[2];
  iVar5 = param_1[3];
  iVar6 = param_1[4];
  FUN_10024940(iVar2);
  FUN_10038c90(iVar2,iVar4,iVar5,1,0,puVar1 + 1,0,iVar6,uVar3);
  return;
}

