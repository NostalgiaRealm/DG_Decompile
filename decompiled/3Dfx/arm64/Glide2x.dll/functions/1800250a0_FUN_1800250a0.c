/*
 * FUN_1800250a0 at 1800250a0
 * undefined __cdecl FUN_1800250a0(longlong param_1, longlong param_2)
 * Address ranges: 1800250a0-18002510f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800250a0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x3180);
  lVar2 = plVar3[1];
  if (*(char *)(*(longlong *)(lVar2 + 8) + 0x50) == '\0') {
    param_2 = lVar2 + 0x1d70;
  }
  FUN_1800533c8(*(undefined8 *)(lVar2 + 0x2978),plVar3[2],param_2,(undefined8 *)(lVar2 + 0x2970));
  bVar1 = FUN_180053350(*(longlong *)(plVar3[1] + 0x2978),plVar3[2]);
  if (!bVar1) {
    (**(code **)(*plVar3 + 0x98))(plVar3,0);
  }
  return;
}

