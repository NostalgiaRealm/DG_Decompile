/*
 * FUN_1005d5aa at 1005d5aa
 * undefined __fastcall FUN_1005d5aa(int * param_1, int * param_2)
 * Address ranges: 1005d5aa-1005d643
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1005d5aa(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  if (param_1[4] == 1) {
    for (iVar2 = 0x2c; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  else {
    FUN_1005d293(param_2);
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    iVar2 = param_1[2];
    param_2[4] = 1;
    iVar4 = 0;
    param_2[2] = iVar2;
    local_8 = 0;
    if (iVar2 != 0) {
      do {
        bVar1 = *(byte *)((int)param_1 + local_8 + 0x9c);
        uVar3 = (uint)bVar1;
        *(byte *)((int)param_2 + local_8 + 0x9c) = bVar1;
        bVar1 = *(byte *)((int)param_1 + uVar3 * 8 + 0x16);
        *(undefined1 *)((int)param_2 + uVar3 * 8 + 0x15) =
             *(undefined1 *)((int)param_1 + uVar3 * 8 + 0x15);
        *(char *)(param_2 + uVar3 * 2 + 6) = (char)param_1[uVar3 * 2 + 6];
        *(undefined1 *)((int)param_2 + uVar3 * 8 + 0x19) =
             *(undefined1 *)((int)param_1 + uVar3 * 8 + 0x19);
        *(byte *)((int)param_2 + uVar3 * 8 + 0x16) = bVar1;
        *(char *)((int)param_2 + uVar3 * 8 + 0x17) = (char)iVar4;
        iVar4 = iVar4 + (uint)(bVar1 >> 2);
        local_8 = local_8 + 1;
        *(undefined1 *)(param_2 + uVar3 * 2 + 5) = 0;
      } while (local_8 < (uint)param_1[2]);
    }
    param_2[3] = iVar4 << 2;
  }
  return;
}

