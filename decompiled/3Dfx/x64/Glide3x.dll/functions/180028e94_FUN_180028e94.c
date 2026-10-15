/*
 * FUN_180028e94 at 180028e94
 * undefined __fastcall FUN_180028e94(longlong * param_1, uint param_2, undefined4 param_3, int param_4)
 * Address ranges: 180028e94-180028f02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028e94(longlong *param_1,uint param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)(int)param_2;
  (**(code **)(*param_1 + 0x2e0))();
  if (*(char *)(param_1[1] + 0x4f) != '\0') {
    param_3 = 0;
  }
  *(uint *)(param_1 + lVar1 * 0x34 + 0x5bb) = *(uint *)(param_1 + lVar1 * 0x34 + 0x5bb) & 0xfffffffb
  ;
  *(undefined4 *)(lVar1 * 0x1a0 + 0x2dd4 + (longlong)param_1) = param_3;
  *(uint *)(param_1 + lVar1 * 0x34 + 0x5bb) =
       *(uint *)(param_1 + lVar1 * 0x34 + 0x5bb) | -(uint)(param_4 != 0) & 4;
  FUN_1800284a8((longlong)param_1,(ulonglong)param_2);
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

