/*
 * FUN_18003f688 at 18003f688
 * undefined __cdecl FUN_18003f688(int * param_1, longlong * param_2, uint param_3, undefined8 param_4, ulonglong param_5)
 * Address ranges: 18003f688-18003f6f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003f688(int *param_1,longlong *param_2,uint param_3,undefined8 param_4,ulonglong param_5)

{
  if (*param_1 == 0x51) {
    FUN_180056c60(param_1,param_2,0x81,param_5 & 0xffffffff,1,(ulonglong)param_3,0x100,0);
  }
  else {
    FUN_180056c60(param_1,param_2,0xe,param_5 & 0xffffffff,1,(ulonglong)(uint)param_1[0x16],0,
                  0x3f800000);
  }
  return;
}

