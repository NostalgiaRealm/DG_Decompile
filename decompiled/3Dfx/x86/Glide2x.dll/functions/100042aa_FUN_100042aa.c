/*
 * FUN_100042aa at 100042aa
 * undefined4 __fastcall FUN_100042aa(undefined4 * param_1)
 * Address ranges: 100042aa-10004409
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100042aa(undefined4 *param_1)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar2 = FUN_10012760();
  FUN_10012926((int)puVar2);
  puVar2 = FUN_10012760();
  uVar3 = FUN_10013512((int)puVar2);
  puVar2 = FUN_10012760();
  cVar1 = FUN_10012926((int)puVar2);
  if (cVar1 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(*(int *)(puVar2 + 0x1c) + 0x797);
  }
  iVar4 = uVar3 * 0x18;
  *param_1 = 1;
  uVar3 = (uint)(byte)(&DAT_10058170)[iVar4];
  param_1[1] = uVar3;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      puVar2 = FUN_10012760();
      cVar1 = FUN_10012926((int)puVar2);
      if (cVar1 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(*(int *)(puVar2 + 0x1c) + 0x78f);
      }
      param_1[2] = uVar3 >> 0x14;
      param_1[3] = 1;
      param_1[4] = *(undefined4 *)(&DAT_1005816c + iVar4);
      puVar2 = FUN_10012760();
      cVar1 = FUN_10012926((int)puVar2);
      if (cVar1 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(*(int *)(puVar2 + 0x1c) + 0x793);
      }
      param_1[5] = uVar3 >> 0x14;
      return 1;
    }
    if (((uVar3 != 3) && (uVar3 != 4)) && (uVar3 != 5)) {
      return 0;
    }
  }
  puVar2 = FUN_10012760();
  cVar1 = FUN_10012926((int)puVar2);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(*(int *)(puVar2 + 0x1c) + 0x78f);
  }
  uVar6 = 0;
  param_1[2] = uVar3 >> 0x14;
  param_1[3] = *(undefined4 *)(&DAT_10058168 + iVar4);
  param_1[4] = uVar5;
  param_1[5] = 0;
  if (uVar5 != 0) {
    do {
      param_1[uVar6 * 2 + 6] = *(undefined4 *)(&DAT_1005816c + iVar4);
      puVar2 = FUN_10012760();
      cVar1 = FUN_10012926((int)puVar2);
      if (cVar1 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(*(int *)(puVar2 + 0x1c) + 0x793);
      }
      param_1[uVar6 * 2 + 7] = uVar3 >> 0x14;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  return 1;
}

