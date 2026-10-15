/*
 * FUN_18005a5f0 at 18005a5f0
 * undefined8 * __cdecl FUN_18005a5f0(longlong param_1, uint param_2, undefined4 param_3, int param_4)
 * Address ranges: 18005a5f0-18005a66b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18005a5f0(longlong param_1,uint param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 8);
  if (param_4 == 1) {
    lVar4 = 0x1e20;
  }
  else if (param_4 == 2) {
    lVar4 = 0x1eb0;
  }
  else {
    if (param_4 != 3) {
      lVar4 = 0;
      goto LAB_18005a640;
    }
    lVar4 = 8000;
  }
  lVar4 = lVar5 + (ulonglong)param_2 * 0x1ac0 + lVar4;
LAB_18005a640:
  lVar1 = 0;
  if (lVar5 != 0) {
    lVar1 = lVar5 + 0x6d0;
  }
  puVar3 = FUN_180045e48(lVar1,param_2,lVar4,param_3,0);
  puVar2 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3 + 8;
  }
  return puVar2;
}

