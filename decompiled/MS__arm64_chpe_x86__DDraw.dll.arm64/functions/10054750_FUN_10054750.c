/*
 * FUN_10054750 at 10054750
 * undefined FUN_10054750(void)
 * Address ranges: 10054750-100547d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10054750(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar2 == 0) {
    FUN_10001c10(0);
  }
  uVar3 = 0x80070057;
  if ((param_2 != (undefined4 *)0x0) && ((*(uint *)(iVar1 + 0x1bc) >> 4 & 1) != 0)) {
    uVar3 = 0;
    *param_2 = *(undefined4 *)(iVar1 + 0x1e0);
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar3;
}

