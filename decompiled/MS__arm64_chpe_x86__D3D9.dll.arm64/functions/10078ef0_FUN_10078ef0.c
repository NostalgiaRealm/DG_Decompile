/*
 * FUN_10078ef0 at 10078ef0
 * undefined FUN_10078ef0(void)
 * Address ranges: 10078ef0-10079087
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10078ef0(int param_1,int param_2)

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
  if ((((local_40 == *(int *)(param_1 + 0x6990)) && (iStack_3c == *(int *)(param_1 + 0x6994))) &&
      (local_38 == *(int *)(param_1 + 0x6998))) && (iStack_34 == *(int *)(param_1 + 0x699c))) {
    bVar5 = *(byte *)(param_1 + 0xf671);
  }
  else {
    *(int *)(param_1 + 0x6990) = local_40;
    *(int *)(param_1 + 0x6994) = iStack_3c;
    *(int *)(param_1 + 0x6998) = local_38;
    *(int *)(param_1 + 0x699c) = iStack_34;
    *(undefined1 *)(param_1 + 0xf671) = 1;
    *(int *)(param_1 + 0x64f0) = local_40;
    *(int *)(param_1 + 0x64f4) = iStack_3c;
    *(int *)(param_1 + 0x64f8) = local_38;
    *(int *)(param_1 + 0x64fc) = iStack_34;
    *(undefined1 *)(param_1 + 0xf6a3) = 1;
    bVar5 = 1;
  }
  if ((*(uint *)(param_2 + 0x1c) < 0xe) &&
     (((local_40 != 0xff || (iStack_3c != 0xff)) || ((local_38 != 0xff || (iStack_34 != 0xff)))))) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = '\0';
  }
  cVar2 = *(char *)(param_1 + 0x764e);
  *(char *)(param_1 + 0x764e) = cVar4;
  *(byte *)(param_1 + 0xf668) = cVar4 != cVar2 | *(byte *)(param_1 + 0xf668);
  uVar1 = *(uint *)(param_1 + 0x697c);
  uVar3 = (uint)(*(char *)(param_1 + 0x764d) == '\0' && cVar4 != '\0');
  *(uint *)(param_1 + 0x697c) = uVar3;
  *(byte *)(param_1 + 0xf671) = uVar1 != uVar3 | bVar5;
  return;
}

