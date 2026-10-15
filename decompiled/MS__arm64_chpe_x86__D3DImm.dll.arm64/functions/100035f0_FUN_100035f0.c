/*
 * FUN_100035f0 at 100035f0
 * undefined FUN_100035f0(void)
 * Address ranges: 100035f0-100036f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100035f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = param_1 + 0x4f4;
  FUN_10081f10(iVar1,0,800);
  if (*(int *)(param_1 + 8) != 0) {
    uVar3 = 0;
    do {
      uVar5 = 0;
      do {
        iVar4 = 8;
        if (uVar5 == 0) {
          iVar4 = 4;
        }
        uVar2 = *(undefined4 *)(iVar4 + *(int *)(param_1 + 8) + uVar3 * 0xc);
        *(undefined4 *)(iVar1 + uVar3 * 4 + uVar5 * 100) = uVar2;
        if (uVar3 < 7) {
          *(undefined4 *)(uVar5 * 0x1c + uVar3 * 4 + param_1 + 0x814) = uVar2;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x19);
  }
  uVar3 = 0;
  do {
    uVar5 = 1;
    do {
      FUN_10002110(param_1,uVar3,uVar5,*(undefined4 *)(iVar1 + uVar3 * 100 + uVar5 * 4));
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x19);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return;
}

