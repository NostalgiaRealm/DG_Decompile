/*
 * FUN_1800346e0 at 1800346e0
 * undefined __cdecl FUN_1800346e0(int * param_1, longlong * param_2, uint param_3, undefined8 param_4, ulonglong param_5)
 * Address ranges: 1800346e0-18003474b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800346e0(int *param_1,longlong *param_2,uint param_3,undefined8 param_4,ulonglong param_5)

{
  if (*param_1 == 0x51) {
    FUN_18005a530(param_1,param_2,0x81,param_5 & 0xffffffff,1,(ulonglong)param_3,0x100,0);
  }
  else {
    FUN_18005a530(param_1,param_2,0xe,param_5 & 0xffffffff,1,(ulonglong)(uint)param_1[0x16],0,
                  0x3f800000);
  }
  return;
}

