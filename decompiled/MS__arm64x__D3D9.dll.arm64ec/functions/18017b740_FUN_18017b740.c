/*
 * FUN_18017b740 at 18017b740
 * undefined FUN_18017b740(void)
 * Address ranges: 18017b740-18017b853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18017b740(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  if (*(char *)(param_3 + 0x59) != '\0') {
    FUN_180215058(param_2,2,0x2000068,*(char *)(param_3 + 0x59),local_50,0);
  }
  uVar4 = 0;
  if (*(int *)(param_3 + 0x70) != 0) {
    do {
      local_50[0] = *(undefined4 *)(param_3 + 0x60 + uVar4 * 4);
      local_48 = 4;
      FUN_180215058(param_2,4,0x4000069,uVar4,local_50,0x10);
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_3 + 0x70));
  }
  if (1 < *(uint *)(param_3 + 0x538)) {
    iVar2 = *(int *)(param_3 + 0x530);
    if (*(char *)(param_3 + 0x53d) == '\0') {
      FUN_180215058(param_2,2,0x1835,0x1a,local_50,0);
      lVar3 = 0x60;
      param_3 = param_3 + (ulonglong)(iVar2 * 6 - 6) * 0x10;
    }
    else {
      uVar1 = iVar2 * 0x18;
      FUN_180215058(param_2,2,0x1835,uVar1 | 2,local_50,0);
      lVar3 = (ulonglong)uVar1 << 2;
    }
    FUN_180214fe8(param_2,param_3 + 0x544,lVar3);
  }
  return;
}

