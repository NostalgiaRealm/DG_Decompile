/*
 * FUN_10027080 at 10027080
 * undefined FUN_10027080(void)
 * Address ranges: 10027080-1002719b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10027080(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = param_1 + 0x778;
  FUN_101325d0(iVar1,0,0x420);
  if (*(int *)(param_1 + 8) != 0) {
    uVar3 = 0;
    do {
      uVar5 = 0;
      do {
        iVar4 = 8;
        if (uVar5 == 0) {
          iVar4 = 4;
        }
        uVar2 = *(undefined4 *)(iVar4 + uVar3 * 0xc + *(int *)(param_1 + 8));
        *(undefined4 *)(iVar1 + uVar3 * 4 + uVar5 * 0x84) = uVar2;
        if (uVar3 == 0xb) {
          *(uint *)(param_1 + uVar5 * 0x84 + 0x7a4) = uVar5;
        }
        else if (uVar3 < 7) {
          *(undefined4 *)(param_1 + ((uVar5 + 0x6a) * 7 + uVar3) * 4) = uVar2;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x21);
  }
  uVar3 = 0;
  do {
    uVar5 = 1;
    do {
      FUN_10025a70(param_1,uVar3,uVar5,*(undefined4 *)(iVar1 + uVar3 * 0x84 + uVar5 * 4));
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x21);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return;
}

