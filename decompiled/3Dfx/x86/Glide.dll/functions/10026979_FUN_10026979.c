/*
 * FUN_10026979 at 10026979
 * undefined __cdecl FUN_10026979(undefined4 * param_1)
 * Address ranges: 10026979-100269da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10026979(undefined4 *param_1)

{
  uint *puVar1;
  void *this;
  undefined1 *puVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  LONG *pLVar6;
  LONG *pLVar7;
  LONG *pLVar8;
  LONG *pLVar9;
  
  this = (void *)*param_1;
  puVar1 = param_1 + 1;
  piVar4 = param_1 + 2;
  puVar5 = param_1 + 3;
  pLVar6 = param_1 + 4;
  pLVar7 = param_1 + 5;
  pLVar8 = param_1 + 6;
  pLVar9 = param_1 + 7;
  puVar2 = (undefined1 *)param_1[9];
  param_1 = (undefined4 *)CONCAT31(param_1._1_3_,*(undefined1 *)(param_1 + 8));
  uVar3 = FUN_1001d191(this,*puVar1,*piVar4,*(undefined1 *)puVar5,*pLVar6,*pLVar7,*pLVar8,*pLVar9,
                       param_1);
  *puVar2 = uVar3;
  return;
}

