/*
 * FUN_18008e464 at 18008e464
 * undefined __fastcall FUN_18008e464(longlong param_1, longlong param_2)
 * Address ranges: 18008e464-18008e52b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008e464(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int local_28 [8];
  
  plVar1 = (longlong *)(param_1 + 0x38);
  if (*plVar1 != 0) {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x40))(*(longlong **)(param_1 + 0x28),local_28);
  if ((local_28[0] != 0xb) && (local_28[0] != 0x18)) {
    if (local_28[0] == 0x1c) {
      local_28[0] = 0x1d;
    }
    else if (local_28[0] == 0x47) {
      local_28[0] = 0x48;
    }
    else if (local_28[0] == 0x4a) {
      local_28[0] = 0x4b;
    }
    else {
      if (local_28[0] != 0x4d) {
        local_28[0] = 0;
        goto LAB_18008e509;
      }
      local_28[0] = 0x4e;
    }
  }
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x18);
  }
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x10) + 0x38))
            ((longlong *)**(undefined8 **)(param_1 + 0x10),param_2,local_28,plVar1);
LAB_18008e509:
  if (*plVar1 == 0) {
    *plVar1 = (longlong)*(longlong **)(param_1 + 0x28);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
  }
  return;
}

