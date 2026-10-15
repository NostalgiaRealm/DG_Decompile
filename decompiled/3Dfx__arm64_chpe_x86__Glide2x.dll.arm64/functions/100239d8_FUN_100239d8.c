/*
 * FUN_100239d8 at 100239d8
 * undefined FUN_100239d8(void)
 * Address ranges: 100239d8-10023b5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100239d8(int param_1)

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
  FUN_1002be80(param_1,&local_20,&local_1c);
  iVar1 = param_1 + local_20 * 0x104 + 0x33f4;
  if (local_20 == -1) {
    iVar1 = 0;
  }
  iVar3 = param_1 + local_1c * 0x104 + 0x33f4;
  if (local_1c == -1) {
    iVar3 = 0;
  }
  if (iVar1 == 0) {
LAB_10023ad8:
    local_18 = 0;
  }
  else {
    if ((iVar3 != 0) &&
       (((*(char *)(iVar3 + 0x48) != '\0' && (*(int *)(iVar1 + 0x28) != *(int *)(iVar3 + 0x28))) ||
        (*(int *)(iVar1 + 0x2c) != *(int *)(iVar3 + 0x2c))))) {
      if (*(int *)(iVar1 + 0xf4) == 0) {
        FUN_10049780(iVar1,*(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x2c),
                     *(undefined4 *)(iVar1 + 0x30),*(undefined1 *)(*(int *)(param_1 + 4) + 0x54),
                     (int *)(iVar1 + 0xf4),iVar1 + 0xf8);
      }
      iVar3 = 0;
    }
    if (*(char *)(iVar1 + 0x48) != '\0') goto LAB_10023ad8;
    local_18 = *(undefined4 *)(iVar1 + 0xb4);
  }
  if (iVar3 == 0) {
    local_14 = 0;
    iVar3 = iVar1;
    if (iVar1 == 0) goto LAB_10023b24;
  }
  else {
    if (*(char *)(iVar3 + 0x48) == '\0') {
      local_14 = 0;
    }
    else {
      local_14 = *(undefined4 *)(iVar3 + 0xb0);
    }
    if (*(char *)(iVar3 + 0x48) == '\0') {
LAB_10023b24:
      uVar2 = 0;
      goto LAB_10023b28;
    }
  }
  uVar2 = *(undefined4 *)(iVar3 + 0xf8);
LAB_10023b28:
  FUN_10067c00(*(undefined4 *)(param_1 + 0x3180),*(undefined4 *)(param_1 + 0x3184),2,&local_18,uVar2
              );
  return;
}

