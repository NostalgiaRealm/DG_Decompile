/*
 * FUN_1800393a0 at 1800393a0
 * undefined FUN_1800393a0(void)
 * Address ranges: 1800393a0-180039483
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800393a0(longlong param_1,ulonglong param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int6 local_10;
  undefined2 uStack_a;
  ulonglong local_8;
  
  uVar1 = *(uint *)(param_1 + 0xfa10);
  if (uVar1 != 0) {
    uVar8 = 0;
    uVar3 = uVar1;
    do {
      uVar7 = uVar3 + uVar8 >> 1;
      uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar7 * 0x18);
      uVar2 = uVar7;
      if (uVar5 <= param_2) {
        if (param_2 <= uVar5) break;
        uVar8 = uVar7 + 1;
        uVar7 = uVar7 + 1;
        uVar2 = uVar3;
      }
      uVar3 = uVar2;
    } while (uVar3 != uVar8);
    if (((uVar7 != uVar1) &&
        (puVar4 = (ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar7 * 0x18),
        *puVar4 == param_2)) && (puVar4 != (ulonglong *)0xfffffffffffffff0)) {
      lVar6 = 0;
      if ((*(char *)((longlong)puVar4 + 0x12) == '\0') ||
         (lVar6 = 1, *(char *)((longlong)puVar4 + 0x13) == '\0')) {
        *(char *)((longlong)puVar4 + lVar6 + 0x12) = param_3 + '\x01';
      }
      *(undefined1 *)((longlong)puVar4 + 0x17) = 1;
      return;
    }
  }
  _local_10 = CONCAT26(0x101,(uint6)(byte)(param_3 + 1) << 0x10);
  local_8 = param_2;
  FUN_180041b90(param_1 + 64000,&local_8,&local_10);
  return;
}

