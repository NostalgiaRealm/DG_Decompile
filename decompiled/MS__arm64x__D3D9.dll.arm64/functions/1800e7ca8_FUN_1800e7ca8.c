/*
 * FUN_1800e7ca8 at 1800e7ca8
 * undefined FUN_1800e7ca8(void)
 * Address ranges: 1800e7ca8-1800e7d23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800e7ca8(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  uint local_10;
  undefined8 local_c;
  
  local_c = 0;
  puVar1 = (undefined8 *)(param_1 + (param_2 & 0xffffffff) * 0x20);
  local_20 = 0;
  plVar3 = (longlong *)*puVar1;
  bVar2 = *(char *)(puVar1 + 3) != '\0';
  local_18 = 4;
  if (!bVar2) {
    local_18 = 1;
  }
  uStack_14 = 2;
  if (!bVar2) {
    uStack_14 = 0;
  }
  local_10 = (uint)bVar2;
  (**(code **)(*plVar3 + 0xd8))(plVar3,&local_18,0,param_3,0,0,&DAT_180235458,&local_20);
  return local_20;
}

