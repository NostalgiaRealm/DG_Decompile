/*
 * FUN_180071f80 at 180071f80
 * undefined FUN_180071f80(void)
 * Address ranges: 180071f80-180072113
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180071f80(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  int param_5,int param_6,uint param_7,undefined1 param_8,uint param_9)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_7 | (uint)(param_7 != 0) << 0x1c;
  param_9 = param_9 | (uint)(param_7 != 0) << 0x1e;
  uVar2 = param_4 & 0xffffffff;
  if (param_5 == 0) {
    FUN_1800f5730(param_3 + 0x20,param_2,0x36,param_4,1,param_9,0xff,param_6,uVar1,0,0);
    FUN_1800f5730(param_3 + 0x20,param_2,0x36,uVar2,2,param_9,0xff,param_6 + 0x10,uVar1,0,0);
    FUN_1800f5730(param_3 + 0x20,param_2,0x36,uVar2,4,param_9,0xff,param_6 + 0x20,uVar1,0,0);
  }
  else {
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,param_4,1,param_5,0xe4,param_9,0xe4,param_6,uVar1,
                  param_8,0);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar2,2,param_5,0xe4,param_9,0xe4,param_6 + 0x10,uVar1
                  ,param_8,0);
    FUN_1800f5730(param_3 + 0x20,param_2,0x11,uVar2,4,param_5,0xe4,param_9,0xe4,param_6 + 0x20,uVar1
                  ,param_8,0);
  }
  return;
}

