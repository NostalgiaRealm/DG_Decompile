/*
 * FUN_18001d148 at 18001d148
 * undefined __cdecl FUN_18001d148(longlong param_1)
 * Address ranges: 18001d148-18001d26f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d148(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_2c = 0;
  FUN_180023b28(param_1,&local_30,&local_2c);
  lVar1 = param_1 + (longlong)local_30 * 0x180 + 0x3568;
  if (local_30 == -1) {
    lVar1 = 0;
  }
  lVar2 = param_1 + (longlong)local_2c * 0x180 + 0x3568;
  if (local_2c == -1) {
    lVar2 = 0;
  }
  if (lVar1 == 0) {
LAB_18001d20c:
    local_28 = 0;
  }
  else {
    if ((lVar2 != 0) &&
       (((*(char *)(lVar2 + 0x48) != '\0' && (*(int *)(lVar1 + 0x28) != *(int *)(lVar2 + 0x28))) ||
        (*(int *)(lVar1 + 0x2c) != *(int *)(lVar2 + 0x2c))))) {
      if (*(longlong *)(lVar1 + 0x160) == 0) {
        FUN_18003b1a0(lVar1,*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c),
                      *(undefined4 *)(lVar1 + 0x30),*(byte *)(*(longlong *)(param_1 + 8) + 0x54),
                      (undefined8 *)(lVar1 + 0x160),lVar1 + 0x168);
      }
      lVar2 = 0;
    }
    if (*(char *)(lVar1 + 0x48) != '\0') goto LAB_18001d20c;
    local_28 = *(undefined8 *)(lVar1 + 0xe0);
  }
  if (lVar2 == 0) {
    local_20 = 0;
    if (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x168);
      goto LAB_18001d250;
    }
  }
  else {
    if (*(char *)(lVar2 + 0x48) == '\0') {
      local_20 = 0;
    }
    else {
      local_20 = *(undefined8 *)(lVar2 + 0xd8);
    }
    if (*(char *)(lVar2 + 0x48) != '\0') {
      lVar1 = *(longlong *)(lVar2 + 0x168);
      goto LAB_18001d250;
    }
  }
  lVar1 = 0;
LAB_18001d250:
  FUN_180051780(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),2,
                (longlong)&local_28,lVar1);
  return;
}

