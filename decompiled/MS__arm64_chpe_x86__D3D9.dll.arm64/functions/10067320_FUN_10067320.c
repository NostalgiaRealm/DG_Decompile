/*
 * FUN_10067320 at 10067320
 * undefined FUN_10067320(void)
 * Address ranges: 10067320-100673c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10067320(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_30 [4];
  
  iVar1 = *param_1;
  uVar2 = param_1[1];
  iVar3 = param_1[2];
  FUN_10079410(iVar1,uVar2,iVar3,param_1[3]);
  if ((uVar2 < 0x10 && iVar3 == 0xb) &&
     (local_30[0] = *(undefined4 *)(iVar1 + 0xf660),
     (*(byte *)((int)local_30 + ((int)uVar2 >> 3)) >> (ulonglong)(uVar2 & 7) & 1) != 0)) {
    puVar4 = (undefined4 *)(iVar1 + (uVar2 + 0x3ecf) * 4);
    FUN_100568d8(iVar1,*puVar4);
    *puVar4 = 0;
  }
  return;
}

