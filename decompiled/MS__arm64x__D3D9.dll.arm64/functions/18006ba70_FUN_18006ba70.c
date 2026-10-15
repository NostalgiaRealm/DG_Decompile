/*
 * FUN_18006ba70 at 18006ba70
 * undefined FUN_18006ba70(void)
 * Address ranges: 18006ba70-18006bb9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18006ba70(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,byte param_5,
                 uint param_6,uint param_7)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_4 == 0) {
    param_4 = FUN_1800f42d0(param_3 + 0x20,4,1);
  }
  uVar3 = 0;
  uVar4 = 0;
  bVar1 = (&DAT_1802312e0)[param_5];
  uVar2 = param_7 & 0xff | 0x100;
  FUN_1800f5730(param_3 + 0x20,param_2,0x38,param_4,param_5,param_6 | 0x420100,uVar2,
                *(undefined4 *)(param_3 + 0x4b0),0,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,param_4,param_5,param_6 | 0x424100,uVar2,
                *(undefined4 *)(param_3 + 0x4b0),CONCAT44(uVar3,0x55),CONCAT44(uVar4,param_4),
                bVar1 | 0x100,0);
  FUN_1800f5730(param_3 + 0x20,param_2,0x32,param_4,param_5,param_6 | 0x428100,uVar2,
                *(undefined4 *)(param_3 + 0x4b0),0xaa,param_4,bVar1 | 0x100,0);
  return param_4;
}

