/*
 * FUN_180038de0 at 180038de0
 * undefined FUN_180038de0(void)
 * Address ranges: 180038de0-180038eab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038de0(longlong param_1,ulonglong param_2,byte param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_10;
  undefined1 auStack_f [7];
  ulonglong local_8;
  
  uVar2 = *(uint *)(param_1 + 0xfa10);
  if (uVar2 != 0) {
    uVar8 = 0;
    uVar4 = uVar2;
    do {
      uVar7 = uVar4 + uVar8 >> 1;
      uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar7 * 0x18);
      uVar3 = uVar7;
      if (uVar5 <= param_2) {
        if (param_2 <= uVar5) break;
        uVar8 = uVar7 + 1;
        uVar7 = uVar7 + 1;
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
    } while (uVar4 != uVar8);
    if (((uVar7 != uVar2) &&
        (puVar6 = (ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar7 * 0x18),
        *puVar6 == param_2)) && (puVar1 = puVar6 + 2, puVar1 != (ulonglong *)0x0)) {
      *(char *)puVar1 = (char)*puVar1 + '\x01';
      *(undefined1 *)((longlong)puVar6 + 0x17) = 1;
      return;
    }
  }
  _local_10 = CONCAT71((uint7)param_3 << 0x28,1);
  _local_10 = CONCAT17(1,_local_10);
  local_8 = param_2;
  FUN_180041b90(param_1 + 64000,&local_8,&local_10);
  return;
}

