/*
 * FUN_10053128 at 10053128
 * undefined FUN_10053128(void)
 * Address ranges: 10053128-100531af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10053128(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int extraout_w10;
  undefined4 local_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  
  iVar2 = -0x7ff8ffa9;
  if ((param_2 != (int *)0x0) && (*param_2 == 0x6c)) {
    uStack_84 = 0;
    uStack_8c = 0;
    uStack_74 = 0;
    uStack_7c = 0;
    uStack_64 = 0;
    uStack_6c = 0;
    uStack_54 = 0;
    uStack_5c = 0;
    uStack_44 = 0;
    uStack_4c = 0;
    uStack_34 = 0;
    uStack_3c = 0;
    uStack_24 = 0;
    uStack_2c = 0;
    uStack_1c = 0;
    local_90 = 0x7c;
    iVar2 = FUN_100442e0(*param_1,&local_90);
    if ((iVar2 == 0) &&
       (cVar1 = FUN_1004caa0(&local_90,param_2), iVar2 = -0x7ff8ffa9, cVar1 != '\0')) {
      iVar2 = extraout_w10;
    }
  }
  return iVar2;
}

