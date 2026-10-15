/*
 * FUN_10023908 at 10023908
 * undefined FUN_10023908(void)
 * Address ranges: 10023908-100239d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10023908(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  FUN_10067a48(*(undefined4 *)(param_1 + 0x3180),*(undefined4 *)(param_1 + 0x3184),param_2,param_3,
               param_4,param_5);
  if (*(char *)(param_1 + 0x37b8) == '\0') {
    iVar1 = *(int *)(param_1 + 0x37bc);
    FUN_100678c8(*(undefined4 *)(iVar1 + 0x3180),*(undefined4 *)(iVar1 + 0x3184),0);
    iVar1 = *(int *)(param_1 + 0x37bc);
    FUN_100679a8(*(undefined4 *)(iVar1 + 0x3180),*(undefined4 *)(iVar1 + 0x3184),
                 *(undefined4 *)(param_1 + 0x37d8),0x2a);
    *(undefined1 *)(param_1 + 0x37b8) = 1;
  }
  return;
}

