/*
 * FUN_10062371 at 10062371
 * undefined __fastcall FUN_10062371(void * param_1)
 * Address ranges: 10062371-100623cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10062371(void *param_1)

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
          yBottom = FUN_10079207(param_1,*(uint *)((int)param_1 + 0x18),(byte)uVar1);
          xRight = FUN_100791d2(param_1,*(uint *)((int)param_1 + 0x14),(byte)uVar1);
          SetRect((LPRECT)(*(int *)((int)param_1 + 0xc4) + 0xc +
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

