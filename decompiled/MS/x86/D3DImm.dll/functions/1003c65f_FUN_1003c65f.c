/*
 * FUN_1003c65f at 1003c65f
 * undefined __stdcall FUN_1003c65f(undefined4 * param_1)
 * Address ranges: 1003c65f-1003c68b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003c65f(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  bVar3 = DAT_1006bbe2 == '\0';
  puVar2 = &DAT_10061ed0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  if (bVar3) {
    FUN_1004e8c1();
    DAT_1006bbe2 = '\x01';
  }
  return;
}

