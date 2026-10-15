/*
 * FUN_10089a50 at 10089a50
 * undefined __fastcall FUN_10089a50(int * param_1, int param_2)
 * Address ranges: 10089a50-10089b33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10089a50(int *param_1,int param_2)

{
  FUN_100c3be1((int *)(param_2 + 0xc),param_1,0x2d);
  if ((*(char *)(param_2 + 5) != '\0') || (*(char *)(param_2 + 7) != '\0')) {
    FUN_100c3be1((int *)(param_2 + 0xc),param_1,0x8000002d);
  }
  if ((*(char *)(param_2 + 6) != '\0') || (*(char *)(param_2 + 8) != '\0')) {
    FUN_100c3be1((int *)(param_2 + 0xc),param_1,0x8000002d);
  }
  if (((*(char *)(param_2 + 5) != '\0') || (*(char *)(param_2 + 7) != '\0')) &&
     ((*(char *)(param_2 + 6) != '\0' || (*(char *)(param_2 + 8) != '\0')))) {
    FUN_100c3be1((int *)(param_2 + 0xc),param_1,0x8000002d);
  }
  return;
}

