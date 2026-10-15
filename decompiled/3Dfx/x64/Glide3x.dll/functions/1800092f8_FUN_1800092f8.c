/*
 * FUN_1800092f8 at 1800092f8
 * undefined __fastcall FUN_1800092f8(longlong param_1)
 * Address ranges: 1800092f8-180009384
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800092f8(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x260);
  uVar3 = *(undefined8 *)(param_1 + 0x18c);
  *puVar1 = *(undefined8 *)(param_1 + 0x184);
  puVar1[1] = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x19c);
  puVar1[2] = *(undefined8 *)(param_1 + 0x194);
  puVar1[3] = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x1ac);
  puVar1[4] = *(undefined8 *)(param_1 + 0x1a4);
  puVar1[5] = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x1bc);
  puVar1[6] = *(undefined8 *)(param_1 + 0x1b4);
  puVar1[7] = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x1cc);
  puVar1[8] = *(undefined8 *)(param_1 + 0x1c4);
  puVar1[9] = uVar3;
  lVar2 = *(longlong *)(param_1 + 0x260);
  uVar3 = *(undefined8 *)(param_1 + 0x1dc);
  *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(param_1 + 0x1d4);
  *(undefined8 *)(lVar2 + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x1ec);
  *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)(param_1 + 0x1e4);
  *(undefined8 *)(lVar2 + 0x68) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x1fc);
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(param_1 + 500);
  *(undefined8 *)(lVar2 + 0x78) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x20c);
  *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(param_1 + 0x204);
  *(undefined8 *)(lVar2 + 0x88) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x21c);
  *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(param_1 + 0x214);
  *(undefined8 *)(lVar2 + 0x98) = uVar3;
  *(longlong *)(param_1 + 0x260) = *(longlong *)(param_1 + 0x260) + 0xa0;
  return;
}

