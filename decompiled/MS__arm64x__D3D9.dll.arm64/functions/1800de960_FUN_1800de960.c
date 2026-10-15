/*
 * FUN_1800de960 at 1800de960
 * undefined FUN_1800de960(void)
 * Address ranges: 1800de960-1800de9db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800de960(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  
  lVar5 = FUN_1800eceb0(*(undefined8 *)(param_1 + 8),param_3);
  *(longlong *)(param_1 + 0x480) = lVar5;
  if (lVar5 == 0) {
    bVar4 = false;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x8e);
    uVar2 = *(undefined4 *)(param_2 + 0x92);
    uVar3 = *(undefined4 *)(param_2 + 0x96);
    *(undefined4 *)(lVar5 + 0x668) = *(undefined4 *)(param_2 + 0x8a);
    *(undefined4 *)(lVar5 + 0x66c) = uVar1;
    *(undefined4 *)(lVar5 + 0x670) = uVar2;
    *(undefined4 *)(lVar5 + 0x674) = uVar3;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 4);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x480);
    *(undefined4 *)(*(longlong *)(param_1 + 0x480) + 0x678) = *(undefined4 *)(param_1 + 0x474);
    bVar4 = *(longlong *)(param_1 + 0x10) != 0;
  }
  return bVar4;
}

