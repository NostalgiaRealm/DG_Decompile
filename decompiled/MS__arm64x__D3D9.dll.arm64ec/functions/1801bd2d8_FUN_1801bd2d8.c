/*
 * FUN_1801bd2d8 at 1801bd2d8
 * undefined FUN_1801bd2d8(void)
 * Address ranges: 1801bd2d8-1801bd373;1801bd498-1801bd4b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801bd2d8(longlong param_1,uint param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + -0x30)) && (param_3 - 1U < 4)) {
    cVar1 = FUN_1801072a0(param_1 + -0xa0,param_3);
    uVar3 = 0x8876086b;
    if (cVar1 != '\0') {
      puVar2 = &DAT_180246270;
      if (param_3 != 2) {
        puVar2 = &DAT_180246420 + (ulonglong)*(uint *)(param_1 + -0x90) * 0x1b0;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(param_4,puVar2,0x130);
    }
  }
  return uVar3;
}

