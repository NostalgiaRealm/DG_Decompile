/*
 * FUN_1800c344c at 1800c344c
 * undefined8 __fastcall FUN_1800c344c(longlong param_1, longlong * param_2, undefined8 * param_3)
 * Address ranges: 1800c344c-1800c34ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c344c(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  while ((*param_2 != (&DAT_1800ff420)[(ulonglong)uVar1 * 2] ||
         (param_2[1] != (&DAT_1800ff428)[(ulonglong)uVar1 * 2]))) {
    uVar1 = uVar1 + 1;
    if (1 < uVar1) {
      return 0x80004002;
    }
  }
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  *param_3 = *(undefined8 *)(param_1 + 0x10);
  FUN_1800c3de4(*(longlong *)(param_1 + -0x38) + 0x118);
  return 0;
}

