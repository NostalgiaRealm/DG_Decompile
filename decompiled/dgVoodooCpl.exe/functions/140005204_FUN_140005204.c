/*
 * FUN_140005204 at 140005204
 * undefined8 __fastcall FUN_140005204(longlong param_1, int param_2)
 * Address ranges: 140005204-140005301
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140005204(longlong param_1,int param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  if (param_2 < 0x40a) {
    if (param_2 == 0x409) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x84);
      *pbVar1 = *pbVar1 ^ 1;
    }
    else if (param_2 == 0x3f8) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x86);
      *pbVar1 = *pbVar1 ^ 1;
    }
    else if (param_2 == 0x401) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x80);
      *pbVar1 = *pbVar1 ^ 1;
      (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    }
    else if (param_2 == 0x403) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x81);
      *pbVar1 = *pbVar1 ^ 1;
    }
    else if (param_2 == 0x404) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x82);
      *pbVar1 = *pbVar1 ^ 1;
    }
    else if (param_2 == 0x405) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x83);
      *pbVar1 = *pbVar1 ^ 1;
    }
  }
  else if (param_2 == 0x40a) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x85);
    *pbVar1 = *pbVar1 ^ 1;
  }
  else if (param_2 == 0x40d) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x89);
    *pbVar1 = *pbVar1 ^ 1;
  }
  else if (param_2 == 0x40e) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x87);
    *pbVar1 = *pbVar1 ^ 1;
    FUN_1400055bc(param_1 + -0x78);
  }
  else if (param_2 == 0x40f) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x88);
    *pbVar1 = *pbVar1 ^ 1;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}

