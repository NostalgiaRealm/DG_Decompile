/*
 * FUN_100325bb at 100325bb
 * undefined __stdcall FUN_100325bb(int param_1, uint param_2, uint param_3)
 * Address ranges: 100325bb-1003269e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100325bb(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  byte bVar3;
  byte bVar4;
  undefined4 extraout_EDX;
  undefined1 uVar5;
  
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  if ((param_3 >> 0x18 & 1) != 0) {
    uVar1 = param_3 >> 0x19 & 3;
    if (uVar1 == 0) {
      *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 1;
    }
    else if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
      *(undefined1 *)(param_1 + 0x3c) = 0xc;
    }
  }
  if ((param_3 >> 0x17 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x3d) = 0xf;
  }
  uVar5 = 0xe4;
  uVar2 = 0xf00;
  if ((param_2 & 0x1000000) != 0) {
    uVar5 = 0xea;
    uVar2 = 0xc00;
  }
  bVar4 = (byte)((uint)uVar2 >> 8);
  bVar3 = (*(byte *)(param_1 + 0x1ee) ^ 0xf | *(byte *)(param_1 + 0x1e4)) & bVar4;
  *(byte *)(param_1 + 0x3e) = bVar3;
  *(byte *)(param_1 + 0x3f) = (*(byte *)(param_1 + 0x1e5) | 7) & bVar4;
  uVar2 = FUN_100580c1(CONCAT31((int3)((param_2 & 0x1000000) >> 8),uVar5),
                       CONCAT31((int3)((uint)uVar2 >> 8),bVar3));
  *(char *)(param_1 + 0x1f2) = (char)uVar2;
  uVar2 = FUN_100580c1(CONCAT31((int3)((uint)extraout_ECX >> 8),uVar5),
                       CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)(param_1 + 0x3f)));
  *(char *)(param_1 + 499) = (char)uVar2;
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + 0x1e6 + uVar1) != '\0') {
      *(undefined1 *)(param_1 + 0x41 + uVar1) = 0xf;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0xff;
  *(undefined1 *)(param_1 + 0x4c) = 0xff;
  *(undefined1 *)(param_1 + 0x4d) = 0xff;
  *(undefined1 *)(param_1 + 0x4e) = 0xff;
  return;
}

