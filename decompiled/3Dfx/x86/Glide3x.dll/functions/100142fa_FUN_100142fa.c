/*
 * FUN_100142fa at 100142fa
 * undefined __fastcall FUN_100142fa(int * param_1)
 * Address ranges: 100142fa-10014384
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100142fa(int *param_1)

{
  if (*(int *)(param_1[0x4e] + 0x29e0) == 0) {
    FUN_1001a9de(param_1[0x4e]);
    (**(code **)(*param_1 + 0x4c))(0);
  }
  if (((char)param_1[0x49] != '\0') || (**(char **)(param_1[0x4e] + 0x32f0) != '\0')) {
    FUN_1001a9de(param_1[0x4e]);
    FUN_10014385(param_1,1,0);
    if (*(char *)(*(int *)(param_1[0x4e] + 0x32f0) + 3) != '\0') {
      DebugBreak();
    }
  }
  if (*(char *)((int)param_1 + 0x125) != '\0') {
    FUN_1001a9de(param_1[0x4e]);
    FUN_10014385(param_1,2,0);
  }
  return;
}

