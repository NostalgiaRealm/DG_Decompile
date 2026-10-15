/*
 * FUN_18004858c at 18004858c
 * undefined __fastcall FUN_18004858c(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 18004858c-1800485c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004858c(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800485bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x108))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

