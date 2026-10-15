/*
 * FUN_1801f44f0 at 1801f44f0
 * undefined FUN_1801f44f0(void)
 * Address ranges: 1801f44f0-1801f462b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1801f44f0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  int local_60 [2];
  longlong local_58;
  undefined8 uStack_50;
  
  uVar7 = 1;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    local_60[0] = FUN_1801f4b08(param_1,*(undefined8 *)(param_1 + 0x58));
    uVar7 = (uint)(local_60[0] != -1);
    if (local_60[0] != -1) {
      uVar5 = 1;
      if (1 < *(uint *)(param_1 + 0x98)) {
        do {
          iVar4 = FUN_180222cb8(*(longlong *)(param_1 + 0x70) +
                                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x90) + uVar5 * 0x18),
                                *(longlong *)(param_1 + 0x70) + (longlong)local_60[0]);
          if (iVar4 == 0) {
            *(int *)(param_1 + 0x7c) = (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x60)) + -1;
            break;
          }
          uVar1 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 0x98));
      }
      iVar4 = (int)uVar5;
      if (iVar4 == *(int *)(param_1 + 0x98)) {
        local_58 = 0;
        uStack_50 = 0;
        uVar7 = FUN_1801f4ee8(param_1 + 0x90,local_60);
        lVar3 = local_58;
        if (local_58 != 0) {
          lVar6 = *(longlong *)(local_58 + -8);
          lVar2 = local_58 + lVar6 * 0x28;
          for (; lVar6 != 0; lVar6 = lVar6 + -1) {
            FUN_1802229d8(*(undefined8 *)(lVar2 + -0x10));
            FUN_1802229d8(*(undefined8 *)(lVar2 + -0x20));
            lVar2 = lVar2 + -0x28;
          }
          FUN_1802229d8(lVar3 + -8,*(longlong *)(lVar3 + -8) * 0x28 + 8);
        }
      }
    }
  }
  *(int *)(param_1 + 0x80) = iVar4;
  return uVar7;
}

