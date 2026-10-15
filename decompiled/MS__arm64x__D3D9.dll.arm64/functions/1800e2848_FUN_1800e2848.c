/*
 * FUN_1800e2848 at 1800e2848
 * undefined FUN_1800e2848(void)
 * Address ranges: 1800e2848-1800e28ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e2848(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  lVar1 = FUN_1800e3830(param_1 + 0xcd8,param_5);
  if (*(longlong *)(param_1 + 0x790) != lVar1) {
    FUN_1800e3bf8(param_1 + 0xcd8);
    *(longlong *)(param_1 + 0x790) = lVar1;
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x50))
              (*(longlong **)(param_1 + 0x6b8),0,1,param_1 + 0x790);
  }
  return;
}

