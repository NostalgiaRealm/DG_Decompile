/*
 * FUN_1005a2a2 at 1005a2a2
 * undefined __stdcall FUN_1005a2a2(int param_1, undefined4 param_2, uint param_3)
 * Address ranges: 1005a2a2-1005a349
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005a2a2(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  byte *pbVar4;
  
  pbVar4 = (byte *)(param_1 + 0x3c);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4 = pbVar4 + 4;
  }
  pbVar4[0] = 0;
  pbVar4[1] = 0;
  pbVar4[2] = 0;
  FUN_100586f5((byte *)(param_1 + 0x3c),param_2,param_3);
  uVar2 = CONCAT31((int3)((uint)extraout_EDX >> 8),
                   *(byte *)(param_1 + 0x1fe) ^ 0xf | *(byte *)(param_1 + 500)) & 0xffffff0f;
  *(char *)(param_1 + 0x3e) = (char)uVar2;
  *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x1f5) & 0xf | 7;
  uVar1 = FUN_100c40de(CONCAT31((int3)((uint)extraout_ECX >> 8),0xe4),uVar2);
  *(char *)(param_1 + 0x202) = (char)uVar1;
  uVar1 = FUN_100c40de(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),0xe4),
                       CONCAT31((int3)((uint)extraout_EDX_00 >> 8),*(undefined1 *)(param_1 + 0x3f)))
  ;
  *(char *)(param_1 + 0x203) = (char)uVar1;
  uVar2 = 0;
  do {
    if (*(char *)(param_1 + 0x1f6 + uVar2) != '\0') {
      *(undefined1 *)(param_1 + 0x41 + uVar2) = 0xf;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  *(undefined1 *)(param_1 + 0x4b) = 0xff;
  *(undefined1 *)(param_1 + 0x4c) = 0xff;
  *(undefined1 *)(param_1 + 0x4d) = 0xff;
  *(undefined1 *)(param_1 + 0x4e) = 0xff;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(bool *)(param_1 + 0x5e) = (param_3 >> 0x10 & 1) != 0;
  return;
}

