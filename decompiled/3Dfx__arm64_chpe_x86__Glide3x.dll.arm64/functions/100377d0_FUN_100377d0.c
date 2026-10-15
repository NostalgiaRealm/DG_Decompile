/*
 * FUN_100377d0 at 100377d0
 * undefined FUN_100377d0(void)
 * Address ranges: 100377d0-10037957
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100377d0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
    do {
      if (*(char *)(param_1 + 0x32d9 + iVar7) != '\0') {
        iVar5 = param_1 + iVar7 * 0x1a0;
        uVar6 = *(uint *)(iVar5 + 0x2d9c);
        iVar4 = *(int *)(param_1 + (iVar7 * 0xd + uVar6) * 0x20 + 0x2df0);
        puVar1 = (uint *)(iVar5 + 0x2d98);
        iVar5 = iVar4;
        if (uVar6 <= *puVar1) {
          do {
            iVar2 = iVar7 * 0xd + uVar6;
            iVar3 = param_1 + iVar2 * 0x20;
            if (*(int *)(param_1 + 0x2df0 + iVar2 * 0x20) == iVar5) {
              iVar5 = (int)(*(float *)(param_1 + (iVar2 + 0x170) * 0x20) *
                           *(float *)(iVar3 + 0x2dfc)) + iVar5;
            }
            else {
              FUN_1001c7d8(*(undefined4 *)(param_1 + 0x32dc),iVar4,iVar5,0,0);
              iVar4 = *(int *)(iVar3 + 0x2df0);
              iVar5 = iVar4;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 <= *puVar1);
        }
        FUN_1001c7d8(*(undefined4 *)(param_1 + 0x32dc),iVar4,iVar5,0,0);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  return;
}

