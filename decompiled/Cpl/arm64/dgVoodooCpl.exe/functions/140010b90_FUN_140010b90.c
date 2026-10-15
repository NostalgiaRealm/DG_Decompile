/*
 * FUN_140010b90 at 140010b90
 * undefined __cdecl FUN_140010b90(longlong param_1)
 * Address ranges: 140010b90-140010be3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140010b90(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = *(ulonglong *)(param_1 + 0x40);
  if (uVar2 == 0) {
    if (*(int *)(param_1 + 0x48) == 0) {
      return;
    }
    uVar2 = (ulonglong)(ushort)*(int *)(param_1 + 0x48);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    UNRECOVERED_JUMPTABLE = DialogBoxParamW_exref;
  }
  else {
    uVar1 = 0;
    UNRECOVERED_JUMPTABLE = DialogBoxIndirectParamW_exref;
  }
                    /* WARNING: Could not recover jumptable at 0x000140010bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,uVar2,*(undefined8 *)(param_1 + 0x58),FUN_14000f5f8);
  return;
}

