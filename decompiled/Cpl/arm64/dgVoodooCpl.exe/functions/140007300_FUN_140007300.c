/*
 * FUN_140007300 at 140007300
 * undefined8 __cdecl FUN_140007300(longlong param_1, int param_2)
 * Address ranges: 140007300-140007303
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140007300(longlong param_1,int param_2)

{
  if (param_2 == 0x3fe) {
    *(byte *)(*(longlong *)(param_1 + 0x18) + 0x21) =
         *(byte *)(*(longlong *)(param_1 + 0x18) + 0x21) ^ 1;
  }
  else {
    if (param_2 == 0x401) {
      *(uint *)(*(longlong *)(param_1 + 0x18) + 0x18) =
           (uint)(*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) == 0);
    }
    else {
      if (param_2 != 0x402) {
        if (param_2 == 0x403) {
          *(byte *)(*(longlong *)(param_1 + 0x18) + 0x23) =
               *(byte *)(*(longlong *)(param_1 + 0x18) + 0x23) ^ 1;
        }
        else if (param_2 == 0x404) {
          *(byte *)(*(longlong *)(param_1 + 0x18) + 0x24) =
               *(byte *)(*(longlong *)(param_1 + 0x18) + 0x24) ^ 1;
        }
        else if (param_2 == 0x406) {
          *(byte *)(*(longlong *)(param_1 + 0x18) + 0x26) =
               *(byte *)(*(longlong *)(param_1 + 0x18) + 0x26) ^ 1;
        }
        else if (param_2 == 0x40a) {
          *(byte *)(*(longlong *)(param_1 + 0x18) + 0x25) =
               *(byte *)(*(longlong *)(param_1 + 0x18) + 0x25) ^ 1;
        }
        goto LAB_1400073e8;
      }
      *(bool *)(*(longlong *)(param_1 + 0x18) + 0x22) =
           *(char *)(*(longlong *)(param_1 + 0x18) + 0x22) == '\0';
    }
    (**(code **)**(undefined8 **)(param_1 + 0x20))();
  }
LAB_1400073e8:
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),1);
  return 1;
}

