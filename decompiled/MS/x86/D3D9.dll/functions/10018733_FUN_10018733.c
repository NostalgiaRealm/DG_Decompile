/*
 * FUN_10018733 at 10018733
 * undefined __fastcall FUN_10018733(void * param_1)
 * Address ranges: 10018733-100187e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10018733(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_100cfed0((int *)((int)param_1 + 0x778),0,0x420);
  if (*(int *)((int)param_1 + 8) != 0) {
    uVar3 = 0;
    do {
      uVar4 = 0;
      do {
        iVar2 = 4;
        if (uVar4 != 0) {
          iVar2 = 8;
        }
        uVar1 = *(undefined4 *)(uVar3 * 0xc + iVar2 + *(int *)((int)param_1 + 8));
        *(undefined4 *)((int)param_1 + uVar4 * 0x84 + uVar3 * 4 + 0x778) = uVar1;
        if (uVar3 == 0xb) {
          *(uint *)((int)param_1 + uVar4 * 0x84 + 0x7a4) = uVar4;
        }
        else if (uVar3 < 7) {
          *(undefined4 *)((int)param_1 + uVar4 * 0x1c + uVar3 * 4 + 0xb98) = uVar1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x21);
  }
  uVar3 = 0;
  do {
    uVar4 = 1;
    do {
      FUN_10017cb4(param_1,uVar3,uVar4,*(uint *)((int)param_1 + uVar4 * 4 + uVar3 * 0x84 + 0x778));
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x21);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return;
}

