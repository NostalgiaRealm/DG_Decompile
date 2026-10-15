/*
 * FUN_140007b70 at 140007b70
 * undefined8 __fastcall FUN_140007b70(longlong param_1, int param_2)
 * Address ranges: 140007b70-140007c12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140007b70(longlong param_1,int param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_2 == 0x3fe) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x21);
    *pbVar1 = *pbVar1 ^ 1;
  }
  else {
    if (param_2 == 0x401) {
      *(uint *)(*(longlong *)(param_1 + 0x18) + 0x18) =
           (uint)(*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) == 0);
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    else {
      if (param_2 != 0x402) {
        if (param_2 == 0x403) {
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x23);
          *pbVar1 = *pbVar1 ^ 1;
        }
        else if (param_2 == 0x404) {
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x24);
          *pbVar1 = *pbVar1 ^ 1;
        }
        else if (param_2 == 0x406) {
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x26);
          *pbVar1 = *pbVar1 ^ 1;
        }
        else if (param_2 == 0x40a) {
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x25);
          *pbVar1 = *pbVar1 ^ 1;
        }
        goto LAB_140007bfe;
      }
      *(bool *)(*(longlong *)(param_1 + 0x18) + 0x22) =
           *(char *)(*(longlong *)(param_1 + 0x18) + 0x22) == '\0';
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)();
  }
LAB_140007bfe:
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),1);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}

