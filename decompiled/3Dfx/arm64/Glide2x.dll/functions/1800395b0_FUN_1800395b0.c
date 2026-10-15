/*
 * FUN_1800395b0 at 1800395b0
 * undefined __cdecl FUN_1800395b0(longlong * param_1, uint param_2, undefined4 param_3, int param_4)
 * Address ranges: 1800395b0-180039673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800395b0(longlong *param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  (**(code **)(*param_1 + 0x2a0))();
  uVar1 = 0;
  if (*(char *)(param_1[1] + 0x4f) == '\0') {
    uVar1 = param_3;
  }
  uVar2 = *(uint *)(param_1 + (longlong)(int)param_2 * 0x30 + 0x5a7);
  *(undefined4 *)((longlong)param_1 + (longlong)(int)param_2 * 0x180 + 0x2d34) = uVar1;
  *(uint *)(param_1 + (longlong)(int)param_2 * 0x30 + 0x5a7) =
       uVar2 & 0xfffffffb | (uint)(param_4 != 0) << 2;
  uVar2 = *(uint *)(param_1 + (ulonglong)param_2 * 0x30 + 0x5a7);
  if (((uVar2 >> 2 & 1) != 0) && ((uVar2 & 1) == 0)) {
    *(uint *)(param_1 + (ulonglong)param_2 * 0x30 + 0x5a7) = uVar2 & 0xfffffffd;
    if ((*(int *)((longlong)param_1 + (ulonglong)param_2 * 0x180 + 0x2cf4) == 0xd) ||
       (*(int *)((longlong)param_1 + (ulonglong)param_2 * 0x180 + 0x2d04) == 0xd)) {
      *(uint *)(param_1 + (ulonglong)param_2 * 0x30 + 0x5a7) = uVar2 & 0xfffffffd | 2;
    }
  }
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

