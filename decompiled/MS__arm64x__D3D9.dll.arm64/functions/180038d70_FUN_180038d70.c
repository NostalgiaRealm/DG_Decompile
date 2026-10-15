/*
 * FUN_180038d70 at 180038d70
 * undefined FUN_180038d70(void)
 * Address ranges: 180038d70-180038dd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038d70(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 local_10;
  uint local_8;
  uint local_4;
  
  plVar2 = *(longlong **)(param_1 + 0xfce0);
  uVar1 = *(uint *)(param_1 + 0xfd08);
  local_10 = 0;
  local_8 = *(uint *)((longlong)plVar2 + 0x24) >> (ulonglong)(uVar1 & 0x1f);
  if (local_8 == 0) {
    local_8 = 1;
  }
  local_4 = *(uint *)(plVar2 + 5) >> (ulonglong)(uVar1 & 0x1f);
  if (local_4 == 0) {
    local_4 = 1;
  }
  (**(code **)(*plVar2 + 0x18))
            (plVar2,uVar1 + *(int *)(param_1 + 0xfd0c) * *(int *)((longlong)plVar2 + 0x3c),&local_10
            );
  return;
}

