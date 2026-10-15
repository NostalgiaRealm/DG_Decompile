/*
 * FUN_1800ac064 at 1800ac064
 * bool __fastcall FUN_1800ac064(longlong param_1, undefined8 * param_2, uint param_3, int param_4, int param_5)
 * Address ranges: 1800ac064-1800ac0be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800ac064(longlong param_1,undefined8 *param_2,uint param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar1 = FUN_1800e0764(*(longlong *)(param_1 + 0x20),(longlong)param_2);
  if ((char)uVar1 != '\0') {
    param_5 = param_4;
  }
  uVar2 = FUN_1800e07c4(*(LPCRITICAL_SECTION *)(param_1 + 0x20),param_2,param_5,param_3);
  bVar3 = (char)uVar2 != '\0';
  if (bVar3) {
    FUN_1800aadd0(param_1,(ulonglong)param_3,(longlong)param_2);
  }
  return bVar3;
}

