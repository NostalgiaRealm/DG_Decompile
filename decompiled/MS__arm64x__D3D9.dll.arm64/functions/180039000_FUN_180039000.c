/*
 * FUN_180039000 at 180039000
 * undefined FUN_180039000(void)
 * Address ranges: 180039000-1800390cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039000(longlong param_1,ulonglong param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  int7 local_10;
  undefined1 uStack_9;
  ulonglong local_8;
  
  uVar1 = *(uint *)(param_1 + 0xfa10);
  if (uVar1 != 0) {
    uVar6 = 0;
    uVar3 = uVar1;
    do {
      uVar5 = uVar3 + uVar6 >> 1;
      uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar5 * 0x18);
      uVar2 = uVar5;
      if (uVar4 <= param_2) {
        if (param_2 <= uVar4) break;
        uVar6 = uVar5 + 1;
        uVar5 = uVar5 + 1;
        uVar2 = uVar3;
      }
      uVar3 = uVar2;
    } while (uVar3 != uVar6);
    if (((uVar5 != uVar1) &&
        (puVar7 = (ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar5 * 0x18),
        *puVar7 == param_2)) && (puVar7 != (ulonglong *)0xfffffffffffffff0)) {
      *(char *)((longlong)puVar7 + 0x11) = *(char *)((longlong)puVar7 + 0x11) + '\x01';
      *(undefined1 *)((longlong)puVar7 + 0x17) = 1;
      return;
    }
  }
  local_10 = (uint7)param_3 << 0x30;
  _local_10 = CONCAT17(1,CONCAT52((int5)((uint7)local_10 >> 0x10),0x100));
  local_8 = param_2;
  FUN_180041b90(param_1 + 64000,&local_8,&local_10);
  return;
}

