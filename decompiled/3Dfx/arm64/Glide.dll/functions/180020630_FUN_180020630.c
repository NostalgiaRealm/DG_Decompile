/*
 * FUN_180020630 at 180020630
 * undefined __cdecl FUN_180020630(longlong param_1, undefined4 * param_2, int param_3, byte param_4)
 * Address ranges: 180020630-1800206ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020630(longlong param_1,undefined4 *param_2,int param_3,byte param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    **(undefined4 **)(param_1 + 0x40) = *param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 4) = param_2[1];
    *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 8) = param_2[6];
    *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0xc) = param_2[8];
    *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_2[3];
    *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x14) = param_2[4];
    *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x18) = param_2[5];
    *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x1c) = param_2[7];
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x20) = (uint)param_4;
    lVar3 = 0;
    do {
      lVar1 = lVar3 + 1;
      lVar2 = *(longlong *)(param_1 + 0x40) + lVar3 * 0xc;
      *(undefined8 *)(lVar2 + 0x24) = *(undefined8 *)(param_2 + lVar3 * 3 + 9);
      *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)((longlong)(param_2 + lVar3 * 3 + 9) + 8);
      lVar3 = lVar1;
    } while (lVar1 != 2);
    param_2 = param_2 + 0xf;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x3c;
  }
  return;
}

