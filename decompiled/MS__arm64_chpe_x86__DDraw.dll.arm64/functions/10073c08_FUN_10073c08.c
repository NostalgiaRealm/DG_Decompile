/*
 * FUN_10073c08 at 10073c08
 * undefined FUN_10073c08(void)
 * Address ranges: 10073c08-10073c77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10073c08(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  param_1 = param_1 + param_2 * 0x16c0;
  piVar1 = (int *)(param_1 + 0x6c8);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    FUN_100770d0(iVar2);
    FUN_10091460(iVar2,0x78);
  }
  *piVar1 = 0;
  piVar1 = (int *)(param_1 + 0x6cc);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    FUN_100770d0(iVar2);
    FUN_10091460(iVar2,0x78);
  }
  *piVar1 = 0;
  return;
}

