/*
 * FUN_180074a78 at 180074a78
 * undefined __fastcall FUN_180074a78(undefined8 param_1, longlong * param_2, longlong param_3)
 * Address ranges: 180074a78-180074b3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180074a78(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (*(byte *)(param_3 + 0x59) != 0) {
    FUN_1800eddec(param_2,2,0x2000068,(ulonglong)*(byte *)(param_3 + 0x59));
  }
  uVar3 = 0;
  if (*(int *)(param_3 + 0x70) != 0) {
    do {
      FUN_1800eddec(param_2,4,0x4000069,uVar3);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_3 + 0x70));
  }
  if (1 < *(uint *)(param_3 + 0x538)) {
    iVar4 = *(int *)(param_3 + 0x530) * 6;
    if (*(char *)(param_3 + 0x53d) == '\0') {
      uVar2 = iVar4 - 6;
      iVar4 = 6;
      puVar1 = (undefined8 *)((ulonglong)uVar2 * 0x10 + 0x544 + param_3);
    }
    else {
      puVar1 = (undefined8 *)(param_3 + 0x544);
    }
    FUN_1800ee4a4(param_2,puVar1,iVar4);
  }
  return;
}

