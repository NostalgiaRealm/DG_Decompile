/*
 * FUN_100bc590 at 100bc590
 * undefined FUN_100bc590(void)
 * Address ranges: 100bc590-100bc74b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100bc590(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_6c;
  uint local_68;
  int local_64;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint local_50;
  uint uStack_4c;
  ulonglong uStack_48;
  
  local_64 = param_1;
  if ((*(int *)(param_1 + 100) != -1) && (piVar1 = (int *)(param_1 + 0x70), *piVar1 == -1)) {
    uVar6 = *(uint *)(param_1 + 0x7c);
    if (((uVar6 < 0x19) && ((0x1000800U >> (ulonglong)(uVar6 & 0x1f) & 1) != 0)) || (uVar6 != 0x1c))
    {
      *piVar1 = *(int *)(param_1 + 100);
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x24);
      uVar2 = *(uint *)(param_1 + 0x2c);
      iVar3 = FUN_10111c30(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x15dc),uVar2 * uVar6);
      *piVar1 = iVar3;
      if (iVar3 != -1) {
        iVar3 = *(int *)(param_1 + 0x58);
        uVar7 = 0;
        local_68 = uVar6;
        local_60 = param_2;
        if (uVar6 != 0) {
          do {
            uVar6 = 0;
            if (uVar2 != 0) {
              uVar4 = 7;
              if (iVar3 == 0) {
                uVar4 = 5;
              }
              do {
                local_58 = 0x1d;
                if (iVar3 == 0) {
                  _local_50 = CONCAT44(uVar7,uVar6);
                }
                else {
                  _local_50 = CONCAT44(1,uVar7);
                }
                uStack_48 = (ulonglong)(iVar3 == 0);
                uStack_54 = uVar4;
                FUN_10112730(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x15dc),&local_6c,*piVar1,
                             uVar6 + uVar2 * uVar7);
                iVar5 = 0x10;
                if (iVar3 == 0) {
                  iVar5 = 0xc;
                }
                FUN_10112a10(*(int *)(param_1 + 0x48) + 0x520,*(undefined4 *)(param_1 + 0x4c),
                             *(undefined4 *)(iVar5 + param_1 + 0x48),&local_58,local_6c);
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar2);
            }
            uVar7 = uVar7 + 1;
            param_2 = local_60;
          } while (uVar7 < local_68);
        }
      }
    }
  }
  return *(int *)(local_64 + 0x70) + param_2;
}

