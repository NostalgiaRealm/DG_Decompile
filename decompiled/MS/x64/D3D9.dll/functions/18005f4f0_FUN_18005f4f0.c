/*
 * FUN_18005f4f0 at 18005f4f0
 * undefined __fastcall FUN_18005f4f0(longlong * param_1, uint param_2, byte param_3)
 * Address ranges: 18005f4f0-18005f559
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005f4f0(longlong *param_1,uint param_2,byte param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  *(uint *)((ulonglong)param_2 * 0x70 + 0x7014 + (longlong)param_1) = (uint)param_3;
  *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
  uVar2 = (ulonglong)*(byte *)((ulonglong)param_2 + 0xfd8 + (longlong)param_1);
  if (param_3 == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)param_2 >> 3) + uVar2 * 4 + 0xfc8);
    *pbVar1 = *pbVar1 & ~('\x01' << (param_2 & 7));
  }
  else {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)param_2 >> 3) + uVar2 * 4 + 0xfc8);
    *pbVar1 = *pbVar1 | '\x01' << (param_2 & 7);
  }
  *(undefined1 *)((longlong)param_1 + 0xf6c5) = 1;
  return;
}

