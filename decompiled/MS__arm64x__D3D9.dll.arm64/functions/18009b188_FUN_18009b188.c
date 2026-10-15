/*
 * FUN_18009b188 at 18009b188
 * undefined FUN_18009b188(void)
 * Address ranges: 18009b188-18009b2e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18009b188(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong local_70;
  longlong local_68;
  uint local_60;
  byte local_5c;
  byte local_5b;
  undefined2 local_5a;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined1 local_40;
  
  local_70 = 0x4e47534f;
  local_68 = 0x800000000;
  lVar2 = 0;
  iVar4 = 0;
  do {
    pcVar1 = (char *)(param_2 + 0x81 + lVar2);
    lVar2 = lVar2 + 1;
    if (*pcVar1 != '\0') {
      iVar4 = iVar4 + 1;
    }
  } while (lVar2 != 6);
  local_48 = 0x210;
  local_40 = 1;
  local_58 = thunk_FUN_180102f80(0x210);
  lStack_50 = local_58;
  FUN_1800f5a90(&local_58,&local_70,0x10);
  lVar2 = 0;
  do {
    if (*(char *)(param_2 + 0x81 + lVar2) != '\0') {
      lVar3 = lVar2 * 8;
      local_5a = 0;
      local_70 = (ulonglong)CONCAT14((&DAT_180231425)[lVar3],iVar4 * 0x18 + 8);
      local_68 = (ulonglong)(uint)(&DAT_180231420)[lVar2 * 2] << 0x20;
      local_60 = (uint)(byte)(&DAT_180231426)[lVar3];
      local_5c = (&DAT_180231424)[lVar3];
      local_5b = ~local_5c & 0xf;
      FUN_1800f5a90(&local_58,&local_70,0x18);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 6);
  FUN_1800f5a90(&local_58,s_SV_TARGET_18024c590,10);
  FUN_1800f5a90(&local_58,&DAT_180235aa4,-((int)lStack_50 - (int)local_58) & 3);
  lVar2 = local_58;
  *(int *)(local_58 + 4) = ((int)lStack_50 - (int)local_58) + -8;
  *(int *)(local_58 + 8) = iVar4;
  FUN_1800f5a90(param_1,local_58,lStack_50 - local_58);
  thunk_FUN_180102fc0(lVar2);
  return 1;
}

