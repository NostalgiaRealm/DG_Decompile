/*
 * FUN_18003da00 at 18003da00
 * undefined __cdecl FUN_18003da00(longlong param_1, undefined8 param_2, uint param_3, undefined8 param_4)
 * Address ranges: 18003da00-18003da8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003da00(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  uint extraout_w11;
  longlong extraout_x11;
  longlong extraout_x12;
  longlong extraout_x12_00;
  
  if ((param_3 & 0xf0) == 0x80) {
    *(undefined4 *)(param_1 + 0x15c) = 2;
    uVar1 = FUN_1800565d0(*(uint *)(param_1 + (ulonglong)(param_3 & 0xf) * 4 + 0x98),(byte)param_4,1
                          ,param_4,0,0);
    *(uint *)(extraout_x12_00 + 0x160) = uVar1;
    *(uint *)(extraout_x12_00 + 0x164) = (uint)*(byte *)(extraout_x11 + 0x98);
  }
  else if ((param_3 & 0xf0) == 0xf0) {
    *(undefined4 *)(param_1 + 0x15c) = 2;
    uVar1 = FUN_1800565d0(*(uint *)(param_1 + 0xa8),(byte)param_4,1,param_4,0,0);
    *(uint *)(extraout_x12 + 0x160) = uVar1;
    *(uint *)(extraout_x12 + 0x164) = extraout_w11 & 0xff;
  }
  return;
}

