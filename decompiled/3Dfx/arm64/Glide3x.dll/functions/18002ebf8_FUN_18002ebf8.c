/*
 * FUN_18002ebf8 at 18002ebf8
 * undefined __cdecl FUN_18002ebf8(longlong * param_1, uint param_2, undefined4 param_3, int param_4)
 * Address ranges: 18002ebf8-18002ecaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ebf8(longlong *param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  (**(code **)(*param_1 + 0x2e0))();
  uVar1 = 0;
  if (*(char *)(param_1[1] + 0x4f) == '\0') {
    uVar1 = param_3;
  }
  uVar2 = *(uint *)(param_1 + (longlong)(int)param_2 * 0x34 + 0x5bb);
  *(undefined4 *)((longlong)param_1 + (longlong)(int)param_2 * 0x1a0 + 0x2dd4) = uVar1;
  *(uint *)(param_1 + (longlong)(int)param_2 * 0x34 + 0x5bb) =
       uVar2 & 0xfffffffb | (uint)(param_4 != 0) << 2;
  uVar2 = *(uint *)(param_1 + (ulonglong)param_2 * 0x34 + 0x5bb);
  if (((uVar2 >> 2 & 1) != 0) && ((uVar2 & 1) == 0)) {
    *(uint *)(param_1 + (ulonglong)param_2 * 0x34 + 0x5bb) = uVar2 & 0xfffffffd;
    if ((*(int *)((longlong)param_1 + (ulonglong)param_2 * 0x1a0 + 0x2d94) == 0xd) ||
       (*(int *)((longlong)param_1 + (ulonglong)param_2 * 0x1a0 + 0x2da4) == 0xd)) {
      *(uint *)(param_1 + (ulonglong)param_2 * 0x34 + 0x5bb) = uVar2 & 0xfffffffd | 2;
    }
  }
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

