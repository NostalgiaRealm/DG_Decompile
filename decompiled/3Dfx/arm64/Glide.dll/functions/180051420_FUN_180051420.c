/*
 * FUN_180051420 at 180051420
 * undefined __cdecl FUN_180051420(longlong param_1, ulonglong param_2, float * param_3)
 * Address ranges: 180051420-1800514cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051420(longlong param_1,ulonglong param_2,float *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  if ((((*param_3 != *(float *)(lVar1 + 0xb80)) || (param_3[1] != *(float *)(lVar1 + 0xb84))) ||
      (param_3[2] != *(float *)(lVar1 + 0xb88))) ||
     (((param_3[3] != *(float *)(lVar1 + 0xb8c) || (param_3[4] != *(float *)(lVar1 + 0xb90))) ||
      (param_3[5] != *(float *)(lVar1 + 0xb94))))) {
    (**(code **)(**(longlong **)(lVar1 + 0x6b8) + 0x160))(*(longlong **)(lVar1 + 0x6b8),1,param_3);
    uVar2 = *(undefined8 *)param_3;
    *(undefined8 *)(lVar1 + 0xb88) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(lVar1 + 0xb80) = uVar2;
    *(undefined8 *)(lVar1 + 0xb90) = *(undefined8 *)(param_3 + 4);
  }
  return;
}

