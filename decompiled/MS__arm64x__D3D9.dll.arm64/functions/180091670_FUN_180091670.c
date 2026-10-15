/*
 * FUN_180091670 at 180091670
 * undefined FUN_180091670(void)
 * Address ranges: 180091670-18009168f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180091670(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180091688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(lVar1 + 0x100))(lVar1 + 0x100,1);
    return;
  }
  return;
}

