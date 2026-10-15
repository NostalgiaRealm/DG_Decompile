/*
 * FUN_1002e1d0 at 1002e1d0
 * undefined FUN_1002e1d0(void)
 * Address ranges: 1002e1d0-1002e243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002e1d0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  FUN_10035760(iVar1,iVar2,param_1[2]);
  if (iVar2 == 0x29) {
    puVar3 = (undefined4 *)(iVar1 + 0x1fc8);
    FUN_1001f6a8(iVar1,*puVar3);
    puVar4 = (undefined4 *)(iVar1 + 0x1fec);
    FUN_1001f6a8(iVar1,*puVar4);
    *puVar3 = 0;
    *puVar4 = 0;
  }
  return;
}

