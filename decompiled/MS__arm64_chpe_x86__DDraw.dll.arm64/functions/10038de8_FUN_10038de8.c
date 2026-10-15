/*
 * FUN_10038de8 at 10038de8
 * undefined FUN_10038de8(void)
 * Address ranges: 10038de8-10038e87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10038de8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar6;
  int iVar7;
  ulonglong extraout_x15;
  ulonglong uVar8;
  ulonglong extraout_x15_00;
  undefined8 uVar5;
  
  iVar2 = FUN_1004d530(param_1,0);
  iVar7 = (int)extraout_x15;
  uVar6 = *(uint *)(iVar7 + 0x68);
  if ((uVar6 >> 3 & 1) != 0) {
    if ((uVar6 >> 9 & 1) == 0) {
      if ((uVar6 >> 0xc & 1) != 0) {
        uVar1 = *(uint *)(iVar7 + 0x18);
        uVar5 = 1;
        iVar4 = 1;
        uVar6 = 1;
        uVar8 = extraout_x15;
        if (1 < uVar1) {
          do {
            iVar3 = FUN_1004d530(uVar8 & 0xffffffff,uVar6);
            iVar4 = (int)uVar5;
            iVar7 = (int)extraout_x15_00;
            uVar6 = uVar6 + 1;
            iVar2 = iVar3 + iVar2;
            uVar8 = extraout_x15_00;
          } while (uVar6 < uVar1);
        }
        iVar3 = 6;
        if ((*(uint *)(iVar7 + 0x6c) & 0x200) == 0) {
          iVar3 = iVar4;
        }
        iVar2 = iVar3 * iVar2;
      }
    }
    else {
      iVar2 = iVar2 + *(int *)(iVar7 + 0x14) * iVar2;
    }
  }
  return iVar2;
}

