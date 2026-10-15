/*
 * FUN_100166e8 at 100166e8
 * undefined FUN_100166e8(void)
 * Address ranges: 100166e8-10016793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100166e8(uint param_1,uint param_2,undefined4 param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined8 *in_w8;
  
  *in_w8 = 0xe;
  in_w8[1] = 0xb;
  *(undefined4 *)(in_w8 + 4) = 0;
  bVar2 = *(byte *)((param_2 & 7) + 0x100a0110);
  puVar1 = (uint *)(in_w8 + 3);
  puVar1[0] = 0;
  puVar1[1] = 0;
  *(uint *)(in_w8 + 2) = (uint)bVar2;
  *(uint *)((int)in_w8 + 0x14) = (uint)(7 < (int)param_2);
  if (param_1 < 0x11) {
    *puVar1 = (uint)*(byte *)(param_1 + 0x100a0148);
    *(uint *)((int)in_w8 + 4) = (uint)*(byte *)(param_1 + 0x100a0130);
    *(uint *)((int)in_w8 + 0xc) = (uint)*(byte *)(param_1 + 0x100a0118);
  }
  *(undefined4 *)((int)in_w8 + 0x24) = param_3;
  return;
}

