/*
 * FUN_1801dda70 at 1801dda70
 * undefined FUN_1801dda70(void)
 * Address ranges: 1801dda70-1801ddaaf;1801ddab4-1801ddac3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801dda70(longlong param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x8876086c;
  if (param_3 != (uint *)0x0) {
    uVar1 = *(int *)(param_1 + 0x28) << 2;
    if (param_2 == 0) {
      *param_3 = uVar1;
      uVar2 = 0;
    }
    else if (uVar1 <= *param_3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(param_2,*(undefined8 *)(param_1 + 0x30),uVar1);
    }
  }
  return uVar2;
}

