/*
 * FUN_180022830 at 180022830
 * undefined __cdecl FUN_180022830(longlong * param_1, longlong param_2, char param_3)
 * Address ranges: 180022830-1800228ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180022830(longlong *param_1,longlong param_2,char param_3)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if (*(char *)(*(longlong *)(lVar2 + 8) + 0x50) == '\0') {
    param_2 = lVar2 + 0x1d70;
  }
  FUN_1800533c8(*(undefined8 *)(lVar2 + 0x2978),param_1[2],param_2,(undefined8 *)(lVar2 + 0x2970));
  bVar1 = FUN_180053350(*(longlong *)(param_1[1] + 0x2978),param_1[2]);
  if (!bVar1 && param_3 == '\0') {
    (**(code **)(*param_1 + 0x98))(param_1,0);
  }
  return;
}

