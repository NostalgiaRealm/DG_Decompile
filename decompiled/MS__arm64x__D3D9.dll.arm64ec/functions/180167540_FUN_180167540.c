/*
 * FUN_180167540 at 180167540
 * undefined FUN_180167540(void)
 * Address ranges: 180167540-1801676af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180167540(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  code *extraout_x11;
  byte bVar5;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
  (*extraout_x11)(param_2,&local_40,&iStack_3c,&local_38,&iStack_34);
  if ((((local_40 == *(int *)(param_1 + 0x69b0)) && (iStack_3c == *(int *)(param_1 + 0x69b4))) &&
      (local_38 == *(int *)(param_1 + 0x69b8))) && (iStack_34 == *(int *)(param_1 + 0x69bc))) {
    bVar5 = *(byte *)(param_1 + 0xf691);
  }
  else {
    *(int *)(param_1 + 0x69b0) = local_40;
    *(int *)(param_1 + 0x69b4) = iStack_3c;
    *(int *)(param_1 + 0x69b8) = local_38;
    *(int *)(param_1 + 0x69bc) = iStack_34;
    *(undefined1 *)(param_1 + 0xf691) = 1;
    bVar5 = 1;
    *(int *)(param_1 + 0x6510) = local_40;
    *(int *)(param_1 + 0x6514) = iStack_3c;
    *(int *)(param_1 + 0x6518) = local_38;
    *(int *)(param_1 + 0x651c) = iStack_34;
    *(undefined1 *)(param_1 + 0xf6c3) = 1;
  }
  if ((*(uint *)(param_2 + 0x2c) < 0xe) &&
     (((local_40 != 0xff || (iStack_3c != 0xff)) || ((local_38 != 0xff || (iStack_34 != 0xff)))))) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = '\0';
  }
  cVar2 = *(char *)(param_1 + 0x766e);
  *(char *)(param_1 + 0x766e) = cVar4;
  *(byte *)(param_1 + 0xf688) = cVar4 != cVar2 | *(byte *)(param_1 + 0xf688);
  uVar1 = *(uint *)(param_1 + 0x699c);
  uVar3 = (uint)(*(char *)(param_1 + 0x766d) == '\0' && cVar4 != '\0');
  *(uint *)(param_1 + 0x699c) = uVar3;
  *(byte *)(param_1 + 0xf691) = uVar1 != uVar3 | bVar5;
  return;
}

