/*
 * FUN_100beb38 at 100beb38
 * undefined FUN_100beb38(void)
 * Address ranges: 100beb38-100beb9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100beb38(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_101325d0(*(undefined4 *)(param_1 + 8),0,0x400);
  }
  else {
    FUN_101325a0(*(undefined4 *)(param_1 + 8),param_2,0x400);
  }
  *(undefined1 *)(param_1 + 0x12d) = 1;
  FUN_100beba0(param_1,0,0);
  return;
}

