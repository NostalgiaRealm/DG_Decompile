/*
 * FUN_18007aab8 at 18007aab8
 * ulonglong __fastcall FUN_18007aab8(undefined8 param_1, longlong param_2, undefined1 * param_3, undefined1 * param_4)
 * Address ranges: 18007aab8-18007ab05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18007aab8(undefined8 param_1,longlong param_2,undefined1 *param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 local_res8 [4];
  
  uVar3 = 0;
  uVar2 = 0;
  local_res8[0] = param_1;
  do {
    local_res8[0] = CONCAT44(local_res8[0]._4_4_,*(undefined4 *)(param_2 + 8));
    uVar1 = (uint)uVar3 + 1;
    if ((*(byte *)((longlong)local_res8 + ((longlong)(int)uVar2 >> 3)) >> (uVar2 & 7) & 1) == 0) {
      uVar1 = (uint)uVar3;
    }
    uVar2 = uVar2 + 1;
    uVar3 = (ulonglong)uVar1;
  } while (uVar2 < 6);
  *param_3 = (&DAT_1801029c0)[uVar3];
  *param_4 = (&DAT_1801029b8)[uVar3];
  return uVar3;
}

