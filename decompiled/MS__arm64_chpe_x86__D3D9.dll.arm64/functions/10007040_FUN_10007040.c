/*
 * FUN_10007040 at 10007040
 * undefined FUN_10007040(void)
 * Address ranges: 10007040-100070f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10007040(int *param_1,undefined1 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1 + 2;
  piVar2 = param_1 + 1;
  iVar4 = *piVar1;
  if (*piVar2 == iVar4) {
    iVar3 = iVar4 << 1;
    if (iVar4 == 0) {
      iVar3 = 0x10;
    }
    iVar4 = FUN_101322b0(iVar3);
    if (iVar4 == 0) {
      return 0;
    }
    FUN_101325a0(iVar4,*param_1,*piVar1);
    FUN_101322d0(*param_1);
    *param_1 = iVar4;
    *piVar1 = iVar3;
  }
  *(undefined1 *)(*piVar2 + *param_1) = *param_2;
  *piVar2 = *piVar2 + 1;
  return 1;
}

