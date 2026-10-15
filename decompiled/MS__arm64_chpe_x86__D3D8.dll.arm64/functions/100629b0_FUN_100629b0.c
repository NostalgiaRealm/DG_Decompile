/*
 * FUN_100629b0 at 100629b0
 * undefined FUN_100629b0(void)
 * Address ranges: 100629b0-10062b43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100629b0(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  code *extraout_w11;
  byte bVar5;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2,&local_40,&iStack_3c,&local_38,&iStack_34);
  if ((((local_40 == *(int *)(param_1 + 0x4d20)) && (iStack_3c == *(int *)(param_1 + 0x4d24))) &&
      (local_38 == *(int *)(param_1 + 0x4d28))) && (iStack_34 == *(int *)(param_1 + 0x4d2c))) {
    bVar5 = *(byte *)(param_1 + 0xd981);
  }
  else {
    *(int *)(param_1 + 0x4d20) = local_40;
    *(int *)(param_1 + 0x4d24) = iStack_3c;
    *(int *)(param_1 + 0x4d28) = local_38;
    *(int *)(param_1 + 0x4d2c) = iStack_34;
    *(undefined1 *)(param_1 + 0xd981) = 1;
    *(int *)(param_1 + 0x4910) = local_40;
    *(int *)(param_1 + 0x4914) = iStack_3c;
    *(int *)(param_1 + 0x4918) = local_38;
    *(int *)(param_1 + 0x491c) = iStack_34;
    *(undefined1 *)(param_1 + 0xd9a8) = 1;
    bVar5 = 1;
  }
  if ((*(uint *)(param_2 + 0x1c) < 0xe) &&
     (((local_40 != 0xff || (iStack_3c != 0xff)) || ((local_38 != 0xff || (iStack_34 != 0xff)))))) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = '\0';
  }
  cVar2 = *(char *)(param_1 + 0x5961);
  *(char *)(param_1 + 0x5961) = cVar4;
  *(byte *)(param_1 + 0xd978) = cVar4 != cVar2 | *(byte *)(param_1 + 0xd978);
  uVar1 = *(uint *)(param_1 + 0x4d0c);
  uVar3 = (uint)(*(char *)(param_1 + 0x5960) == '\0' && cVar4 != '\0');
  *(uint *)(param_1 + 0x4d0c) = uVar3;
  *(byte *)(param_1 + 0xd981) = uVar1 != uVar3 | bVar5;
  return;
}

