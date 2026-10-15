/*
 * FUN_18000bb80 at 18000bb80
 * ulonglong __cdecl FUN_18000bb80(longlong param_1)
 * Address ranges: 18000bb80-18000bcbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000bb80(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int local_60 [2];
  longlong local_58;
  undefined8 uStack_50;
  
  uVar7 = 1;
  iVar5 = 0;
  if (*(uint *)(param_1 + 0x60) != 0) {
    local_60[0] = FUN_18000c188(param_1,*(undefined8 **)(param_1 + 0x58),*(uint *)(param_1 + 0x60));
    uVar7 = (ulonglong)(local_60[0] != -1);
    if (local_60[0] != -1) {
      uVar6 = 1;
      if (1 < *(uint *)(param_1 + 0x98)) {
        do {
          uVar3 = FUN_180060ae0((byte *)(*(longlong *)(param_1 + 0x70) +
                                        (ulonglong)
                                        *(uint *)(*(longlong *)(param_1 + 0x90) + uVar6 * 0x18)),
                                (byte *)(*(longlong *)(param_1 + 0x70) + (longlong)local_60[0]));
          if (uVar3 == 0) {
            *(int *)(param_1 + 0x7c) = (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x60)) + -1;
            break;
          }
          uVar3 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x98));
      }
      iVar5 = (int)uVar6;
      if (iVar5 == *(int *)(param_1 + 0x98)) {
        local_58 = 0;
        uStack_50 = 0;
        uVar7 = FUN_18000c5d0((longlong *)(param_1 + 0x90),local_60);
        lVar2 = local_58;
        uVar7 = uVar7 & 0xffffffff;
        if (local_58 != 0) {
          lVar4 = *(longlong *)(local_58 + -8);
          lVar1 = local_58 + lVar4 * 0x28;
          for (; lVar4 != 0; lVar4 = lVar4 + -1) {
            thunk_FUN_180060a18(*(LPVOID *)(lVar1 + -0x10));
            thunk_FUN_180060a18(*(LPVOID *)(lVar1 + -0x20));
            lVar1 = lVar1 + -0x28;
          }
          thunk_FUN_180060a18((LPVOID)(lVar2 + -8));
        }
      }
    }
  }
  *(int *)(param_1 + 0x80) = iVar5;
  return uVar7;
}

