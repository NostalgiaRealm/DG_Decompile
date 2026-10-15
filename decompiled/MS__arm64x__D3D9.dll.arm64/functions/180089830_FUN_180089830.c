/*
 * FUN_180089830 at 180089830
 * undefined FUN_180089830(void)
 * Address ranges: 180089830-180089913
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180089830(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int local_30 [8];
  
  if ((param_2 & 1) != 0) {
    if (*(longlong *)(param_1 + 0x50) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x40))(*(longlong **)(param_1 + 0x48),local_30)
      ;
      if (local_30[0] == 0x1c) {
        local_30[0] = 0x1d;
      }
      else if (local_30[0] == 0x47) {
        local_30[0] = 0x48;
      }
      else if (local_30[0] == 0x4a) {
        local_30[0] = 0x4b;
      }
      else if (local_30[0] == 0x4d) {
        local_30[0] = 0x4e;
      }
      else {
        local_30[0] = 0;
      }
      if (local_30[0] == 0) {
        *(longlong **)(param_1 + 0x50) = *(longlong **)(param_1 + 0x48);
        (**(code **)(**(longlong **)(param_1 + 0x48) + 8))();
      }
      else {
        plVar1 = *(longlong **)
                  (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1cf10) +
                   (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x28) * 0x18c0 + 0x6b0);
        (**(code **)(*plVar1 + 0x38))
                  (plVar1,*(undefined8 *)(param_1 + 0x40),local_30,param_1 + 0x50);
      }
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
      return *(longlong *)(param_1 + 0x50);
    }
  }
  return *(longlong *)(param_1 + 0x48);
}

