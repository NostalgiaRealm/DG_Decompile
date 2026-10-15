/*
 * FUN_18003b628 at 18003b628
 * ulonglong __cdecl FUN_18003b628(longlong param_1, ulonglong param_2, uint param_3)
 * Address ranges: 18003b628-18003b703
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18003b628(longlong param_1,ulonglong param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int local_40 [4];
  ulonglong uVar5;
  
  local_40[0] = FUN_18003b868(param_1,(undefined8 *)
                                      (*(longlong *)(param_1 + 0x58) + (param_2 & 0xffffffff)),
                              param_3);
  uVar3 = (ulonglong)(local_40[0] != -1);
  if (local_40[0] != -1) {
    uVar5 = 0;
    uVar4 = 0;
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + 0x90) + (ulonglong)*(uint *)(param_1 + 0x80) * 0x18 + 8) +
            (ulonglong)*(uint *)(param_1 + 0x84) * 0x28;
    if (*(int *)(lVar1 + 0x10) != 0) {
      do {
        uVar4 = (uint)uVar5;
        uVar2 = FUN_1800637c8((byte *)(*(longlong *)(param_1 + 0x70) +
                                      (ulonglong)*(uint *)(*(longlong *)(lVar1 + 8) + uVar5 * 4)),
                              (byte *)(*(longlong *)(param_1 + 0x70) + (longlong)local_40[0]));
        if (uVar2 == 0) {
          *(uint *)(param_1 + 0x7c) = (*(int *)(param_1 + 0x7c) - param_3) + -1;
          break;
        }
        uVar4 = uVar4 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < *(uint *)(lVar1 + 0x10));
    }
    if (uVar4 == *(uint *)(lVar1 + 0x10)) {
      uVar3 = FUN_18003be60((longlong *)(lVar1 + 8),local_40);
      uVar3 = uVar3 & 0xffffffff;
    }
  }
  return uVar3;
}

