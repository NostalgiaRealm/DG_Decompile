/*
 * FUN_180069470 at 180069470
 * undefined FUN_180069470(void)
 * Address ranges: 180069470-180069553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180069470(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(char *)(param_3 + 0x59) != '\0') {
    FUN_1800f5b00(param_2,2,0x2000068);
  }
  uVar4 = 0;
  if (*(int *)(param_3 + 0x70) != 0) {
    do {
      FUN_1800f5b00(param_2,4,0x4000069,uVar4,*(undefined4 *)(param_3 + 0x60 + uVar4 * 4),4);
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_3 + 0x70));
  }
  if (1 < *(uint *)(param_3 + 0x538)) {
    iVar2 = *(int *)(param_3 + 0x530);
    if (*(char *)(param_3 + 0x53d) == '\0') {
      FUN_1800f5b00(param_2,2,0x1835,0x1a);
      lVar3 = 0x60;
      param_3 = param_3 + (ulonglong)(iVar2 * 6 - 6) * 0x10;
    }
    else {
      uVar1 = iVar2 * 0x18;
      FUN_1800f5b00(param_2,2,0x1835,uVar1 | 2);
      lVar3 = (ulonglong)uVar1 << 2;
    }
    FUN_1800f5a90(param_2,param_3 + 0x544,lVar3);
  }
  return;
}

