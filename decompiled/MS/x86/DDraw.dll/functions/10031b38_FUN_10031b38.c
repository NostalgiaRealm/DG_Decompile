/*
 * FUN_10031b38 at 10031b38
 * uint __fastcall FUN_10031b38(void * param_1, int param_2)
 * Address ranges: 10031b38-10031ba6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10031b38(void *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined **ppuVar5;
  uint local_2c [8];
  void *local_c;
  uint *local_8;
  
  ppuVar5 = &PTR_DAT_1006b5c0 + *(int *)((int)param_1 + 0x40) * 0x6a;
  pcVar2 = *ppuVar5;
  if (*pcVar2 != -1) {
    local_8 = (uint *)(param_2 + 0x48);
    iVar4 = 0;
    local_c = param_1;
    do {
      FUN_10024c76(local_c,local_2c,(uint)(byte)pcVar2[iVar4]);
      if ((local_2c[0] != 0) && (uVar3 = FUN_10031a59(local_8,local_2c,0), (char)uVar3 != '\0')) {
        return (uint)(byte)(*ppuVar5)[iVar4];
      }
      pcVar2 = *ppuVar5;
      iVar1 = iVar4 + 1;
      iVar4 = iVar4 + 1;
    } while (pcVar2[iVar1] != -1);
  }
  return 0xffffffff;
}

