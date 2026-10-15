/*
 * FUN_100892ac at 100892ac
 * undefined4 __fastcall FUN_100892ac(undefined4 param_1, int param_2)
 * Address ranges: 100892ac-100893c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100892ac(void *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined4 *local_20;
  int local_1c;
  void *local_10;
  int local_c;
  int local_8;
  
  local_30 = 0x4e47534f;
  local_2c = 0;
  uVar2 = 0;
  local_28 = 0;
  local_24 = 8;
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 1;
    if (*(char *)(param_2 + 0x75 + uVar2) == '\0') {
      iVar1 = iVar3;
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar1;
  } while (uVar2 < 6);
  local_10 = param_1;
  local_c = iVar1;
  FUN_10036e19(&local_20,0x210);
  FUN_100c3d16(&local_20,&local_30,0x10);
  local_8 = iVar1 * 0x18;
  iVar3 = local_8 + 8;
  uVar2 = 0;
  do {
    if (*(char *)(param_2 + 0x75 + uVar2) != '\0') {
      local_34 = (uint)(byte)(&DAT_100d2609)[uVar2 * 8];
      local_2c = (&DAT_100d2604)[uVar2 * 2];
      local_28 = (uint)(byte)(&DAT_100d260a)[uVar2 * 8];
      local_30 = 0;
      local_24 = (uint)(CONCAT11(~(&DAT_100d2608)[uVar2 * 8],(&DAT_100d2608)[uVar2 * 8]) & 0xfff);
      local_38 = iVar3;
      FUN_100c3d16(&local_20,&local_38,0x18);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  FUN_100c3d16(&local_20,(undefined4 *)s_SV_TARGET_100de958,10);
  FUN_100c3d16(&local_20,(undefined4 *)&DAT_100d67d4,-(local_1c - (int)local_20) & 3);
  local_20[2] = local_c;
  local_20[1] = (local_1c - (int)local_20) - 8;
  FUN_100c3d16(local_10,local_20,local_1c - (int)local_20);
  thunk_FUN_100cfd6c(local_20);
  return 1;
}

