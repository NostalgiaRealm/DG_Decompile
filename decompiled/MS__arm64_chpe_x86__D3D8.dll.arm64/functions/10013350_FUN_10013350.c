/*
 * FUN_10013350 at 10013350
 * undefined FUN_10013350(void)
 * Address ranges: 10013350-100134cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10013350(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            char param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_100127d8(param_1,param_2,0xffff);
  FUN_10012d90(param_1,uVar2);
  uVar3 = FUN_100127d8(param_1,param_2,0xffff);
  FUN_10002350(param_2,0x290200100100,uVar3,*param_3,param_3[1],0);
  FUN_10002350(param_2,0x590200100700,uVar3,*param_4,param_4[1],0);
  FUN_10002350(param_2,0x120200100700,uVar2,uVar3,0,0);
  uVar1 = 0x580200100700;
  if (param_5 == '\0') {
    uVar1 = 0x580201300700;
  }
  FUN_10002350(param_2,uVar1,uVar3,uVar2,0,0);
  FUN_10002350(param_2,0x290200100100,uVar2,uVar3,0,0x55);
  FUN_10002350(param_2,0xc60200130700,uVar2,uVar3,0,0x55);
  FUN_10002350(param_2,0x580201300700,uVar3,uVar2,0,0);
  FUN_10002350(param_2,0xc60200130700,uVar3,uVar3,0,0);
  FUN_10012d60(param_1,uVar2);
  return uVar3;
}

