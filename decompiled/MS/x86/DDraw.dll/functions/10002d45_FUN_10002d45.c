/*
 * FUN_10002d45 at 10002d45
 * undefined4 __stdcall FUN_10002d45(int * param_1)
 * Address ranges: 10002d45-10002dad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002d45(int *param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  
  piVar1 = param_1;
  if (*(int *)*param_1 == -0x7fffffff) {
    FUN_10001a9c((int)&param_1 + 3);
    uVar3 = 0;
    if (DAT_1006c2a4 != 0) {
      do {
        cVar2 = FUN_10004e50(*(void **)(DAT_1006c2a0 + uVar3 * 4),*(uint *)(*piVar1 + 0x18));
        if (cVar2 != '\0') {
          LeaveCriticalSection(DAT_1006c254);
          return 0xffffffff;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < DAT_1006c2a4);
    }
    LeaveCriticalSection(DAT_1006c254);
  }
  return 0;
}

