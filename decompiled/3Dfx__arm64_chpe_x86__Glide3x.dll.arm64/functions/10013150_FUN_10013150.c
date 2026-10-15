/*
 * FUN_10013150 at 10013150
 * undefined FUN_10013150(void)
 * Address ranges: 10013150-100132d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10013150(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = 0;
  FUN_1001c840(param_1,&local_20,&local_1c);
  iVar1 = param_1 + local_20 * 0x104 + 0x3574;
  if (local_20 == -1) {
    iVar1 = 0;
  }
  iVar3 = param_1 + local_1c * 0x104 + 0x3574;
  if (local_1c == -1) {
    iVar3 = 0;
  }
  if (iVar1 == 0) {
LAB_10013250:
    local_18 = 0;
  }
  else {
    if ((iVar3 != 0) &&
       (((*(char *)(iVar3 + 0x48) != '\0' && (*(int *)(iVar1 + 0x28) != *(int *)(iVar3 + 0x28))) ||
        (*(int *)(iVar1 + 0x2c) != *(int *)(iVar3 + 0x2c))))) {
      if (*(int *)(iVar1 + 0xf4) == 0) {
        FUN_10038af8(iVar1,*(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x2c),
                     *(undefined4 *)(iVar1 + 0x30),*(undefined1 *)(*(int *)(param_1 + 4) + 0x54),
                     (int *)(iVar1 + 0xf4),iVar1 + 0xf8);
      }
      iVar3 = 0;
    }
    if (*(char *)(iVar1 + 0x48) != '\0') goto LAB_10013250;
    local_18 = *(undefined4 *)(iVar1 + 0xb4);
  }
  if (iVar3 == 0) {
    local_14 = 0;
    iVar3 = iVar1;
    if (iVar1 == 0) goto LAB_1001329c;
  }
  else {
    if (*(char *)(iVar3 + 0x48) == '\0') {
      local_14 = 0;
    }
    else {
      local_14 = *(undefined4 *)(iVar3 + 0xb0);
    }
    if (*(char *)(iVar3 + 0x48) == '\0') {
LAB_1001329c:
      uVar2 = 0;
      goto LAB_100132a0;
    }
  }
  uVar2 = *(undefined4 *)(iVar3 + 0xf8);
LAB_100132a0:
  FUN_1006b8a0(*(undefined4 *)(param_1 + 0x3300),*(undefined4 *)(param_1 + 0x3304),2,&local_18,uVar2
              );
  return;
}

