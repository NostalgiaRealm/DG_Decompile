/*
 * FUN_100353c0 at 100353c0
 * undefined FUN_100353c0(void)
 * Address ranges: 100353c0-10035553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100353c0(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  code *extraout_w11;
  byte bVar5;
  int local_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2,&local_30,&iStack_2c,&local_28,&iStack_24);
  if ((((local_30 == *(int *)(param_1 + 0xa00)) && (iStack_2c == *(int *)(param_1 + 0xa04))) &&
      (local_28 == *(int *)(param_1 + 0xa08))) && (iStack_24 == *(int *)(param_1 + 0xa0c))) {
    bVar5 = *(byte *)(param_1 + 0x1d41);
  }
  else {
    *(int *)(param_1 + 0xa00) = local_30;
    *(int *)(param_1 + 0xa04) = iStack_2c;
    *(int *)(param_1 + 0xa08) = local_28;
    *(int *)(param_1 + 0xa0c) = iStack_24;
    *(undefined1 *)(param_1 + 0x1d41) = 1;
    *(int *)(param_1 + 0x5f0) = local_30;
    *(int *)(param_1 + 0x5f4) = iStack_2c;
    *(int *)(param_1 + 0x5f8) = local_28;
    *(int *)(param_1 + 0x5fc) = iStack_24;
    *(undefined1 *)(param_1 + 0x1d48) = 1;
    bVar5 = 1;
  }
  if ((*(uint *)(param_2 + 0x1c) < 0xe) &&
     (((local_30 != 0xff || (iStack_2c != 0xff)) || ((local_28 != 0xff || (iStack_24 != 0xff)))))) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  cVar2 = *(char *)(param_1 + 0x191e);
  *(char *)(param_1 + 0x191e) = cVar3;
  *(byte *)(param_1 + 0x1d38) = cVar3 != cVar2 | *(byte *)(param_1 + 0x1d38);
  uVar1 = *(uint *)(param_1 + 0x9ec);
  uVar4 = (uint)(*(char *)(param_1 + 0x191d) == '\0' && cVar3 != '\0');
  *(uint *)(param_1 + 0x9ec) = uVar4;
  *(byte *)(param_1 + 0x1d41) = uVar1 != uVar4 | bVar5;
  return;
}

