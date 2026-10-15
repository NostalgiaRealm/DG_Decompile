/*
 * FUN_18006c6fc at 18006c6fc
 * undefined __fastcall FUN_18006c6fc(undefined8 param_1, longlong param_2, uint param_3, int param_4)
 * Address ranges: 18006c6fc-18006c798
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006c6fc(undefined8 param_1,longlong param_2,uint param_3,int param_4)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_4 == 0) {
    uVar1 = param_3 >> 0x14 & 0x700 | param_3 & 0x1800;
    uVar2 = (ulonglong)(uVar1 >> 8);
    if ((char)(uVar1 >> 8) == '\x03') {
      param_4 = FUN_18006c6c0(uVar2,param_2,param_3 & 0x7ff);
    }
    else {
      param_4 = FUN_18006c684(uVar2,param_2,param_3 & 0x7ff);
    }
  }
  *(int *)(param_2 + 0x340) = param_4;
  *(byte *)(param_2 + 0x344) = (byte)(param_3 >> 0x10) & 0xf;
  *(undefined4 *)(param_2 + 0x350) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x35c) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x358) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x354) = 0xffffffff;
  *(uint *)(param_2 + 0x334) = param_3 >> 0x18 & 0xf;
  *(uint *)(param_2 + 0x330) = param_3 >> 7 & 0x2000;
  return;
}

