/*
 * FUN_180221870 at 180221870
 * undefined FUN_180221870(void)
 * Address ranges: 180221870-180221897
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180221870(void)

{
  int iVar1;
  undefined8 in_stack_00000010;
  
  do {
    DataMemoryBarrier(2,2);
    Yield();
    iVar1 = FUN_180104210(in_stack_00000010,1,0);
  } while (iVar1 != 0);
  return;
}

