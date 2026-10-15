/*
 * FUN_1007f232 at 1007f232
 * undefined4 __stdcall FUN_1007f232(int param_1, undefined4 * param_2)
 * Address ranges: 1007f232-1007f28c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007f232(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar2 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_1 + 0x14);
    puVar5 = param_2;
    for (iVar3 = 0x35; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    param_2[1] = *(undefined4 *)(param_1 + -0x4de0);
    *param_2 = *(undefined4 *)(param_1 + -0x4ddc);
    param_2[0x32] = *(undefined4 *)(param_1 + -0x4dd0);
    cVar1 = FUN_1000272e(*(int *)(param_1 + -0x4db4));
    if (cVar1 == '\0') {
      param_2[7] = param_2[7] & 0xfeffffff;
    }
    uVar2 = 0;
  }
  return uVar2;
}

