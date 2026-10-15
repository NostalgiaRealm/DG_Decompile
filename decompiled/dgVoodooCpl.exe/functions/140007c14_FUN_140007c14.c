/*
 * FUN_140007c14 at 140007c14
 * undefined __fastcall FUN_140007c14(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 140007c14-140007c8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140007c14(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  LPCSTR pCVar2;
  CHAR local_88 [128];
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x10);
  if (uVar1 == 0) {
    pCVar2 = "B&&W";
  }
  else if (uVar1 == 100) {
    pCVar2 = "Norm";
  }
  else {
    if (uVar1 != 400) {
      FUN_140024290(local_88,"%d%%",(ulonglong)uVar1,param_4);
      goto LAB_140007c70;
    }
    pCVar2 = "Full";
  }
  FUN_140024290(local_88,pCVar2,(ulonglong)uVar1,param_4);
LAB_140007c70:
  FUN_14000e180(param_1,0x400,local_88);
  return;
}

