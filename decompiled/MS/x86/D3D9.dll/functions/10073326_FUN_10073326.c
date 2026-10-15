/*
 * FUN_10073326 at 10073326
 * undefined __fastcall FUN_10073326(int * param_1, int * param_2)
 * Address ranges: 10073326-100733bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10073326(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[4] == 1) {
    for (iVar2 = 0x95; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  else {
    FUN_10072f49(param_2);
    iVar3 = 0;
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    iVar2 = param_1[2];
    param_2[4] = 1;
    uVar4 = 0;
    param_2[2] = iVar2;
    if (param_1[2] != 0) {
      do {
        *(undefined1 *)((int)param_2 + uVar4 + 0x214) =
             *(undefined1 *)((int)param_1 + uVar4 + 0x214);
        uVar1 = (uint)*(byte *)((int)param_1 + uVar4 + 0x214);
        *(undefined1 *)(param_2 + uVar1 * 2 + 5) = 0;
        *(undefined1 *)((int)param_2 + uVar1 * 8 + 0x15) =
             *(undefined1 *)((int)param_1 + uVar1 * 8 + 0x15);
        *(undefined1 *)((int)param_2 + uVar1 * 8 + 0x16) =
             *(undefined1 *)((int)param_1 + uVar1 * 8 + 0x16);
        *(char *)((int)param_2 + uVar1 * 8 + 0x17) = (char)iVar3;
        *(char *)(param_2 + uVar1 * 2 + 6) = (char)param_1[uVar1 * 2 + 6];
        *(undefined1 *)((int)param_2 + uVar1 * 8 + 0x19) =
             *(undefined1 *)((int)param_1 + uVar1 * 8 + 0x19);
        iVar3 = iVar3 + (uint)(*(byte *)((int)param_1 + uVar1 * 8 + 0x16) >> 2);
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)param_1[2]);
    }
    param_2[3] = iVar3 << 2;
  }
  return;
}

