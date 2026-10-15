/*
 * FUN_10007690 at 10007690
 * undefined FUN_10007690(void)
 * Address ranges: 10007690-100076fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10007690(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)(param_1 + 0x9b4);
  if (*puVar1 < param_2) {
    FUN_10081dc0(*(int *)(param_1 + 0x9ac));
    *puVar1 = 0;
    iVar2 = param_2 * 8;
    if (param_2 >> 0x1d != 0) {
      iVar2 = -1;
    }
    iVar2 = FUN_10081da0(iVar2);
    if (iVar2 == 0) {
      param_2 = 0;
    }
    *(int *)(param_1 + 0x9ac) = iVar2;
    *puVar1 = param_2;
  }
  return;
}

