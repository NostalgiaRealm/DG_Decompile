/*
 * FUN_180043fc0 at 180043fc0
 * undefined __fastcall FUN_180043fc0(longlong param_1, ulonglong param_2, char param_3)
 * Address ranges: 180043fc0-1800440aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180043fc0(longlong param_1,ulonglong param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int6 local_res8;
  undefined2 uStackX_e;
  ulonglong local_res10;
  
  uVar2 = *(uint *)(param_1 + 0xfa10);
  if (uVar2 != 0) {
    uVar7 = 0;
    uVar8 = uVar2;
    do {
      uVar5 = uVar8 + uVar7 >> 1;
      uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar5 * 0x18);
      uVar4 = uVar5;
      if (uVar3 <= param_2) {
        if (param_2 <= uVar3) break;
        uVar7 = uVar5 + 1;
        uVar4 = uVar8;
        uVar5 = uVar7;
      }
      uVar8 = uVar4;
    } while (uVar8 != uVar7);
    if (((uVar5 != uVar2) &&
        (lVar1 = *(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar5 * 0x18,
        *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar5 * 0x18) == param_2)) &&
       (lVar1 != -0x10)) {
      lVar6 = 0;
      if ((*(char *)(lVar1 + 0x12) == '\0') || (lVar6 = 1, *(char *)(lVar1 + 0x13) == '\0')) {
        *(char *)(lVar6 + 0x12 + lVar1) = param_3 + '\x01';
      }
      *(undefined1 *)(lVar1 + 0x17) = 1;
      return;
    }
  }
  _local_res8 = CONCAT26(0x101,(uint6)(byte)(param_3 + 1) << 0x10);
  local_res10 = param_2;
  FUN_18004bb50((longlong *)(param_1 + 64000),&local_res10,(undefined8 *)&local_res8);
  return;
}

