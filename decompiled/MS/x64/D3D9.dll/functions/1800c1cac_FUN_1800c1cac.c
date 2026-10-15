/*
 * FUN_1800c1cac at 1800c1cac
 * undefined __fastcall FUN_1800c1cac(longlong param_1, longlong * param_2, undefined8 * param_3)
 * Address ranges: 1800c1cac-1800c1cec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c1cac(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  uVar1 = FUN_1800aed38((uint *)(param_1 + 0x130),param_2,param_3,local_res8);
  if ((-1 < (int)uVar1) && (local_res8[0] == 1)) {
    LOCK();
    *(int *)(&DAT_00006844 + *(longlong *)(param_1 + 0x178)) =
         *(int *)(&DAT_00006844 + *(longlong *)(param_1 + 0x178)) + 1;
    UNLOCK();
  }
  return;
}

