/*
 * FUN_1008f928 at 1008f928
 * undefined FUN_1008f928(void)
 * Address ranges: 1008f928-1008fa77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008f928(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  
  local_64 = (uint)*(byte *)(param_3 + 0x4d);
  if (local_64 != 0) {
    local_68 = 0x2000068;
    uStack_6c = 2;
    local_70 = param_2;
    FUN_10122cd8(&local_70,0x10);
  }
  uVar2 = 0;
  if (*(uint *)(param_3 + 0x60) != 0) {
    do {
      local_68 = 0x4000069;
      uStack_6c = 4;
      local_60 = *(undefined4 *)(param_3 + 0x50 + uVar2 * 4);
      uStack_5c = 4;
      local_70 = param_2;
      local_64 = uVar2;
      FUN_10122cd8(&local_70,0x18);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_3 + 0x60));
  }
  if (1 < *(uint *)(param_3 + 0x528)) {
    if (*(char *)(param_3 + 0x52d) == '\0') {
      uStack_6c = 2;
      param_3 = param_3 + *(int *)(param_3 + 0x520) * 0x60 + 0x4d4;
      local_64 = 0x1a;
      local_68 = 0x1835;
      local_70 = param_2;
      FUN_10122cd8(&local_70,0x10);
      iVar1 = 0x60;
    }
    else {
      iVar1 = *(int *)(param_3 + 0x520);
      uStack_6c = 2;
      local_64 = iVar1 * 0x18 + 2;
      local_68 = 0x1835;
      local_70 = param_2;
      FUN_10122cd8(&local_70,0x10);
      iVar1 = iVar1 * 0x60;
      param_3 = param_3 + 0x534;
    }
    FUN_10122c50(param_2,param_3,iVar1);
  }
  return;
}

