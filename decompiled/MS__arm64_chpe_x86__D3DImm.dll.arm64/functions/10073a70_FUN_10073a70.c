/*
 * FUN_10073a70 at 10073a70
 * undefined FUN_10073a70(void)
 * Address ranges: 10073a70-10073aff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10073a70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 + param_2 * 0x16c0;
  if ((*(char *)(param_1 + 0x14a4) != '\0') &&
     (iVar1 = *(int *)(param_1 + 0x1494), iVar2 = (*(code *)PTR_FUN_100a1024)(), iVar1 != iVar2)) {
    FUN_100816d8(param_1 + 0x1378);
  }
  FUN_10071e00(*(int *)(param_1 + 0x14bc) + 4,0);
  iVar1 = *(int *)(param_1 + 0x14bc);
  FUN_10076718(*(undefined4 *)(iVar1 + 0x8e0),*(undefined8 *)(iVar1 + 0x940));
  return;
}

