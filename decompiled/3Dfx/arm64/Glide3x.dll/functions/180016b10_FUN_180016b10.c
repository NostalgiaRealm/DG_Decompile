/*
 * FUN_180016b10 at 180016b10
 * undefined __cdecl FUN_180016b10(longlong * param_1, longlong param_2, char param_3)
 * Address ranges: 180016b10-180016b8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016b10(longlong *param_1,longlong param_2,char param_3)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if (*(char *)(*(longlong *)(lVar2 + 8) + 0x50) == '\0') {
    param_2 = lVar2 + 0x1de8;
  }
  FUN_180056f58(*(undefined8 *)(lVar2 + 0x29f0),param_1[2],param_2,(undefined8 *)(lVar2 + 0x29e8));
  bVar1 = FUN_180056ee0(*(longlong *)(param_1[1] + 0x29f0),param_1[2]);
  if (!bVar1 && param_3 == '\0') {
    (**(code **)(*param_1 + 0x98))(param_1,0);
  }
  return;
}

