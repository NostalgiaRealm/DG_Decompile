/*
 * FUN_10031118 at 10031118
 * undefined FUN_10031118(void)
 * Address ranges: 10031118-1003114b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10031118(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x20c) + 0x2c);
  if (*piVar1 != 0) {
    *piVar1 = 0;
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x208) + 0x2c);
  if (*piVar1 != 0) {
    *piVar1 = 0;
  }
  return;
}

