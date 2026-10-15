/*
 * FUN_1002abe7 at 1002abe7
 * undefined4 __stdcall FUN_1002abe7(int * param_1)
 * Address ranges: 1002abe7-1002ac47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1002abe7(int *param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  
  piVar1 = param_1;
  if (*(int *)*param_1 == -0x7fffffff) {
    FUN_10029908((undefined1 *)((int)&param_1 + 3));
    uVar3 = 0;
    if (DAT_100df2dc != 0) {
      do {
        cVar2 = FUN_1002cbaf(*(void **)(DAT_100df2d8 + uVar3 * 4),*(uint *)(*piVar1 + 0x18));
        if (cVar2 != '\0') {
          FUN_10029968((char *)((int)&param_1 + 3));
          return 0xffffffff;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < DAT_100df2dc);
    }
    FUN_10029968((char *)((int)&param_1 + 3));
  }
  return 0;
}

