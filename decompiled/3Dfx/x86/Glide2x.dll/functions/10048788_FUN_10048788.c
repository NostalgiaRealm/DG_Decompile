/*
 * FUN_10048788 at 10048788
 * undefined __cdecl FUN_10048788(int * param_1, uint param_2)
 * Address ranges: 10048788-100487de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10048788(int *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((param_2 != 0) && ((char)param_1[3] != '\0')) {
    iVar3 = param_2 * 4;
    if ((uint)param_1[2] < (uint)((param_1[1] + iVar3) - *param_1)) {
      FUN_100486f8(param_1,iVar3);
    }
    uVar2 = 0;
    if (param_2 != 0) {
      puVar4 = (undefined4 *)&stack0x0000000c;
      do {
        uVar1 = *puVar4;
        puVar4 = puVar4 + 1;
        *(undefined4 *)(param_1[1] + uVar2 * 4) = uVar1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_2);
    }
    param_1[1] = param_1[1] + iVar3;
  }
  return;
}

