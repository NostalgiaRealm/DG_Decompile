/*
 * FUN_1004c450 at 1004c450
 * undefined FUN_1004c450(void)
 * Address ranges: 1004c450-1004c6ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004c450(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  iVar3 = FUN_10083af0(param_2,&DAT_1009e7b0,0x10);
  if (iVar3 == 0) {
    puVar5 = (uint *)(param_1 + 0x1c);
    uVar2 = *puVar5;
    if (uVar2 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + 0x18) + uVar4 * 4) == param_3) {
          if (uVar4 == 0xffffffff) {
            return;
          }
          uVar4 = uVar4 + 1;
          if (uVar4 < uVar2) {
            do {
              puVar1 = (undefined4 *)(*(int *)(param_1 + 0x18) + uVar4 * 4);
              uVar4 = uVar4 + 1;
              puVar1[-1] = *puVar1;
            } while (uVar4 < *puVar5);
          }
          *puVar5 = *puVar5 - 1;
          return;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
  }
  else {
    iVar3 = FUN_10083af0(param_2,&DAT_1009e7c0,0x10);
    if (iVar3 == 0) {
      puVar5 = (uint *)(param_1 + 0x28);
      uVar2 = *puVar5;
      if (uVar2 != 0) {
        uVar4 = 0;
        do {
          if (*(int *)(*(int *)(param_1 + 0x24) + uVar4 * 4) == param_3) {
            if (uVar4 == 0xffffffff) {
              return;
            }
            uVar4 = uVar4 + 1;
            if (uVar4 < uVar2) {
              do {
                puVar1 = (undefined4 *)(*(int *)(param_1 + 0x24) + uVar4 * 4);
                uVar4 = uVar4 + 1;
                puVar1[-1] = *puVar1;
              } while (uVar4 < *puVar5);
            }
LAB_1004c6d4:
            *puVar5 = *puVar5 - 1;
            return;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
    }
    else {
      iVar3 = FUN_10083af0(param_2,&DAT_1009e7d0,0x10);
      if (iVar3 == 0) {
        puVar5 = (uint *)(param_1 + 0x34);
        uVar2 = *puVar5;
        if (uVar2 != 0) {
          uVar4 = 0;
          do {
            if (*(int *)(*(int *)(param_1 + 0x30) + uVar4 * 4) == param_3) {
              if (uVar4 == 0xffffffff) {
                return;
              }
              uVar4 = uVar4 + 1;
              if (uVar4 < uVar2) {
                do {
                  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x30) + uVar4 * 4);
                  uVar4 = uVar4 + 1;
                  puVar1[-1] = *puVar1;
                } while (uVar4 < *puVar5);
              }
              goto LAB_1004c6d4;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar2);
        }
      }
      else {
        iVar3 = FUN_10083af0(param_2,&DAT_1009e7e0,0x10);
        if (iVar3 == 0) {
          puVar5 = (uint *)(param_1 + 0x40);
          uVar2 = *puVar5;
          if (uVar2 != 0) {
            uVar4 = 0;
            do {
              if (*(int *)(*(int *)(param_1 + 0x3c) + uVar4 * 4) == param_3) {
                if (uVar4 == 0xffffffff) {
                  return;
                }
                uVar4 = uVar4 + 1;
                if (uVar4 < uVar2) {
                  do {
                    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x3c) + uVar4 * 4);
                    uVar4 = uVar4 + 1;
                    puVar1[-1] = *puVar1;
                  } while (uVar4 < *puVar5);
                }
                goto LAB_1004c6d4;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar2);
          }
        }
      }
    }
  }
  return;
}

