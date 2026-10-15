/*
 * FUN_1800083fc at 1800083fc
 * undefined4 * __fastcall FUN_1800083fc(longlong param_1, undefined4 * param_2)
 * Address ranges: 1800083fc-1800084bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1800083fc(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0xe38);
  *param_2 = 1;
  param_2[1] = 1;
  param_2[2] = 1;
  param_2[3] = 1;
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xe60) == '\0') {
      *param_2 = *(undefined4 *)(param_1 + 0xe58);
      param_2[1] = *(undefined4 *)(param_1 + 0xe40);
      param_2[2] = *(undefined4 *)(param_1 + 0xe5c);
      uVar3 = *(undefined4 *)(param_1 + 0xe44);
LAB_1800084b7:
      param_2[3] = uVar3;
    }
    else if (*(uint *)(param_1 + 0xeb8) != 0) {
      uVar6 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xeb0) + uVar6 * 8);
        if (*(char *)(lVar2 + 0xf9) == '\0') {
          lVar4 = (ulonglong)*(uint *)(param_1 + 0xea8) * 600;
          *param_2 = *(undefined4 *)(&DAT_180112a8c + lVar4);
          param_2[1] = *(undefined4 *)(lVar2 + 0x90);
          param_2[2] = *(undefined4 *)(&DAT_180112a90 + lVar4);
          uVar3 = *(undefined4 *)(lVar2 + 0x94);
          goto LAB_1800084b7;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0xeb8));
    }
  }
  return param_2;
}

