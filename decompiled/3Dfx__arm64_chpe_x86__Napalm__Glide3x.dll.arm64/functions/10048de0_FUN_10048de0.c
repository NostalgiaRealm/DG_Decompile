/*
 * FUN_10048de0 at 10048de0
 * undefined FUN_10048de0(void)
 * Address ranges: 10048de0-10048f6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048de0(int param_1,int param_2,undefined4 param_3,int param_4,char param_5)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ushort local_48 [4];
  
  uVar6 = 0;
  iVar5 = 0xe8;
  if (param_5 == '\0') {
    iVar5 = 0xb0;
  }
  puVar1 = (ushort *)(iVar5 + param_2 + param_4 * 0xe);
  local_48[0] = *puVar1;
  local_48[1] = puVar1[1];
  local_48[2] = puVar1[2];
  local_48[3] = puVar1[3];
  do {
    uVar3 = local_48[uVar6] & 0xf0;
    if (uVar3 != 0x40 && (uVar3 - 0x10 & 0xffcf) == 0) {
      uVar3 = local_48[uVar6] & 0xf;
      iVar2 = param_2 + uVar3 * 4;
      if (((*(int *)(iVar2 + 0x6c) == 0) && (*(int *)(iVar2 + 0x78) == 0)) &&
         (*(int *)(iVar2 + 0x84) == 0)) {
        iVar2 = uVar3 + param_2;
        cVar4 = *(char *)(iVar2 + 0xa5);
        FUN_10040ba8(param_1,uVar3,param_2,param_3,*(char *)(iVar2 + 0xa8) != -1,
                     *(char *)(iVar2 + 0xab) != -1,cVar4 != -1);
        if ((cVar4 != -1) && (iVar2 = uVar3 * 0x250, *(int *)(iVar2 + param_1 + 0x1ec) != 0)) {
          FUN_10045940(iVar5 + param_2,uVar3 | 0x2010,uVar3 | 0x2010,0,iVar2 + 0x1d0,iVar2 + 0x1e0,
                       param_2,param_3);
        }
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  return;
}

