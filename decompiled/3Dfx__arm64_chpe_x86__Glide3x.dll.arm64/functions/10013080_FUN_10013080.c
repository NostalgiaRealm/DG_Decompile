/*
 * FUN_10013080 at 10013080
 * undefined FUN_10013080(void)
 * Address ranges: 10013080-1001314f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10013080(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  FUN_1006b6e8(*(undefined4 *)(param_1 + 0x3300),*(undefined4 *)(param_1 + 0x3304),param_2,param_3,
               param_4,param_5);
  if (*(char *)(param_1 + 0x3ef4) == '\0') {
    iVar1 = *(int *)(param_1 + 0x3ef8);
    FUN_1006b568(*(undefined4 *)(iVar1 + 0x3300),*(undefined4 *)(iVar1 + 0x3304),0);
    iVar1 = *(int *)(param_1 + 0x3ef8);
    FUN_1006b648(*(undefined4 *)(iVar1 + 0x3300),*(undefined4 *)(iVar1 + 0x3304),
                 *(undefined4 *)(param_1 + 0x3f1c),0x2a);
    *(undefined1 *)(param_1 + 0x3ef4) = 1;
  }
  return;
}

