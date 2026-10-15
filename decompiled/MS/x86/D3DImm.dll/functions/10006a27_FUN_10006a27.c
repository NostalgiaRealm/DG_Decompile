/*
 * FUN_10006a27 at 10006a27
 * undefined __fastcall FUN_10006a27(void * param_1)
 * Address ranges: 10006a27-10006ac8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10006a27(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_1005c9cc((int *)((int)param_1 + 0x4f4),0,800);
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
        *(undefined4 *)((int)param_1 + uVar4 * 100 + uVar3 * 4 + 0x4f4) = uVar1;
        if (uVar3 < 7) {
          *(undefined4 *)((int)param_1 + uVar4 * 0x1c + uVar3 * 4 + 0x814) = uVar1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x19);
  }
  uVar3 = 0;
  do {
    uVar4 = 1;
    do {
      FUN_100060dd(param_1,uVar3,uVar4,*(uint *)((int)param_1 + uVar4 * 4 + uVar3 * 100 + 0x4f4));
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x19);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return;
}

