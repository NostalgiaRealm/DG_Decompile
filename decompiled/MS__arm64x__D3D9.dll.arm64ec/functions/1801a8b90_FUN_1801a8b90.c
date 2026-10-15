/*
 * FUN_1801a8b90 at 1801a8b90
 * undefined FUN_1801a8b90(void)
 * Address ranges: 1801a8b90-1801a8cfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801a8b90(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  uint local_50;
  uint uStack_4c;
  ulonglong uStack_48;
  
  if ((*(int *)(param_1 + 0x90) != -1) && (*(int *)(param_1 + 0x9c) == -1)) {
    uVar2 = *(uint *)(param_1 + 0xa8);
    if (((0x18 < uVar2) || (iVar5 = 0, (0x1000800U >> (ulonglong)(uVar2 & 0x1f) & 1) == 0)) &&
       (iVar5 = 0, uVar2 == 0x1c)) {
      iVar5 = 0x1d;
    }
    if (iVar5 == 0) {
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x90);
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x34);
      uVar3 = *(uint *)(param_1 + 0x3c);
      iVar4 = FUN_18020c7c8(*(undefined8 *)(*(longlong *)(param_1 + 0x6c) + 0x1938),uVar3 * uVar2);
      *(int *)(param_1 + 0x9c) = iVar4;
      if (iVar4 != -1 && (iVar4 != -1 && uVar2 != 0)) {
        lVar9 = *(longlong *)(param_1 + 0x7c);
        uVar8 = 0;
        uVar6 = 7;
        if (lVar9 == 0) {
          uVar6 = 5;
        }
        do {
          uVar7 = 0;
          if (uVar3 != 0) {
            do {
              if (lVar9 == 0) {
                _local_50 = CONCAT44(uVar8,uVar7);
              }
              else {
                _local_50 = CONCAT44(1,uVar8);
              }
              uStack_48 = (ulonglong)(lVar9 == 0);
              local_58 = iVar5;
              uStack_54 = uVar6;
              FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x6c) + 0x1938),&local_60,
                            *(undefined4 *)(param_1 + 0x9c),uVar7 + uVar8 * uVar3);
              lVar1 = 0x7c;
              if (lVar9 == 0) {
                lVar1 = 0x74;
              }
              FUN_18020d3e8(*(longlong *)(param_1 + 0x60) + 0x6d0,*(undefined4 *)(param_1 + 0x68),
                            *(undefined8 *)(param_1 + lVar1),&local_58,local_60);
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar3);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar2);
      }
    }
  }
  return *(int *)(param_1 + 0x9c) + param_2;
}

