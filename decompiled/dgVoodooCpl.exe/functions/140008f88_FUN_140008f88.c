/*
 * FUN_140008f88 at 140008f88
 * undefined8 __fastcall FUN_140008f88(longlong param_1, int param_2)
 * Address ranges: 140008f88-140009029
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140008f88(longlong param_1,int param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_2 == 0x3f1) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x4f);
    *pbVar1 = *pbVar1 ^ 1;
    uVar4 = 0;
  }
  else if (param_2 == 0x3f5) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x50);
    *pbVar1 = *pbVar1 ^ 1;
    uVar4 = 0;
  }
  else if (param_2 == 0x3f8) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x52);
    *pbVar1 = *pbVar1 ^ 1;
    uVar4 = 0;
  }
  else if (param_2 == 0x3fb) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x53);
    *pbVar1 = *pbVar1 ^ 1;
    uVar4 = 0;
  }
  else if (param_2 == 0x3fc) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x51);
    *pbVar1 = *pbVar1 ^ 1;
    uVar4 = 0;
  }
  else if (param_2 == 0x3fd) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x54);
    *pbVar1 = *pbVar1 ^ 1;
    uVar4 = 0;
  }
  else if (param_2 == 0x3fe) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x55);
    *pbVar1 = *pbVar1 ^ 1;
    uVar4 = 0;
  }
  else {
    uVar3 = param_2 - 0x3ff;
    uVar4 = (ulonglong)uVar3;
    if (uVar3 == 0) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x56);
      *pbVar1 = *pbVar1 ^ 1;
    }
    else if (uVar3 == 1) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x57);
      *pbVar1 = *pbVar1 ^ 1;
    }
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                    (*(longlong **)(param_1 + 0x10),CONCAT71((int7)(uVar4 >> 8),1));
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}

