/*
 * FUN_1801fbe68 at 1801fbe68
 * undefined FUN_1801fbe68(void)
 * Address ranges: 1801fbe68-1801fbee3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801fbe68(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  
  lVar5 = FUN_180206858(*(undefined8 *)(param_1 + 8),param_3);
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

