/*
 * FUN_180014568 at 180014568
 * undefined __cdecl FUN_180014568(longlong param_1, longlong param_2)
 * Address ranges: 180014568-1800145d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014568(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x3300);
  lVar2 = plVar3[1];
  if (*(char *)(*(longlong *)(lVar2 + 8) + 0x50) == '\0') {
    param_2 = lVar2 + 0x1de8;
  }
  FUN_180056f58(*(undefined8 *)(lVar2 + 0x29f0),plVar3[2],param_2,(undefined8 *)(lVar2 + 0x29e8));
  bVar1 = FUN_180056ee0(*(longlong *)(plVar3[1] + 0x29f0),plVar3[2]);
  if (!bVar1) {
    (**(code **)(*plVar3 + 0x98))(plVar3,0);
  }
  return;
}

