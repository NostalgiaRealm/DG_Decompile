/*
 * FUN_180010898 at 180010898
 * undefined __cdecl FUN_180010898(longlong param_1)
 * Address ranges: 180010898-1800109bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180010898(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint local_30;
  uint local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_2c = 0;
  FUN_1800171c0(param_1,&local_30,&local_2c);
  lVar1 = param_1 + (longlong)(int)local_30 * 0x180 + 0x36e8;
  if (local_30 == 0xffffffff) {
    lVar1 = 0;
  }
  lVar2 = param_1 + (longlong)(int)local_2c * 0x180 + 0x36e8;
  if (local_2c == 0xffffffff) {
    lVar2 = 0;
  }
  if (lVar1 == 0) {
LAB_18001095c:
    local_28 = 0;
  }
  else {
    if ((lVar2 != 0) &&
       (((*(char *)(lVar2 + 0x48) != '\0' && (*(int *)(lVar1 + 0x28) != *(int *)(lVar2 + 0x28))) ||
        (*(int *)(lVar1 + 0x2c) != *(int *)(lVar2 + 0x2c))))) {
      if (*(longlong *)(lVar1 + 0x160) == 0) {
        FUN_18002f0a0(lVar1,*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c),
                      *(undefined4 *)(lVar1 + 0x30),*(byte *)(*(longlong *)(param_1 + 8) + 0x54),
                      (undefined8 *)(lVar1 + 0x160),lVar1 + 0x168);
      }
      lVar2 = 0;
    }
    if (*(char *)(lVar1 + 0x48) != '\0') goto LAB_18001095c;
    local_28 = *(undefined8 *)(lVar1 + 0xe0);
  }
  if (lVar2 == 0) {
    local_20 = 0;
    if (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x168);
      goto LAB_1800109a0;
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
      goto LAB_1800109a0;
    }
  }
  lVar1 = 0;
LAB_1800109a0:
  FUN_1800544c0(*(longlong *)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),2,
                (longlong)&local_28,lVar1);
  return;
}

