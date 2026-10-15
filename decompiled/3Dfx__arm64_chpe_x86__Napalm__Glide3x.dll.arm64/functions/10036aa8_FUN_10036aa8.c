/*
 * FUN_10036aa8 at 10036aa8
 * undefined FUN_10036aa8(void)
 * Address ranges: 10036aa8-10036c47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036aa8(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
    iVar6 = 0;
    do {
      if (*(char *)(param_1 + 0x3659 + iVar5) != '\0') {
        uVar4 = *(uint *)(iVar6 + param_1 + 0x2f60);
        iVar2 = *(int *)(iVar6 + uVar4 * 0x20 + param_1 + 0x2fb0);
        puVar1 = (uint *)(iVar6 + param_1 + 0x2f5c);
        iVar3 = iVar2;
        if (uVar4 <= *puVar1) {
          do {
            if (*(int *)(param_1 + iVar6 + 0x2fb0 + uVar4 * 0x20) == iVar3) {
              iVar3 = (int)(*(float *)(iVar6 + (uVar4 + 0x17e) * 0x20 + param_1) *
                           *(float *)(iVar5 * 0x250 + uVar4 * 0x20 + param_1 + 0x2fbc)) + iVar3;
            }
            else {
              FUN_1001cda0(*(undefined4 *)(param_1 + 0x365c),iVar2,iVar3,0,0);
              iVar2 = *(int *)(iVar6 + uVar4 * 0x20 + param_1 + 0x2fb0);
              iVar3 = iVar2;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 <= *puVar1);
        }
        FUN_1001cda0(*(undefined4 *)(param_1 + 0x365c),iVar2,iVar3,0,0);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x250;
    } while (iVar5 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  return;
}

