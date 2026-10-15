/*
 * FUN_1800c1048 at 1800c1048
 * undefined8 __fastcall FUN_1800c1048(longlong param_1, longlong * param_2, undefined8 * param_3)
 * Address ranges: 1800c1048-1800c10c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c1048(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  while( true ) {
    if ((*param_2 == (&DAT_1800ff348)[uVar5 * 2]) && (param_2[1] == (&DAT_1800ff350)[uVar5 * 2]))
    break;
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    if (2 < uVar4) {
      return 0x80004002;
    }
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  *param_3 = *(undefined8 *)(param_1 + 0x30);
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
    return 0;
  }
  if (iVar2 != 0) {
    return 0;
  }
  LOCK();
  *(int *)(&DAT_00006844 + *(longlong *)(param_1 + 0x38)) =
       *(int *)(&DAT_00006844 + *(longlong *)(param_1 + 0x38)) + 1;
  UNLOCK();
  return 0;
}

