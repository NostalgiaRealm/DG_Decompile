/*
 * FUN_100492e0 at 100492e0
 * undefined FUN_100492e0(void)
 * Address ranges: 100492e0-1004940b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100492e0(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_50 [4];
  
  iVar4 = FUN_10049410(param_1,*(int *)(param_1 + 0x34) + param_2,param_3);
  uVar3 = iVar4 != -1;
  if (iVar4 != -1) {
    uVar6 = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x50) * 0x10 + 4) +
            *(int *)(param_1 + 0x54) * 0x1c;
    puVar1 = (uint *)(iVar2 + 8);
    if (*puVar1 != 0) {
      local_50[0] = param_3;
      do {
        iVar5 = FUN_1007de60(*(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) + *(int *)(param_1 + 0x44),
                             *(int *)(param_1 + 0x44) + iVar4);
        if (iVar5 == 0) {
          *(int *)(param_1 + 0x4c) = (*(int *)(param_1 + 0x4c) - local_50[0]) + -1;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *puVar1);
    }
    if (uVar6 == *puVar1) {
      local_50[0] = iVar4;
      uVar3 = FUN_10047380(iVar2 + 4,local_50);
    }
  }
  return uVar3;
}

