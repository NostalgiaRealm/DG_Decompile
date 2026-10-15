/*
 * FUN_18007b56c at 18007b56c
 * undefined __fastcall FUN_18007b56c(undefined8 param_1, longlong param_2, longlong * param_3, uint param_4, byte param_5, uint param_6)
 * Address ranges: 18007b56c-18007b666
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007b56c(undefined8 param_1,longlong param_2,longlong *param_3,uint param_4,byte param_5,
                  uint param_6)

{
  byte bVar1;
  uint local_38 [12];
  
  bVar1 = param_5 & 0xf;
  if ((param_4 & 0x3f00) == 0) {
    bVar1 = 0xf;
  }
  if (bVar1 != 0) {
    FUN_1800850c0(0xf,param_2,*(uint *)(param_2 + 0x1c0 + (ulonglong)param_6 * 4),bVar1,local_38);
    FUN_1800edd10((uint *)(param_2 + 0x20),param_3,0x36,local_38);
  }
  return;
}

