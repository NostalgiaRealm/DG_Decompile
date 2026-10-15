/*
 * FUN_1800946d0 at 1800946d0
 * undefined __fastcall FUN_1800946d0(longlong param_1, ulonglong param_2, ulonglong param_3)
 * Address ranges: 1800946d0-1800947bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800946d0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0xb88) = param_1;
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0x684);
  *piVar1 = *piVar1 + 1;
  FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_2,param_3,0,0);
  uVar3 = FUN_1800e3108(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508));
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
  piVar1 = (int *)(lVar2 + 0x684);
  *piVar1 = *piVar1 + -1;
  if ((((*piVar1 == 0) && (*(int *)(lVar2 + 0x680) <= *(int *)(lVar2 + 0x678))) &&
      (uVar4 = FUN_1800e2ae8(lVar2 + 8,'\0'), (char)uVar4 != '\0')) && (uVar3 != 0)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
    do {
      uVar5 = FUN_1800e3070(lVar2);
    } while (uVar5 < uVar3);
  }
  else {
    FUN_1800eab50(*(longlong **)(*(longlong *)(param_1 + 0x1cf10) + 0x1b500),param_2,(uint)param_3);
  }
  return;
}

