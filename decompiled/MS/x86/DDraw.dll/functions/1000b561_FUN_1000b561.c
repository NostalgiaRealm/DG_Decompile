/*
 * FUN_1000b561 at 1000b561
 * undefined __fastcall FUN_1000b561(void * param_1)
 * Address ranges: 1000b561-1000b5b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000b561(void *param_1)

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
          yBottom = FUN_100221bb(param_1,*(uint *)((int)param_1 + 0x18),(byte)uVar1);
          xRight = FUN_10022186(param_1,*(uint *)((int)param_1 + 0x14),(byte)uVar1);
          SetRect((LPRECT)(*(int *)((int)param_1 + 0x60) + 0xc +
                          (*(int *)((int)param_1 + 0x2c) * uVar2 + uVar1) * 0x1c),0,0,xRight,yBottom
                 );
          uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)((int)param_1 + 0x20));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)param_1 + 0x24));
  }
  return;
}

