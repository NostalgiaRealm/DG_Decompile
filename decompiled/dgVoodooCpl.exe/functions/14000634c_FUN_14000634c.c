/*
 * FUN_14000634c at 14000634c
 * undefined8 __fastcall FUN_14000634c(longlong param_1, int param_2)
 * Address ranges: 14000634c-1400063f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_14000634c(longlong param_1,int param_2)

{
  uint *puVar1;
  byte *pbVar2;
  undefined8 uVar3;
  
  if (param_2 == 0x403) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0xc2);
    *puVar1 = *puVar1 ^ 1;
  }
  else if (param_2 == 0x404) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0xc2);
    *puVar1 = *puVar1 ^ 2;
  }
  else if (param_2 == 0x405) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0xc2);
    *puVar1 = *puVar1 ^ 4;
  }
  else if (param_2 == 0x406) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0xc6);
    *puVar1 = *puVar1 ^ 1;
  }
  else {
    if (param_2 == 0x407) {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x10) + 0xe6);
      *pbVar2 = *pbVar2 ^ 1;
    }
    else if (param_2 == 0x408) {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0xe2);
      *puVar1 = *puVar1 ^ 1;
    }
    else {
      if (param_2 != 0x409) goto LAB_1400063dd;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0xe2);
      *puVar1 = *puVar1 ^ 2;
    }
    (**(code **)**(undefined8 **)(param_1 + 0x18))();
  }
LAB_1400063dd:
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1);
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}

