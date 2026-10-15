/*
 * FUN_10065ee0 at 10065ee0
 * undefined FUN_10065ee0(void)
 * Address ranges: 10065ee0-10065fb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10065ee0(int *param_1)

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
  FUN_1005c0c8(iVar2);
  FUN_1007bd20(iVar2,iVar4,iVar5,1,0,puVar1 + 1,0,iVar6,uVar3);
  return;
}

