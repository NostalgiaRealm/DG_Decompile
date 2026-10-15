/*
 * FUN_180147480 at 180147480
 * undefined FUN_180147480(void)
 * Address ranges: 180147480-18014754b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180147480(longlong param_1,ulonglong param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int7 local_10;
  undefined1 uStack_9;
  ulonglong local_8;
  
  uVar1 = *(uint *)(param_1 + 0xfa10);
  if (uVar1 != 0) {
    uVar7 = 0;
    uVar4 = uVar1;
    do {
      uVar6 = uVar4 + uVar7 >> 1;
      uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar6 * 0x18);
      uVar2 = uVar6;
      if (uVar5 <= param_2) {
        if (param_2 <= uVar5) break;
        uVar7 = uVar6 + 1;
        uVar6 = uVar6 + 1;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
    } while (uVar4 != uVar7);
    if (((uVar6 != uVar1) &&
        (puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar6 * 0x18),
        *puVar3 == param_2)) && (puVar3 != (ulonglong *)0xfffffffffffffff0)) {
      *(char *)((longlong)puVar3 + 0x11) = *(char *)((longlong)puVar3 + 0x11) + '\x01';
      *(undefined1 *)((longlong)puVar3 + 0x17) = 1;
      return;
    }
  }
  local_10 = (uint7)param_3 << 0x30;
  _local_10 = CONCAT17(1,CONCAT52((int5)((uint7)local_10 >> 0x10),0x100));
  local_8 = param_2;
  FUN_180150a20(param_1 + 64000,&local_8,&local_10);
  return;
}

