/*
 * FUN_180020fb8 at 180020fb8
 * undefined __fastcall FUN_180020fb8(longlong * param_1, longlong param_2, char param_3)
 * Address ranges: 180020fb8-180021028
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020fb8(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = param_1[1];
  if (*(char *)(*(longlong *)(lVar1 + 8) + 0x50) == '\0') {
    param_2 = lVar1 + 0x1d70;
  }
  FUN_18005084c(*(longlong *)(lVar1 + 0x2978),param_1[2],param_2,(undefined8 *)(lVar1 + 0x2970));
  uVar2 = FUN_180050234(*(longlong *)(param_1[1] + 0x2978),param_1[2]);
  if ((char)uVar2 == '\0' && param_3 == '\0') {
    (**(code **)(*param_1 + 0x98))(param_1,0);
  }
  return;
}

