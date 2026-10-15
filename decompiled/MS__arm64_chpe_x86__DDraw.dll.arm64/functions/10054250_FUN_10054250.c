/*
 * FUN_10054250 at 10054250
 * undefined FUN_10054250(void)
 * Address ranges: 10054250-100542a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10054250(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_2 != (int *)0x0) {
    if (*param_2 == 0x6c) {
      uVar1 = FUN_10053128((undefined4 *)(param_1 + 4));
    }
    else {
      uVar1 = FUN_100442e0(*(undefined4 *)(param_1 + 4),param_2);
    }
  }
  return uVar1;
}

