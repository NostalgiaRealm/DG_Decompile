/*
 * FUN_1009b3f0 at 1009b3f0
 * undefined FUN_1009b3f0(void)
 * Address ranges: 1009b3f0-1009b507
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1009b3f0(undefined8 param_1,undefined8 *param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [48];
  
  FUN_100e52a8(param_4,param_2,param_5,param_6,param_7,param_8,param_9,param_11,param_13);
  if (*(int *)((int)param_2 + 4) == 0) {
    FUN_100fd9e8(param_3 + 0x11c0);
    uVar2 = *(undefined8 *)(param_4 + 0x938);
    FUN_100e1060(param_4 + 4,0);
    FUN_100e91a8(*(undefined4 *)(param_4 + 0x8e0),uVar2);
    puVar1 = (undefined8 *)
             FUN_100e52a8(param_4,auStack_70,param_5,param_6,param_7,param_8,param_9,param_11,
                          param_13);
    uVar4 = *puVar1;
    uVar3 = puVar1[3];
    uVar2 = puVar1[2];
    param_2[1] = puVar1[1];
    *param_2 = uVar4;
    param_2[3] = uVar3;
    param_2[2] = uVar2;
    param_2[4] = puVar1[4];
  }
  return param_2;
}

