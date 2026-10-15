/*
 * FUN_1800c31bc at 1800c31bc
 * undefined8 __fastcall FUN_1800c31bc(longlong param_1, longlong * param_2, undefined8 * param_3)
 * Address ranges: 1800c31bc-1800c321e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c31bc(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  while ((*param_2 != (&DAT_1800ff400)[(ulonglong)uVar3 * 2] ||
         (param_2[1] != (&DAT_1800ff408)[(ulonglong)uVar3 * 2]))) {
    uVar3 = uVar3 + 1;
    if (1 < uVar3) {
      return 0x80004002;
    }
  }
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  *param_3 = *(undefined8 *)(param_1 + 0x10);
  if (iVar2 == 0) {
    LOCK();
    *(int *)(&DAT_00006844 + *(longlong *)(param_1 + 0x18)) =
         *(int *)(&DAT_00006844 + *(longlong *)(param_1 + 0x18)) + 1;
    UNLOCK();
  }
  return 0;
}

