/*
 * FUN_1004b34f at 1004b34f
 * undefined __stdcall FUN_1004b34f(int param_1, uint param_2, uint param_3)
 * Address ranges: 1004b34f-1004b3df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004b34f(int param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  pbVar1 = (byte *)(param_1 + 0x3c);
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  FUN_100497e0(pbVar1,param_2,param_3);
  uVar3 = CONCAT31((int3)((uint)extraout_EDX >> 8),
                   *(byte *)(param_1 + 0x1ee) ^ 0xf | *(byte *)(param_1 + 0x1e4)) & 0xffffff0f;
  *(char *)(param_1 + 0x3e) = (char)uVar3;
  *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x1e5) & 0xf | 7;
  uVar2 = FUN_100a1889(CONCAT31((int3)((uint)extraout_ECX >> 8),0xe4),uVar3);
  *(char *)(param_1 + 0x1f2) = (char)uVar2;
  uVar2 = FUN_100a1889(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),0xe4),
                       CONCAT31((int3)((uint)extraout_EDX_00 >> 8),*(undefined1 *)(param_1 + 0x3f)))
  ;
  *(char *)(param_1 + 499) = (char)uVar2;
  uVar3 = 0;
  do {
    if (*(char *)(param_1 + 0x1e6 + uVar3) != '\0') {
      *(undefined1 *)(param_1 + 0x41 + uVar3) = 0xf;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0xff;
  *(undefined1 *)(param_1 + 0x4c) = 0xff;
  *(undefined1 *)(param_1 + 0x4d) = 0xff;
  *(undefined1 *)(param_1 + 0x4e) = 0xff;
  return;
}

