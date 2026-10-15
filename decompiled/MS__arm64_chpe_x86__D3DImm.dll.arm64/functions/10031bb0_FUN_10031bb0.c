/*
 * FUN_10031bb0 at 10031bb0
 * undefined FUN_10031bb0(void)
 * Address ranges: 10031bb0-10031c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_10031bb0(int param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined1 local_24;
  
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[10] = 0;
  if (((uint)param_3 >> 8 & 1) == 0) {
    local_28 = 0x100;
    local_24 = 1;
    local_30 = FUN_10081da0(0x100);
    local_2c = local_30;
    uVar3 = FUN_10049348(param_1 + 0x10,param_1 + 0x18,param_3,0x10051,&local_30,
                         *(undefined1 *)(param_1 + 0x120),(int)param_2 + 4);
    iVar1 = local_30;
    if ((uVar3 & 1) != 0) {
      uVar2 = FUN_100797a8(uVar3,local_2c - local_30,local_30);
      *(undefined4 *)param_2 = uVar2;
    }
    FUN_10081dc0(iVar1);
  }
  return param_2;
}

