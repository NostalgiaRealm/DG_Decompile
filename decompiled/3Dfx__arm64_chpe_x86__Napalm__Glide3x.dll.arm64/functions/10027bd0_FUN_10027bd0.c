/*
 * FUN_10027bd0 at 10027bd0
 * undefined FUN_10027bd0(void)
 * Address ranges: 10027bd0-10027c83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10027bd0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  iVar2 = param_1[0xb];
  iVar3 = param_1[0xc];
  FUN_10031150(iVar1 + 0x42e8,0,0);
  if (param_1 + 1 != (int *)0x0) {
    FUN_1006cb08(*(undefined4 *)(*(int *)(iVar1 + 0x3688) + 0x1304),*(undefined4 *)(iVar1 + 0x36a8),
                 *(int *)(iVar1 + 0x3688) + 0x1430,param_1 + 1,iVar2);
  }
  uVar4 = 3;
  do {
    FUN_10036790(iVar1,uVar4,iVar2,iVar3 + iVar2);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 7);
  return;
}

