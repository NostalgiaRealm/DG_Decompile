/*
 * FUN_100b67a0 at 100b67a0
 * undefined FUN_100b67a0(void)
 * Address ranges: 100b67a0-100b68e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100b67a0(int param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_30 [16];
  
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar1 = true;
    iVar3 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar3 == 0) {
      FUN_10006560(0);
    }
  }
  if (*(char *)(param_1 + -0x56c0) == '\0') {
    FUN_10121020(auStack_30);
    cVar2 = FUN_100b5780(param_1 + -0x58e0,param_2);
    uVar4 = 0;
    if (cVar2 == '\0') {
      uVar4 = 0x8876086c;
    }
    FUN_10120f70(auStack_30);
  }
  else {
    if (((param_2 & 1) == 0) || (iVar3 = FUN_100bd300(param_1 + 0x18,param_2), iVar3 != 0)) {
      iVar3 = *(int *)(*(int *)(param_1 + -0x56d0) + *(int *)(param_1 + -0x56c4) * 4);
      *(uint *)(iVar3 + 0x49b0) = param_2;
      *(undefined1 *)(iVar3 + 0x93a1) = 1;
    }
    uVar4 = 0;
  }
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar4;
}

