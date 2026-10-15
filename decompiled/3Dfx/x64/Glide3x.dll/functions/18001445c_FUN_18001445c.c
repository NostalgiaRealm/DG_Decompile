/*
 * FUN_18001445c at 18001445c
 * undefined __fastcall FUN_18001445c(longlong * param_1, longlong param_2, char param_3)
 * Address ranges: 18001445c-1800144cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001445c(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = param_1[1];
  if (*(char *)(*(longlong *)(lVar1 + 8) + 0x50) == '\0') {
    param_2 = lVar1 + 0x1de8;
  }
  FUN_180052e58(*(longlong *)(lVar1 + 0x29f0),param_1[2],param_2,(undefined8 *)(lVar1 + 0x29e8));
  uVar2 = FUN_180052840(*(longlong *)(param_1[1] + 0x29f0),param_1[2]);
  if ((char)uVar2 == '\0' && param_3 == '\0') {
    (**(code **)(*param_1 + 0x98))(param_1,0);
  }
  return;
}

