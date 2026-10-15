/*
 * FUN_1800429b0 at 1800429b0
 * undefined4 __fastcall FUN_1800429b0(longlong param_1, longlong param_2)
 * Address ranges: 1800429b0-180042a51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800429b0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar2 = FUN_180050728(*(undefined8 *)(param_1 + 8),&PTR_s_DGD3D11ROOT_18006d588,0);
  *(longlong *)(param_1 + 0x480) = lVar2;
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x8e);
    if (*(char *)(param_2 + 0x22) == '\0') {
      uVar3 = 1;
      uVar4 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x96);
      uVar4 = *(undefined4 *)(param_2 + 0x92);
    }
    *(undefined4 *)(lVar2 + 0x668) = *(undefined4 *)(param_2 + 0x8a);
    *(undefined4 *)(lVar2 + 0x66c) = uVar1;
    *(undefined4 *)(lVar2 + 0x670) = uVar4;
    *(undefined4 *)(lVar2 + 0x674) = uVar3;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 4);
    uVar1 = *(undefined4 *)(param_1 + 0x474);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x480);
    *(undefined4 *)(*(longlong *)(param_1 + 0x480) + 0x678) = uVar1;
    uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),*(longlong *)(param_1 + 0x10) != 0);
  }
  return uVar1;
}

