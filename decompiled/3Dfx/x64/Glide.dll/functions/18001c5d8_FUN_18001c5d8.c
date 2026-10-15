/*
 * FUN_18001c5d8 at 18001c5d8
 * undefined __fastcall FUN_18001c5d8(longlong param_1)
 * Address ranges: 18001c5d8-18001c73c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001c5d8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_res10[0] = 0;
  local_res8[0] = 0;
  FUN_180021868(param_1,local_res10,local_res8);
  lVar1 = 0;
  if (local_res10[0] != -1) {
    lVar1 = param_1 + 0x3568 + (longlong)local_res10[0] * 0x180;
  }
  lVar2 = 0;
  if (local_res8[0] != -1) {
    lVar2 = param_1 + 0x3568 + (longlong)local_res8[0] * 0x180;
  }
  if (lVar1 == 0) {
LAB_18001c6bd:
    local_18 = 0;
  }
  else {
    if ((lVar2 != 0) &&
       (((*(char *)(lVar2 + 0x48) != '\0' && (*(int *)(lVar1 + 0x28) != *(int *)(lVar2 + 0x28))) ||
        (*(int *)(lVar1 + 0x2c) != *(int *)(lVar2 + 0x2c))))) {
      if (*(longlong *)(lVar1 + 0x160) == 0) {
        FUN_1800373f4(lVar1,*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c),
                      *(undefined4 *)(lVar1 + 0x30),*(byte *)(*(longlong *)(param_1 + 8) + 0x54),
                      (longlong *)(lVar1 + 0x160),lVar1 + 0x168);
      }
      lVar2 = 0;
    }
    if (*(char *)(lVar1 + 0x48) != '\0') goto LAB_18001c6bd;
    local_18 = *(undefined8 *)(lVar1 + 0xe0);
  }
  if (lVar2 == 0) {
    local_10 = 0;
    if (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x168);
      goto LAB_18001c70c;
    }
  }
  else {
    if (*(char *)(lVar2 + 0x48) == '\0') {
      local_10 = 0;
    }
    else {
      local_10 = *(undefined8 *)(lVar2 + 0xd8);
    }
    if (*(char *)(lVar2 + 0x48) != '\0') {
      lVar1 = *(longlong *)(lVar2 + 0x168);
      goto LAB_18001c70c;
    }
  }
  lVar1 = 0;
LAB_18001c70c:
  FUN_18004d8a0(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),2,
                (longlong)&local_18,lVar1);
  return;
}

