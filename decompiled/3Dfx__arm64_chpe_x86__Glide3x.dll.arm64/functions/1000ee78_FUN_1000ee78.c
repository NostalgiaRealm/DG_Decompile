/*
 * FUN_1000ee78 at 1000ee78
 * undefined FUN_1000ee78(void)
 * Address ranges: 1000ee78-1000eee7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000ee78(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

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
    goto switchD_1000eea0_caseD_3;
  case 6:
    *param_3 = *(undefined4 *)(param_1 + 0x156);
    puVar1 = (undefined4 *)(param_1 + 0x15a);
    break;
  case 7:
    *param_3 = *(undefined4 *)(param_1 + 0x16a);
    puVar1 = (undefined4 *)(param_1 + 0x16e);
  }
  *param_4 = *puVar1;
switchD_1000eea0_caseD_3:
  return;
}

