/*
 * FUN_10013150 at 10013150
 * undefined FUN_10013150(void)
 * Address ranges: 10013150-1001331f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10013150(int param_1,undefined4 param_2,int param_3,longlong param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  
  if (param_4 == 0x530200100700) {
    uVar5 = *(undefined1 *)(param_3 + 10);
  }
  else {
    uVar5 = 2;
  }
  uVar4 = FUN_10012968(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                       uVar5,*(undefined1 *)(param_3 + 0xd),0);
  FUN_10012d90(param_1,uVar4 & 0xffffffff);
  uVar6 = *(undefined2 *)(param_3 + 0x11);
  if (*(char *)(param_3 + 0x10) != '\0' && *(char *)(param_3 + 0x10) != '\x0f') {
    uVar6 = 0xffff;
  }
  uVar2 = FUN_100127d8(param_1,param_2,uVar6);
  FUN_10012d90(param_1,uVar2);
  uVar3 = FUN_100127d8(param_1,param_2,0xffff);
  FUN_10002350(param_2,param_4,uVar2,uVar4 & 0xffffffff,uVar4 >> 0x20,0);
  FUN_10002350(param_2,0x290200100100,uVar3,uVar2,0,0);
  puVar1 = (uint *)(param_1 + 4);
  FUN_10002350(param_2,0x540200100700,uVar3,*puVar1 | 0x80000000,0x100,0);
  FUN_10002350(param_2,0xc20200130700,uVar3,*puVar1 | 0x80000000,0x150,4);
  FUN_10002350(param_2,0x540200100700,uVar2,uVar3,0,0);
  FUN_10002350(param_2,0x550200100700,uVar3,*puVar1 | 0x80000000,0x160,0);
  FUN_10002350(param_2,0x560200100700,uVar2,uVar3,0,0);
  FUN_10012d60(param_1,uVar2);
  FUN_10012d60(param_1,uVar4 & 0xffffffff);
  return uVar2;
}

