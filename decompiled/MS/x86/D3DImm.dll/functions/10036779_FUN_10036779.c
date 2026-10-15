/*
 * FUN_10036779 at 10036779
 * undefined __stdcall FUN_10036779(int * param_1, undefined4 param_2, undefined4 param_3, int param_4, byte param_5, int * param_6, undefined4 param_7, uint param_8)
 * Address ranges: 10036779-1003680b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036779(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,byte param_5,
                 int *param_6,undefined4 param_7,uint param_8)

{
  if ((param_8 >> 0x12 & 1) == 0) {
    FUN_10057c8a(param_1,param_6,0x56);
  }
  if (((param_8 >> 8 & 1) == 0) && ((param_8 >> 0x10 & 1) != 0)) {
    FUN_10057c8a(param_1,param_6,0x36);
  }
  FUN_100361fb(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

