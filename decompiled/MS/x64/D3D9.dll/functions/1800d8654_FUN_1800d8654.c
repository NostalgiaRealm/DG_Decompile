/*
 * FUN_1800d8654 at 1800d8654
 * undefined4 __fastcall FUN_1800d8654(longlong param_1, longlong param_2, undefined8 param_3)
 * Address ranges: 1800d8654-1800d86e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800d8654(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = FUN_1800de604(*(undefined8 *)(param_1 + 8),&PTR_s_DGD3D12ROOT_180110758,param_3);
  *(longlong *)(param_1 + 0x480) = lVar4;
  uVar3 = 0;
  if (lVar4 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x8e);
    uVar1 = *(undefined4 *)(param_2 + 0x92);
    uVar2 = *(undefined4 *)(param_2 + 0x96);
    *(undefined4 *)(lVar4 + 0x668) = *(undefined4 *)(param_2 + 0x8a);
    *(undefined4 *)(lVar4 + 0x66c) = uVar3;
    *(undefined4 *)(lVar4 + 0x670) = uVar1;
    *(undefined4 *)(lVar4 + 0x674) = uVar2;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 4);
    uVar3 = *(undefined4 *)(param_1 + 0x474);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x480);
    *(undefined4 *)(*(longlong *)(param_1 + 0x480) + 0x678) = uVar3;
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),*(longlong *)(param_1 + 0x10) != 0);
  }
  return uVar3;
}

