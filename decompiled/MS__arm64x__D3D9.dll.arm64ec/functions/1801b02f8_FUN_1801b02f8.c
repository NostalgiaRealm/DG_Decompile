/*
 * FUN_1801b02f8 at 1801b02f8
 * undefined FUN_1801b02f8(void)
 * Address ranges: 1801b02f8-1801b037f;1801b03d4-1801b0413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b02f8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + -0xf0) != 0) {
    lVar3 = *(longlong *)(param_1 + -0xa8);
    FUN_180221850(lVar3 + 0x12c0);
    if (*(char *)(lVar3 + 0x14c4) != '\0') {
      lVar1 = FUN_1802218b0(lVar3 + 0x12c0,0x410);
      if (lVar1 != 0) {
        FUN_1801042e0(lVar3 + 0x14c0);
        *(undefined8 *)(lVar1 + 8) = 0x410;
        uVar4 = lVar1 + 0x27U & 0xfffffffffffffff8;
        *(ulonglong *)(lVar1 + 0x10) = uVar4;
        *(longlong *)(lVar1 + 0x18) = param_1 + -0x100;
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(uVar4,param_2,0x400);
      }
      FUN_180221bb0(lVar3 + 0x12c0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(lVar3 + 0x12c0);
    }
    puVar2 = *(undefined8 **)(lVar3 + 0x14a0);
    *puVar2 = param_2;
    puVar2[1] = param_1 + -0x100;
    FUN_1801b0418();
    FUN_180221bb0(lVar3 + 0x12c0);
  }
  return;
}

