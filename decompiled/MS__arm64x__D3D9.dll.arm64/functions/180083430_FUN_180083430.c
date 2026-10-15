/*
 * FUN_180083430 at 180083430
 * undefined FUN_180083430(void)
 * Address ranges: 180083430-18008351b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180083430(longlong param_1,longlong param_2)

{
  uint local_30 [8];
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x40))(*(longlong **)(param_1 + 0x28),local_30);
  if ((local_30[0] < 0x19) && ((0x1000800U >> (ulonglong)(local_30[0] & 0x1f) & 1) != 0)) {
LAB_1800834a0:
    if (local_30[0] == 0) goto LAB_1800834f4;
  }
  else if (local_30[0] == 0x1c) {
    local_30[0] = 0x1d;
  }
  else if (local_30[0] == 0x47) {
    local_30[0] = 0x48;
  }
  else if (local_30[0] == 0x4a) {
    local_30[0] = 0x4b;
  }
  else {
    if (local_30[0] != 0x4d) {
      local_30[0] = 0;
      goto LAB_1800834a0;
    }
    local_30[0] = 0x4e;
  }
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x18);
  }
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x10) + 0x38))
            ((longlong *)**(undefined8 **)(param_1 + 0x10),param_2,local_30,param_1 + 0x38);
LAB_1800834f4:
  if (*(longlong *)(param_1 + 0x38) == 0) {
    *(longlong **)(param_1 + 0x38) = *(longlong **)(param_1 + 0x28);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
  }
  return;
}

