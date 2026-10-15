/*
 * FUN_180036194 at 180036194
 * undefined __fastcall FUN_180036194(longlong * param_1, uint param_2, undefined4 param_3, int param_4)
 * Address ranges: 180036194-180036203
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036194(longlong *param_1,uint param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)(int)param_2;
  (**(code **)(*param_1 + 0x2a0))();
  if (*(char *)(param_1[1] + 0x4f) != '\0') {
    param_3 = 0;
  }
  *(uint *)(param_1 + lVar1 * 0x30 + 0x5a7) = *(uint *)(param_1 + lVar1 * 0x30 + 0x5a7) & 0xfffffffb
  ;
  *(undefined4 *)(lVar1 * 0x180 + 0x2d34 + (longlong)param_1) = param_3;
  *(uint *)(param_1 + lVar1 * 0x30 + 0x5a7) =
       *(uint *)(param_1 + lVar1 * 0x30 + 0x5a7) | -(uint)(param_4 != 0) & 4;
  FUN_180035c38((longlong)param_1,(ulonglong)param_2);
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

