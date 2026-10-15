/*
 * FUN_10016608 at 10016608
 * undefined FUN_10016608(void)
 * Address ranges: 10016608-100166e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10016608(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *in_w8;
  
  puVar1 = in_w8 + 2;
  in_w8[0] = 0;
  in_w8[1] = 0;
  puVar2 = in_w8 + 6;
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar2[0] = 0;
  puVar2[1] = 0;
  in_w8[8] = 0;
  if (param_4 < 3) {
    *in_w8 = (uint)*(byte *)(param_4 + 0x100a016c);
  }
  if (param_3 < 2) {
    *puVar1 = (uint)*(byte *)(param_3 + 0x100a0168);
  }
  in_w8[4] = (uint)*(byte *)((param_2 & 7) + 0x100a0160);
  in_w8[5] = (uint)(7 < (int)param_2);
  if (param_1 < 0x11) {
    *puVar2 = (uint)*(byte *)(param_1 + 0x100a0148);
    in_w8[1] = (uint)*(byte *)(param_1 + 0x100a0130);
    in_w8[3] = (uint)*(byte *)(param_1 + 0x100a0118);
  }
  in_w8[9] = param_5;
  return;
}

