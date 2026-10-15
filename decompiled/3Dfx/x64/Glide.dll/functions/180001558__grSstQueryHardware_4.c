/*
 * _grSstQueryHardware@4 at 180001558
 * undefined8 __fastcall _grSstQueryHardware@4(undefined4 * param_1)
 * Address ranges: 180001558-1800016d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 _grSstQueryHardware_4(undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  
                    /* 0x1558  78  _grSstQueryHardware@4
                       0x1558  239  grSstQueryHardware */
  puVar4 = FUN_180015384();
  FUN_180015564((longlong)puVar4);
  puVar4 = FUN_180015384();
  uVar3 = FUN_18001638c((longlong)puVar4);
  puVar4 = FUN_180015384();
  cVar2 = FUN_180015564((longlong)puVar4);
  if (cVar2 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(*(longlong *)(puVar4 + 0x30) + 0x833);
  }
  lVar6 = (ulonglong)uVar3 * 0x20;
  *param_1 = 1;
  bVar1 = (&DAT_18006b168)[lVar6];
  param_1[1] = (uint)bVar1;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      puVar4 = FUN_180015384();
      cVar2 = FUN_180015564((longlong)puVar4);
      if (cVar2 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(*(longlong *)(puVar4 + 0x30) + 0x82b);
      }
      param_1[2] = uVar3 >> 0x14;
      param_1[3] = 1;
      param_1[4] = *(undefined4 *)(&DAT_18006b164 + lVar6);
      puVar4 = FUN_180015384();
      cVar2 = FUN_180015564((longlong)puVar4);
      if (cVar2 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(*(longlong *)(puVar4 + 0x30) + 0x82f);
      }
      param_1[5] = uVar3 >> 0x14;
      return 1;
    }
    if (((bVar1 != 3) && (bVar1 != 4)) && (bVar1 != 5)) {
      return 0;
    }
  }
  puVar4 = FUN_180015384();
  cVar2 = FUN_180015564((longlong)puVar4);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(puVar4 + 0x30) + 0x82b);
  }
  uVar5 = 0;
  param_1[2] = uVar3 >> 0x14;
  param_1[3] = *(undefined4 *)(&DAT_18006b160 + lVar6);
  param_1[4] = uVar7;
  param_1[5] = 0;
  if (uVar7 != 0) {
    do {
      param_1[uVar5 * 2 + 6] = *(undefined4 *)(&DAT_18006b164 + lVar6);
      puVar4 = FUN_180015384();
      cVar2 = FUN_180015564((longlong)puVar4);
      if (cVar2 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(*(longlong *)(puVar4 + 0x30) + 0x82f);
      }
      param_1[uVar5 * 2 + 7] = uVar3 >> 0x14;
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar3;
    } while (uVar3 < uVar7);
  }
  return 1;
}

