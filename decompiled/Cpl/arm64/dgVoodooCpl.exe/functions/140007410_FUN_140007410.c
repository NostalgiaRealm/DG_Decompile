/*
 * FUN_140007410 at 140007410
 * BOOL __cdecl FUN_140007410(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140007410-14000748f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

BOOL FUN_140007410(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  BOOL BVar2;
  LPCSTR pCVar3;
  CHAR aCStack_90 [128];
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x10);
  if (uVar1 == 0) {
    pCVar3 = "B&&W";
  }
  else if (uVar1 == 100) {
    pCVar3 = "Norm";
  }
  else {
    if (uVar1 != 400) {
      FUN_140024880(aCStack_90,"%d%%",(ulonglong)uVar1,param_4,param_5,param_6,param_7,param_8);
      goto LAB_140007474;
    }
    pCVar3 = "Full";
  }
  FUN_140024880(aCStack_90,pCVar3,(ulonglong)uVar1,param_4,param_5,param_6,param_7,param_8);
LAB_140007474:
  BVar2 = FUN_14000fc58(param_1,0x400,aCStack_90);
  return BVar2;
}

