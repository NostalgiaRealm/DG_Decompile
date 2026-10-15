/*
 * FUN_1001c83a at 1001c83a
 * undefined __fastcall FUN_1001c83a(int * param_1, int param_2)
 * Address ranges: 1001c83a-1001c91d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001c83a(int *param_1,int param_2)

{
  FUN_100575ba((int *)(param_2 + 0xc),param_1,0x2d);
  if ((*(char *)(param_2 + 5) != '\0') || (*(char *)(param_2 + 7) != '\0')) {
    FUN_100575ba((int *)(param_2 + 0xc),param_1,0x8000002d);
  }
  if ((*(char *)(param_2 + 6) != '\0') || (*(char *)(param_2 + 8) != '\0')) {
    FUN_100575ba((int *)(param_2 + 0xc),param_1,0x8000002d);
  }
  if (((*(char *)(param_2 + 5) != '\0') || (*(char *)(param_2 + 7) != '\0')) &&
     ((*(char *)(param_2 + 6) != '\0' || (*(char *)(param_2 + 8) != '\0')))) {
    FUN_100575ba((int *)(param_2 + 0xc),param_1,0x8000002d);
  }
  return;
}

