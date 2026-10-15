/*
 * FUN_18001e5e0 at 18001e5e0
 * undefined __fastcall FUN_18001e5e0(longlong param_1, undefined4 * param_2, int param_3, uint param_4)
 * Address ranges: 18001e5e0-18001e697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e5e0(longlong param_1,undefined4 *param_2,int param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    do {
      **(undefined4 **)(param_1 + 0x40) = *param_2;
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 4) = param_2[1];
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 8) = param_2[6];
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0xc) = param_2[8];
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_2[3];
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x14) = param_2[4];
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x18) = param_2[5];
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x1c) = param_2[7];
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x20) = param_4 & 0xff;
      lVar2 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x40);
        lVar3 = lVar2 + 1;
        *(undefined8 *)(lVar1 + 0x24 + lVar2 * 0xc) = *(undefined8 *)(param_2 + lVar2 * 3 + 9);
        *(undefined4 *)(lVar1 + 0x2c + lVar2 * 0xc) = param_2[lVar2 * 3 + 0xb];
        lVar2 = lVar3;
      } while (lVar3 != 2);
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x3c;
      param_2 = param_2 + 0xf;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

