/*
 * FUN_1001bc90 at 1001bc90
 * undefined __fastcall FUN_1001bc90(int * param_1)
 * Address ranges: 1001bc90-1001bccf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001bc90(int *param_1)

{
  RemoveVectoredExceptionHandler((PVOID)param_1[0x4c]);
  DAT_10059758 = 0;
  FUN_100438ae(*(void **)(param_1[1] + 0x295c),(int)param_1);
  (**(code **)(*param_1 + 0x10))();
  FUN_1001b3c0(param_1,(int)param_1);
  param_1[2] = 0;
  return;
}

