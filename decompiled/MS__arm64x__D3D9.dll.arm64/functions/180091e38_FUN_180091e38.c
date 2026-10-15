/*
 * FUN_180091e38 at 180091e38
 * undefined FUN_180091e38(void)
 * Address ranges: 180091e38-180091f9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180091e38(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 local_70;
  int local_68;
  undefined4 uStack_64;
  uint local_60;
  uint uStack_5c;
  ulonglong uStack_58;
  
  if ((*(int *)(param_1 + 0x90) != -1) && (*(int *)(param_1 + 0x9c) == -1)) {
    uVar2 = *(uint *)(param_1 + 0xa8);
    if (((0x18 < uVar2) || (iVar6 = 0, (0x1000800U >> (ulonglong)(uVar2 & 0x1f) & 1) == 0)) &&
       (iVar6 = 0, uVar2 == 0x1c)) {
      iVar6 = 0x1d;
    }
    if (iVar6 == 0) {
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x90);
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x34);
      uVar3 = *(uint *)(param_1 + 0x3c);
      iVar4 = FUN_1800e7220(*(undefined8 *)(*(longlong *)(param_1 + 0x6c) + 0x1938),uVar3 * uVar2);
      *(int *)(param_1 + 0x9c) = iVar4;
      if (iVar4 != -1 && (iVar4 != -1 && uVar2 != 0)) {
        lVar10 = *(longlong *)(param_1 + 0x7c);
        uVar8 = 0;
        uVar7 = 7;
        if (lVar10 == 0) {
          uVar7 = 5;
        }
        do {
          uVar9 = 0;
          if (uVar3 != 0) {
            do {
              if (lVar10 == 0) {
                _local_60 = CONCAT44(uVar8,uVar9);
              }
              else {
                _local_60 = CONCAT44(1,uVar8);
              }
              uStack_58 = (ulonglong)(lVar10 == 0);
              local_68 = iVar6;
              uStack_64 = uVar7;
              FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x6c) + 0x1938),&local_70,
                            *(undefined4 *)(param_1 + 0x9c),uVar9 + uVar8 * uVar3);
              lVar1 = 0x7c;
              if (lVar10 == 0) {
                lVar1 = 0x74;
              }
              plVar5 = *(longlong **)
                        (*(longlong *)(param_1 + 0x60) + (ulonglong)*(uint *)(param_1 + 0x68) * 0x20
                        + 0x6d0);
              (**(code **)(*plVar5 + 0xa0))
                        (plVar5,*(undefined8 *)(lVar1 + param_1),&local_68,local_70);
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar3);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar2);
      }
    }
  }
  return *(int *)(param_1 + 0x9c) + param_2;
}

