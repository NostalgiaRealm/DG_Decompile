/*
 * FUN_1005d200 at 1005d200
 * undefined FUN_1005d200(void)
 * Address ranges: 1005d200-1005d26b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005d200(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  param_1 = param_1 + param_2 * 0x16c0;
  iVar1 = param_1 + 0x1378;
  uVar3 = FUN_10055a80(iVar1);
  if ((uVar3 & 1) == 0) {
    FUN_100559d8(iVar1);
  }
  piVar2 = (int *)(param_1 + 0x14bc);
  FUN_100600f0(*piVar2 + 4,0);
  iVar1 = *piVar2;
  FUN_10056a68(*(undefined4 *)(iVar1 + 0x8e0),*(undefined8 *)(iVar1 + 0x940));
  return;
}

