/*
 * FUN_14000338c at 14000338c
 * undefined8 __fastcall FUN_14000338c(longlong param_1, int param_2)
 * Address ranges: 14000338c-1400034a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_14000338c(longlong param_1,int param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_2 < 0x40c) {
    if (param_2 == 0x40b) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x1f6);
      *pbVar1 = *pbVar1 ^ 1;
      goto LAB_140003494;
    }
    if (param_2 == 0x406) {
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x1e3);
      *puVar2 = *puVar2 ^ 2;
      goto LAB_140003494;
    }
    if (param_2 == 0x407) {
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x1e3);
      *puVar2 = *puVar2 ^ 4;
      goto LAB_140003494;
    }
    if (param_2 == 0x408) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 499);
      *pbVar1 = *pbVar1 ^ 1;
      goto LAB_140003494;
    }
    uVar4 = param_2 - 0x409;
    if (uVar4 == 0) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 500);
      *pbVar1 = *pbVar1 ^ 1;
      goto LAB_140003494;
    }
    if (uVar4 == 1) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x1f5);
      *pbVar1 = *pbVar1 ^ 1;
      goto LAB_140003494;
    }
  }
  else {
    if (param_2 == 0x40c) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x1f8);
      *pbVar1 = *pbVar1 ^ 1;
      goto LAB_140003494;
    }
    if (param_2 == 0x40f) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x1f7);
      *pbVar1 = *pbVar1 ^ 1;
      goto LAB_140003494;
    }
    if (param_2 == 0x41a) {
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x1e3);
      *puVar2 = *puVar2 ^ 1;
      goto LAB_140003494;
    }
    uVar4 = param_2 - 0x420;
    if (uVar4 == 0) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x1f9);
      *pbVar1 = *pbVar1 ^ 1;
      goto LAB_140003494;
    }
    if (uVar4 == 1) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x1fa);
      *pbVar1 = *pbVar1 ^ 1;
      goto LAB_140003494;
    }
  }
  uVar3 = FUN_140002714((ulonglong)uVar4,param_2);
  if ((int)uVar3 != -1) {
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x1ef);
    *puVar2 = *puVar2 ^ 1 << ((byte)uVar3 & 0x1f);
  }
LAB_140003494:
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),1);
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}

