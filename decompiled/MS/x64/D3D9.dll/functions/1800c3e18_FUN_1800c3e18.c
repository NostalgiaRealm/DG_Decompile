/*
 * FUN_1800c3e18 at 1800c3e18
 * undefined8 __fastcall FUN_1800c3e18(longlong param_1, longlong * param_2, undefined8 * param_3)
 * Address ranges: 1800c3e18-1800c3e89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c3e18(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  while ((*param_2 != (&DAT_1800ff440)[(ulonglong)uVar3 * 2] ||
         (param_2[1] != (&DAT_1800ff448)[(ulonglong)uVar3 * 2]))) {
    uVar3 = uVar3 + 1;
    if (3 < uVar3) {
      return 0x80004002;
    }
  }
  LOCK();
  piVar2 = (int *)(param_1 + 8);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  *param_3 = *(undefined8 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    piVar2 = (int *)(*(longlong *)(param_1 + -0x100) + 0xc);
    if (*(longlong *)(param_1 + -0x100) == 0) {
      piVar2 = (int *)&DAT_00006844;
    }
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return 0;
}

