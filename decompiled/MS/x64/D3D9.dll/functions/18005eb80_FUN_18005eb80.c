/*
 * FUN_18005eb80 at 18005eb80
 * undefined __fastcall FUN_18005eb80(longlong param_1, longlong * param_2)
 * Address ranges: 18005eb80-18005eca4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005eb80(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  int local_18;
  int local_14;
  int iStack_10;
  int iStack_c;
  
  (**(code **)(*param_2 + 0x28))(param_2,&local_18,&local_14,&iStack_10,&iStack_c);
  if ((((local_18 == *(int *)(param_1 + 0x69b0)) && (local_14 == *(int *)(param_1 + 0x69b4))) &&
      (iStack_10 == *(int *)(param_1 + 0x69b8))) && (iStack_c == *(int *)(param_1 + 0x69bc))) {
    bVar5 = *(byte *)(param_1 + 0xf691);
  }
  else {
    *(int *)(param_1 + 0x69b0) = local_18;
    bVar5 = 1;
    *(int *)(param_1 + 0x69b4) = local_14;
    *(int *)(param_1 + 0x69b8) = iStack_10;
    *(int *)(param_1 + 0x69bc) = iStack_c;
    *(undefined1 *)(param_1 + 0xf691) = 1;
    *(int *)(param_1 + 0x6510) = local_18;
    *(int *)(param_1 + 0x6514) = local_14;
    *(int *)(param_1 + 0x6518) = iStack_10;
    *(int *)(param_1 + 0x651c) = iStack_c;
    *(undefined1 *)(param_1 + 0xf6c3) = 1;
  }
  if ((*(uint *)((longlong)param_2 + 0x2c) < 0xe) &&
     (((local_18 != 0xff || (local_14 != 0xff)) || ((iStack_10 != 0xff || (iStack_c != 0xff)))))) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  cVar1 = *(char *)(param_1 + 0x766e);
  *(char *)(param_1 + 0x766e) = cVar3;
  *(byte *)(param_1 + 0xf688) = *(byte *)(param_1 + 0xf688) | cVar3 != cVar1;
  if ((*(char *)(param_1 + 0x766d) == '\0') && (cVar3 != '\0')) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  iVar2 = *(int *)(param_1 + 0x699c);
  *(int *)(param_1 + 0x699c) = iVar4;
  *(byte *)(param_1 + 0xf691) = iVar2 != iVar4 | bVar5;
  return;
}

