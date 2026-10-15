/*
 * FUN_180050748 at 180050748
 * undefined __cdecl FUN_180050748(longlong param_1, uint param_2, ulonglong param_3, undefined8 param_4, longlong * param_5, int * param_6, int * param_7)
 * Address ranges: 180050748-1800507cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050748(longlong param_1,uint param_2,ulonglong param_3,undefined8 param_4,
                  longlong *param_5,int *param_6,int *param_7)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = param_1 + (ulonglong)param_2 * 0x18c0;
  uVar3 = param_3 & 0xffffffff;
  lVar1 = lVar4 + uVar3 * 8;
  if (((*(longlong *)(lVar1 + 0xa70) == *param_5) &&
      (lVar2 = lVar4 + uVar3 * 4, *(int *)(lVar2 + 0xaf0) == *param_6)) &&
     (*(int *)(lVar2 + 0xb30) == *param_7)) {
    return;
  }
  *(longlong *)(lVar1 + 0xa70) = *param_5;
  lVar2 = lVar4 + uVar3 * 4;
  *(int *)(lVar2 + 0xaf0) = *param_6;
  *(int *)(lVar2 + 0xb30) = *param_7;
                    /* WARNING: Could not recover jumptable at 0x0001800507c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar4 + 0x6b8) + 0x90))
            (*(longlong **)(lVar4 + 0x6b8),uVar3,1,lVar1 + 0xa70,lVar2 + 0xaf0,lVar2 + 0xb30);
  return;
}

