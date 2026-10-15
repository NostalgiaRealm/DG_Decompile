/*
 * FUN_18005e9e0 at 18005e9e0
 * longlong * __cdecl FUN_18005e9e0(longlong param_1, ulonglong param_2, int * param_3)
 * Address ranges: 18005e9e0-18005ea8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_18005e9e0(longlong param_1,ulonglong param_2,int *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  uint local_20;
  undefined8 local_1c;
  
  local_1c = 0;
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x20;
  bVar2 = *(char *)(lVar1 + 0x6e8) != '\0';
  local_28 = 4;
  if (!bVar2) {
    local_28 = 1;
  }
  uStack_24 = 2;
  if (!bVar2) {
    uStack_24 = 0;
  }
  local_20 = (uint)bVar2;
  local_30 = FUN_18005c278(param_1 + (param_2 & 0xffffffff) * 0x1ac0 + 0x21b8,
                           (undefined8 *)&local_28,0,param_3);
  if (local_30 == (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x6d0);
    local_30 = (longlong *)0x0;
    (**(code **)(*plVar3 + 0xd8))(plVar3,&local_28,0,param_3,0,0,&DAT_180064c58,&local_30);
  }
  return local_30;
}

