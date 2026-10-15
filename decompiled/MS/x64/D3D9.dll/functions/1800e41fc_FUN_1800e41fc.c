/*
 * FUN_1800e41fc at 1800e41fc
 * undefined __fastcall FUN_1800e41fc(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1800e41fc-1800e4237
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e41fc(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1800e2604(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800e4231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1a0))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

