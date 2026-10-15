/*
 * FUN_100d1190 at 100d1190
 * undefined FUN_100d1190(void)
 * Address ranges: 100d1190-100d1213
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d1190(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if ((param_3 != (int *)0x0) && (*param_3 == 0xc)) {
    iVar1 = param_3[1];
    uVar3 = FUN_100037d0(iVar1);
    if (((uVar3 & 1) != 0) && ((uint)param_3[2] < 2)) {
      uVar2 = FUN_10006680(param_1 + -0x70,param_2,iVar1);
    }
  }
  return uVar2;
}

