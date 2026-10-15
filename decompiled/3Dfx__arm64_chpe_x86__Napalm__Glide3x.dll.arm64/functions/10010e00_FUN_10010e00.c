/*
 * FUN_10010e00 at 10010e00
 * undefined FUN_10010e00(void)
 * Address ranges: 10010e00-10010e6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10010e00(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  
  *param_3 = 0;
  *param_4 = 0;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
    *param_3 = *(undefined4 *)(param_1 + 0x98);
    puVar1 = (undefined4 *)(param_1 + 0x9c);
    break;
  default:
    goto switchD_10010e28_caseD_3;
  case 6:
    *param_3 = *(undefined4 *)(param_1 + 0x1b9);
    puVar1 = (undefined4 *)(param_1 + 0x1bd);
    break;
  case 7:
    *param_3 = *(undefined4 *)(param_1 + 0x1cd);
    puVar1 = (undefined4 *)(param_1 + 0x1d1);
  }
  *param_4 = *puVar1;
switchD_10010e28_caseD_3:
  return;
}

