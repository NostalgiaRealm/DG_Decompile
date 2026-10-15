/*
 * FUN_180015e38 at 180015e38
 * undefined8 __fastcall FUN_180015e38(longlong param_1, undefined8 param_2, longlong * param_3, int * param_4)
 * Address ranges: 180015e38-180015e97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180015e38(longlong param_1,undefined8 param_2,longlong *param_3,int *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)*(uint *)(param_1 + 0xa0) * 600;
  if ((*param_3 == *(longlong *)(&DAT_180112ad8 + lVar2)) &&
     (*(longlong *)(&DAT_180112ad8 + lVar2) != 0)) {
    FUN_18002efb0((ulonglong)*(uint *)(param_1 + 0xa0),param_2,(HDC)*param_3,param_4);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  if (*param_4 == 1) {
    FUN_18002fce8(*(longlong *)(&DAT_180112ad0 + lVar2));
  }
  return uVar1;
}

