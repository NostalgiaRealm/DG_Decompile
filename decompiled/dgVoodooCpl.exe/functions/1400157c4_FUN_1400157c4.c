/*
 * FUN_1400157c4 at 1400157c4
 * undefined1 __fastcall FUN_1400157c4(longlong param_1)
 * Address ranges: 1400157c4-1400158e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1400157c4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 uVar8;
  bool bVar9;
  int local_58 [2];
  longlong local_50;
  undefined8 local_48;
  
  uVar5 = 0;
  uVar8 = 1;
  if (*(uint *)(param_1 + 0x60) != 0) {
    local_58[0] = FUN_140015c08(param_1,*(undefined8 **)(param_1 + 0x58),*(uint *)(param_1 + 0x60));
    uVar8 = local_58[0] != -1;
    if ((bool)uVar8) {
      uVar6 = 1;
      uVar5 = 1;
      bVar9 = *(uint *)(param_1 + 0x98) == 1;
      if (1 < *(uint *)(param_1 + 0x98)) {
        do {
          uVar5 = (uint)uVar6;
          iVar3 = FUN_140024ce8((byte *)((ulonglong)
                                         *(uint *)(*(longlong *)(param_1 + 0x90) + uVar6 * 0x18) +
                                        *(longlong *)(param_1 + 0x70)),
                                (byte *)((longlong)local_58[0] + *(longlong *)(param_1 + 0x70)));
          if (iVar3 == 0) {
            *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + (-1 - *(int *)(param_1 + 0x60));
            break;
          }
          uVar5 = uVar5 + 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(param_1 + 0x98));
        bVar9 = uVar5 == *(uint *)(param_1 + 0x98);
      }
      if (bVar9) {
        local_50 = 0;
        local_48 = 0;
        uVar4 = FUN_140015f04((longlong *)(param_1 + 0x90),local_58);
        uVar8 = (undefined1)uVar4;
        if (local_50 != 0) {
          plVar1 = (longlong *)(local_50 + -8);
          lVar7 = *plVar1;
          lVar2 = local_50 + lVar7 * 0x28;
          for (; lVar7 != 0; lVar7 = lVar7 + -1) {
            FUN_140024260(*(LPVOID *)(lVar2 + -0x10));
            FUN_140024260(*(LPVOID *)(lVar2 + -0x20));
            lVar2 = lVar2 + -0x28;
          }
          FUN_140024260(plVar1);
        }
      }
    }
  }
  *(uint *)(param_1 + 0x80) = uVar5;
  return uVar8;
}

