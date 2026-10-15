/*
 * FUN_100235b3 at 100235b3
 * undefined4 __stdcall FUN_100235b3(int * param_1)
 * Address ranges: 100235b3-10023613
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100235b3(int *param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  
  piVar1 = param_1;
  if (*(int *)*param_1 == -0x7fffffff) {
    FUN_10022270((undefined1 *)((int)&param_1 + 3));
    uVar3 = 0;
    if (DAT_100ba718 != 0) {
      do {
        cVar2 = FUN_1002553d(*(void **)(DAT_100ba714 + uVar3 * 4),*(uint *)(*piVar1 + 0x18));
        if (cVar2 != '\0') {
          FUN_100222d0((char *)((int)&param_1 + 3));
          return 0xffffffff;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < DAT_100ba718);
    }
    FUN_100222d0((char *)((int)&param_1 + 3));
  }
  return 0;
}

