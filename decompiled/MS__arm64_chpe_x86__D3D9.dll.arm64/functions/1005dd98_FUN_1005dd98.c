/*
 * FUN_1005dd98 at 1005dd98
 * undefined FUN_1005dd98(void)
 * Address ranges: 1005dd98-1005df77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1005dd98(int param_1,byte param_2,byte param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_40 [8];
  int local_38;
  
  FUN_1011bc80(*(int *)(param_1 + 0xf6d4) + 0x38,auStack_40,param_2 + 1,0,0);
  iVar7 = local_38;
  if (local_38 != 0) {
    FUN_1011bc80(*(int *)(param_1 + 0xf6d0) + 0x38,auStack_40,param_3 + 1,0,0);
    if (local_38 != 0) {
      piVar1 = (int *)(param_1 + 0x4c);
      puVar2 = (uint *)(param_1 + 0x58);
      if (*piVar1 != *(int *)(param_1 + 0x48)) {
        *puVar2 = *piVar1 - *(int *)(param_1 + 0x44);
      }
      *(int *)(param_1 + 0x44) = iVar7;
      *(int *)(param_1 + 100) = local_38;
      piVar3 = (int *)(param_1 + 0x50);
      *piVar1 = iVar7;
      if (param_2 == 0) {
        uVar4 = *puVar2;
        iVar5 = *(int *)(param_1 + 0x54) + *piVar3;
        *piVar3 = iVar5;
        uVar6 = uVar4;
        if ((param_4 != 0) && (param_4 != *(int *)(param_1 + 0x60))) {
          uVar6 = iVar5 * param_4;
          if (uVar6 < uVar4) {
            *(int *)(param_1 + 0x5c) = uVar4 - uVar6;
            uVar6 = uVar4;
          }
          else {
            *(int *)(param_1 + 0x5c) = 0;
          }
        }
        iVar7 = uVar6 + iVar7;
        *piVar1 = iVar7;
      }
      else {
        *piVar3 = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *puVar2 = 0;
      }
      if (param_4 != 0) {
        *(int *)(param_1 + 0x60) = param_4;
      }
      *(int *)(param_1 + 0x54) = 0;
      piVar1 = (int *)(param_1 + 0x68);
      piVar3 = (int *)(param_1 + 0x6c);
      *(int *)(param_1 + 0x48) = iVar7;
      if (param_3 != 0) {
        *piVar1 = 0;
        *piVar3 = 0;
        return 1;
      }
      iVar7 = *piVar3;
      iVar5 = *piVar1;
      *piVar3 = 0;
      *piVar1 = iVar7 + iVar5;
      *(int *)(param_1 + 100) = local_38 + (iVar7 + iVar5) * 4;
      return 1;
    }
    piVar1 = (int *)(*(int *)(param_1 + 0xf6d4) + 0x2c);
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
  }
  return 0;
}

