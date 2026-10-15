/*
 * FUN_1000f700 at 1000f700
 * undefined FUN_1000f700(void)
 * Address ranges: 1000f700-1000f72f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1000f700(int param_1,int param_2)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 4) == 0) && (*(int *)(param_1 + 0x57bc) != 0)) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x57bc) + 100);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

