/*
 * FUN_1004cb90 at 1004cb90
 * undefined FUN_1004cb90(void)
 * Address ranges: 1004cb90-1004cc8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1004cb90(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != *param_2) {
    return false;
  }
  uVar3 = param_1[1];
  if (uVar3 != param_2[1]) {
    return false;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    return param_1[2] == param_2[2];
  }
  if (param_1[3] == param_2[3]) {
    if ((param_3 & 1) != 0) {
      return true;
    }
    if ((uVar3 >> 5 & 1) != 0) {
      return true;
    }
    if ((param_1[4] == param_2[4]) && (param_1[5] == param_2[5])) {
      if ((uVar3 & 1) == 0) {
        iVar1 = 0x18;
        iVar2 = 0x18;
      }
      else {
        if (param_1[6] != param_2[6]) {
          return false;
        }
        iVar1 = 0x1c;
        iVar2 = 0x1c;
      }
      if (*(int *)((int)param_1 + iVar1) == *(int *)((int)param_2 + iVar2)) {
        return true;
      }
    }
    return false;
  }
  return false;
}

