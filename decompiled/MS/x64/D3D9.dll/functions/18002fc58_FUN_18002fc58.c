/*
 * FUN_18002fc58 at 18002fc58
 * undefined8 __fastcall FUN_18002fc58(longlong param_1)
 * Address ranges: 18002fc58-18002fc8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18002fc58(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((*(longlong *)(param_1 + 0x18) == 0) && (*(longlong *)(param_1 + 0x10) == 0)) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x2c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
    }
    else {
      LOCK();
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      UNLOCK();
      uVar3 = 1;
    }
  }
  return uVar3;
}

