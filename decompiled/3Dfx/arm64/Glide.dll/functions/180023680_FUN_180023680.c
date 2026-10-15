/*
 * FUN_180023680 at 180023680
 * undefined __cdecl FUN_180023680(longlong * param_1, longlong param_2, char param_3)
 * Address ranges: 180023680-1800236fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023680(longlong *param_1,longlong param_2,char param_3)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if (*(char *)(*(longlong *)(lVar2 + 8) + 0x50) == '\0') {
    param_2 = lVar2 + 0x1d70;
  }
  FUN_180054218(*(undefined8 *)(lVar2 + 0x2978),param_1[2],param_2,(undefined8 *)(lVar2 + 0x2970));
  bVar1 = FUN_1800541a0(*(longlong *)(param_1[1] + 0x2978),param_1[2]);
  if (!bVar1 && param_3 == '\0') {
    (**(code **)(*param_1 + 0x98))(param_1,0);
  }
  return;
}

