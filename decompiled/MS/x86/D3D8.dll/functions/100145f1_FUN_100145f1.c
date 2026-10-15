/*
 * FUN_100145f1 at 100145f1
 * undefined __fastcall FUN_100145f1(void * param_1)
 * Address ranges: 100145f1-100146a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100145f1(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_100ada8e((int *)((int)param_1 + 0x544),0,0x3a0);
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
        *(undefined4 *)((int)param_1 + uVar4 * 0x74 + uVar3 * 4 + 0x544) = uVar1;
        if (uVar3 == 0xb) {
          *(uint *)((int)param_1 + uVar4 * 0x74 + 0x570) = uVar4;
        }
        else if (uVar3 < 7) {
          *(undefined4 *)((int)param_1 + uVar4 * 0x1c + uVar3 * 4 + 0x8e4) = uVar1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x1d);
  }
  uVar3 = 0;
  do {
    uVar4 = 1;
    do {
      FUN_10013c31(param_1,uVar3,uVar4,*(uint *)((int)param_1 + uVar4 * 4 + uVar3 * 0x74 + 0x544));
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x1d);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return;
}

