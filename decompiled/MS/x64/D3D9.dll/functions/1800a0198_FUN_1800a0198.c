/*
 * FUN_1800a0198 at 1800a0198
 * undefined __fastcall FUN_1800a0198(longlong param_1)
 * Address ranges: 1800a0198-1800a0226
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a0198(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 in_stack_ffffffffffffffc0;
  undefined8 local_28;
  
  FUN_1800ac794(param_1,&local_28);
  if (*(char *)(param_1 + 0x24c) != '\0') {
    lVar1 = 0x50;
    if (*(int *)(param_1 + 0x2c) != 0x15) {
      lVar1 = 0x40;
    }
    local_28._4_4_ = *(int *)(lVar1 + *(longlong *)(param_1 + 0x130));
  }
  if ((*(int *)(param_1 + 0x34) == 1) || (iVar2 = local_28._4_4_, *(uint *)(param_1 + 0x38) < 2)) {
    iVar2 = 0;
  }
  FUN_18009aaec((longlong *)(param_1 + 0x140),*(longlong **)(param_1 + 0x74),local_28._4_4_,iVar2,
                *(undefined4 *)(&DAT_1800fe8f0 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4),
                in_stack_ffffffffffffffc0,0,*(int *)(param_1 + 0x34) != 1);
  return;
}

