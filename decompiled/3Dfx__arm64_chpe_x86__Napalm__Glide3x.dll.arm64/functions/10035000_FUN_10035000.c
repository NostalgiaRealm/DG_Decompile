/*
 * FUN_10035000 at 10035000
 * undefined FUN_10035000(void)
 * Address ranges: 10035000-10035087
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035000(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 local_30;
  undefined4 auStack_2c [3];
  
  if (*(char *)(param_1 + 0x1e4) != '\0') {
    local_30 = 0;
    auStack_2c[0] = 0;
    iVar1 = *(int *)(param_1 + 0x1e8);
    FUN_10070c08(*(undefined4 *)(iVar1 + 0x3680),*(undefined4 *)(iVar1 + 0x3684),0,param_4,
                 auStack_2c,&local_30,&local_30);
    iVar1 = *(int *)(param_1 + 0x1e8);
    FUN_10070ce8(*(undefined4 *)(iVar1 + 0x3680),*(undefined4 *)(iVar1 + 0x3684),0,0x2a);
    *(char *)(param_1 + 0x1e4) = '\0';
  }
  return;
}

