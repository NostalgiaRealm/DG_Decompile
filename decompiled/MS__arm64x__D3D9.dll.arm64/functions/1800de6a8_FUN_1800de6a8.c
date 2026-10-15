/*
 * FUN_1800de6a8 at 1800de6a8
 * undefined FUN_1800de6a8(void)
 * Address ranges: 1800de6a8-1800de733
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800de6a8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar3 = FUN_1800e1240(*(undefined8 *)(param_1 + 8));
  *(longlong *)(param_1 + 0x480) = lVar3;
  if (lVar3 == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x8e);
    if (*(char *)(param_2 + 0x22) == '\0') {
      uVar5 = 1;
      uVar4 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0x96);
      uVar4 = *(undefined4 *)(param_2 + 0x92);
    }
    *(undefined4 *)(lVar3 + 0x668) = *(undefined4 *)(param_2 + 0x8a);
    *(undefined4 *)(lVar3 + 0x66c) = uVar1;
    *(undefined4 *)(lVar3 + 0x670) = uVar4;
    *(undefined4 *)(lVar3 + 0x674) = uVar5;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 4);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x480);
    *(undefined4 *)(*(longlong *)(param_1 + 0x480) + 0x678) = *(undefined4 *)(param_1 + 0x474);
    bVar2 = *(longlong *)(param_1 + 0x10) != 0;
  }
  return bVar2;
}

