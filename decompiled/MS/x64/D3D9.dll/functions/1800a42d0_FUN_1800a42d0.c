/*
 * FUN_1800a42d0 at 1800a42d0
 * undefined8 __fastcall FUN_1800a42d0(longlong * param_1, longlong param_2)
 * Address ranges: 1800a42d0-1800a4430
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800a42d0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  byte local_64;
  byte local_63;
  undefined2 local_62;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined1 local_48;
  
  iVar4 = 0;
  local_78 = 0x4e47534f;
  lVar5 = 0;
  local_70 = 0;
  local_6c = 8;
  do {
    iVar2 = iVar4 + 1;
    if (*(char *)(param_2 + 0x81 + lVar5) == '\0') {
      iVar2 = iVar4;
    }
    iVar4 = iVar2;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 6);
  local_48 = 1;
  local_50 = 0x210;
  local_60 = (undefined8 *)thunk_FUN_1800fbccc(0x210);
  local_58 = local_60;
  FUN_1800edd90((longlong *)&local_60,&local_78,0x10);
  lVar5 = 0;
  do {
    lVar3 = lVar5;
    if (*(char *)(param_2 + 0x81 + lVar3) != '\0') {
      local_6c = (&DAT_1800fe9a8)[lVar3 * 2];
      local_68 = (uint)(byte)(&DAT_1800fe9ae)[lVar3 * 8];
      local_64 = (&DAT_1800fe9ac)[lVar3 * 8];
      local_63 = ~local_64 & 0xf;
      local_78 = (ulonglong)CONCAT14((&DAT_1800fe9ad)[lVar3 * 8],iVar4 * 0x18 + 8);
      local_70 = 0;
      local_62 = 0;
      FUN_1800edd90((longlong *)&local_60,&local_78,0x18);
    }
    lVar5 = lVar3 + 1;
  } while (lVar3 + 1 != 6);
  FUN_1800edd90((longlong *)&local_60,(undefined8 *)s_SV_TARGET_180111da0,
                (ulonglong)((int)lVar3 + 5));
  FUN_1800edd90((longlong *)&local_60,(undefined8 *)&DAT_180103acc,
                (ulonglong)(-((int)local_58 - (int)local_60) & 3));
  puVar1 = local_60;
  *(int *)((longlong)local_60 + 4) = ((int)local_58 - (int)local_60) + -8;
  *(int *)(local_60 + 1) = iVar4;
  FUN_1800edd90(param_1,local_60,(longlong)local_58 - (longlong)local_60);
  FUN_1800fbcf0(puVar1);
  return 1;
}

