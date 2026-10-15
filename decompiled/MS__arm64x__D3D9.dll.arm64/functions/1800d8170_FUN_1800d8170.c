/*
 * FUN_1800d8170 at 1800d8170
 * undefined FUN_1800d8170(void)
 * Address ranges: 1800d8170-1800d82ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800d8170(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int local_60 [2];
  longlong local_58;
  undefined8 uStack_50;
  
  uVar7 = 1;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    local_60[0] = FUN_1800d8778(param_1,*(undefined8 *)(param_1 + 0x58));
    uVar7 = (uint)(local_60[0] != -1);
    if (local_60[0] != -1) {
      uVar6 = 1;
      if (1 < *(uint *)(param_1 + 0x98)) {
        do {
          iVar4 = func_0x000180222cb8(*(longlong *)(param_1 + 0x70) +
                                      (ulonglong)
                                      *(uint *)(*(longlong *)(param_1 + 0x90) + uVar6 * 0x18),
                                      *(longlong *)(param_1 + 0x70) + (longlong)local_60[0]);
          if (iVar4 == 0) {
            *(int *)(param_1 + 0x7c) = (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x60)) + -1;
            break;
          }
          uVar1 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 0x98));
      }
      iVar4 = (int)uVar6;
      if (iVar4 == *(int *)(param_1 + 0x98)) {
        local_58 = 0;
        uStack_50 = 0;
        uVar7 = FUN_1800d8a80(param_1 + 0x90,local_60);
        lVar3 = local_58;
        if (local_58 != 0) {
          lVar5 = *(longlong *)(local_58 + -8);
          lVar2 = local_58 + lVar5 * 0x28;
          for (; lVar5 != 0; lVar5 = lVar5 + -1) {
            thunk_FUN_180102fc0(*(undefined8 *)(lVar2 + -0x10));
            thunk_FUN_180102fc0(*(undefined8 *)(lVar2 + -0x20));
            lVar2 = lVar2 + -0x28;
          }
          thunk_FUN_180102fc0(lVar3 + -8,*(longlong *)(lVar3 + -8) * 0x28 + 8);
        }
      }
    }
  }
  *(int *)(param_1 + 0x80) = iVar4;
  return uVar7;
}

