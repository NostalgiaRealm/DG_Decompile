/*
 * FUN_10041748 at 10041748
 * undefined FUN_10041748(void)
 * Address ranges: 10041748-100417cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041748(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 local_30;
  undefined4 auStack_2c [3];
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    local_30 = 0;
    auStack_2c[0] = 0;
    iVar1 = *(int *)(param_1 + 0x3c);
    FUN_100678c8(*(undefined4 *)(iVar1 + 0x3180),*(undefined4 *)(iVar1 + 0x3184),0,param_4,
                 auStack_2c,&local_30,&local_30);
    iVar1 = *(int *)(param_1 + 0x3c);
    FUN_100679a8(*(undefined4 *)(iVar1 + 0x3180),*(undefined4 *)(iVar1 + 0x3184),0,0x2a);
    *(char *)(param_1 + 0x38) = '\0';
  }
  return;
}

