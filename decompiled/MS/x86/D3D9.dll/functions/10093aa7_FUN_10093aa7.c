/*
 * FUN_10093aa7 at 10093aa7
 * undefined4 __stdcall FUN_10093aa7(uint param_1, int param_2)
 * Address ranges: 10093aa7-10093b66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10093aa7(uint param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 local_74 [14];
  int local_3c;
  int local_28;
  int local_20;
  int local_1c;
  char local_8;
  char local_7;
  
  uVar2 = param_1;
  if (*(char *)(param_1 - 0x59ef) != '\0') {
    return 0x8876086c;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar6 = false;
  param_1 = 0;
  if (*(int *)(uVar2 - 0x58bc) != 0) {
    do {
      if (bVar6) goto LAB_10093b2c;
      puVar4 = (undefined4 *)(*(int *)(*(int *)(uVar2 - 0x58c0) + param_1 * 4) + 0x48);
      puVar5 = local_74;
      for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      bVar6 = local_7 == '\0';
      param_1 = param_1 + 1;
    } while (param_1 < *(uint *)(uVar2 - 0x58bc));
    if (bVar6) goto LAB_10093b2c;
  }
  cVar1 = *(char *)(**(int **)(uVar2 - 0x5920) + 0xb5);
  puVar4 = (undefined4 *)(**(int **)(uVar2 - 0x5920) + 0x48);
  puVar5 = local_74;
  for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (cVar1 != '\0') {
    return 0;
  }
LAB_10093b2c:
  if (((local_28 != 0x18) && (local_28 != 0x17)) && (local_28 != 0x16)) {
    return 0x8876086c;
  }
  if (local_20 != 0) {
    if (local_20 != 1) {
      return 0x8876086c;
    }
    if (local_1c != 0) {
      return 0x8876086c;
    }
  }
  if (local_8 == '\0') {
    return 0x8876086c;
  }
  if (local_3c == 1) {
    return 0;
  }
  return 0x8876086c;
}

