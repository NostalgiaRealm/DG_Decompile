/*
 * FUN_180040d8c at 180040d8c
 * undefined8 __fastcall FUN_180040d8c(longlong param_1)
 * Address ranges: 180040d8c-180040dfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180040d8c(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined1 local_28 [16];
  longlong local_18;
  
  uVar1 = FUN_18004068c(param_1);
  if ((char)uVar1 == '\0') {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    if (*(int *)(param_1 + 0x28) == 1) {
      plVar2 = (longlong *)
               (*(longlong *)
                 (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10) +
               0x40);
      uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,local_28,2,0,0);
      if (local_18 != 0) {
        uVar1 = (**(code **)(*(longlong *)
                              (*(longlong *)
                                (*(longlong *)(param_1 + 0x38) +
                                (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10) + 0x40) + 0x28))();
      }
    }
    uVar1 = CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1;
}

