/*
 * FUN_10031110 at 10031110
 * undefined FUN_10031110(void)
 * Address ranges: 10031110-10031197
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10031110(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 local_30;
  undefined4 auStack_2c [3];
  
  if (*(char *)(param_1 + 0x1e4) != '\0') {
    local_30 = 0;
    auStack_2c[0] = 0;
    iVar1 = *(int *)(param_1 + 0x1e8);
    FUN_1006b568(*(undefined4 *)(iVar1 + 0x3300),*(undefined4 *)(iVar1 + 0x3304),0,param_4,
                 auStack_2c,&local_30,&local_30);
    iVar1 = *(int *)(param_1 + 0x1e8);
    FUN_1006b648(*(undefined4 *)(iVar1 + 0x3300),*(undefined4 *)(iVar1 + 0x3304),0,0x2a);
    *(char *)(param_1 + 0x1e4) = '\0';
  }
  return;
}

