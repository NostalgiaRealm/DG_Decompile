/*
 * FUN_10082845 at 10082845
 * undefined __fastcall FUN_10082845(void * param_1)
 * Address ranges: 10082845-1008289b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10082845(void *param_1)

{
  uint yBottom;
  uint xRight;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)param_1 + 0x24) != 0) {
    do {
      uVar1 = 0;
      if (*(int *)((int)param_1 + 0x20) != 0) {
        do {
          yBottom = FUN_1008f57f(param_1,*(uint *)((int)param_1 + 0x18),(byte)uVar1);
          xRight = FUN_1008f54a(param_1,*(uint *)((int)param_1 + 0x14),(byte)uVar1);
          SetRect((LPRECT)(((*(int *)((int)param_1 + 0x2c) * uVar2 + uVar1) * 0x20 | 0x10) +
                          *(int *)((int)param_1 + 0x5c)),0,0,xRight,yBottom);
          uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)((int)param_1 + 0x20));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)param_1 + 0x24));
  }
  return;
}

